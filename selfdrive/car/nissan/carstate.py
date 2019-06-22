import numpy as np
from common.kalman.simple_kalman import KF1D
from selfdrive.config import Conversions as CV
from selfdrive.can.parser import CANParser
from selfdrive.car.nissan.values import DBC

def get_powertrain_can_parser(CP):
  # this function generates lists for signal, messages and initial values
  signals = [
    ("FL", "WheelspeedFront", 0),
    ("FR", "WheelspeedFront", 0),
    ("RL", "WheelspeedRear", 0),
    ("RR", "WheelspeedRear", 0),
    ("DOOR_OPEN_FR", "Doors", 1),
    ("DOOR_OPEN_FL", "Doors", 1),
    ("DOOR_OPEN_RR", "Doors", 1),
    ("DOOR_OPEN_RL", "Doors", 1),
    ("STEER_TORQUE", "STEER_TORQUE", 0),
    ("Steering_Angle", "SteeringWheel", 0),
  ]

  checks = [
    # sig_address, frequency
    ("WheelspeedRear", 50),
    ("WheelspeedFront", 50),
    ("Doors", 10),
  ]

  return CANParser(DBC[CP.carFingerprint]['pt'], signals, checks, 0, timeout=100)

def get_camera_can_parser(CP):
  signals = [
    ("CRUISE_ON", "ProPilot", 0),
    ("CRUISE_ACTIVATED", "ProPilot", 0),
    ("STEER_STATUS", "ProPilot", 0),
  ]

  checks = [
  ]

  return CANParser(DBC[CP.carFingerprint]['pt'], signals, checks, 1)

class CarState(object):
  def __init__(self, CP):
    # initialize can parser
    self.CP = CP

    self.car_fingerprint = CP.carFingerprint
    self.steer_torque_driver = 0

    # vEgo kalman filter
    dt = 0.01
    self.v_ego_kf = KF1D(x0=[[0.], [0.]],
                         A=[[1., dt], [0., 1.]],
                         C=[1., 0.],
                         K=[[0.12287673], [0.29666309]])
    self.v_ego = 0.

  def update(self, cp, cp_cam):

    self.can_valid = cp.can_valid
    self.cam_can_valid = cp_cam.can_valid

    self.pedal_gas = 0
    self.brake_pressure = 0
    self.user_gas_pressed = self.pedal_gas > 0
    self.brake_pressed = self.brake_pressure > 0
    self.brake_lights = bool(self.brake_pressed)

    self.v_wheel_fl = cp.vl["WheelspeedFront"]['FL'] * CV.KPH_TO_MS
    self.v_wheel_fr = cp.vl["WheelspeedFront"]['FR'] * CV.KPH_TO_MS
    self.v_wheel_rl = cp.vl["WheelspeedRear"]['RL'] * CV.KPH_TO_MS
    self.v_wheel_rr = cp.vl["WheelspeedRear"]['RR'] * CV.KPH_TO_MS

    self.v_cruise_pcm = self.v_ego

    v_wheel = (self.v_wheel_fl + self.v_wheel_fr + self.v_wheel_rl + self.v_wheel_rr) / 4.
    # Kalman filter, even though Hyundai raw wheel speed is heaviliy filtered by default
    if abs(v_wheel - self.v_ego) > 2.0:  # Prevent large accelerations when car starts at non zero speed
      self.v_ego_kf.x = np.matrix([[v_wheel], [0.0]])

    self.v_ego_raw = v_wheel
    v_ego_x = self.v_ego_kf.update(v_wheel)

    self.v_ego = float(v_ego_x[0])
    self.a_ego = float(v_ego_x[1])
    self.standstill = self.v_ego_raw < 0.01
    self.left_blinker_on = 0
    self.right_blinker_on = 0
    self.prev_left_blinker_on = self.left_blinker_on
    self.prev_right_blinker_on = self.right_blinker_on
    self.seatbelt_unlatched = 0
    self.steer_torque_driver = cp.vl["STEER_TORQUE"]['STEER_TORQUE']
    self.acc_active = cp.vl["ProPilot"]['CRUISE_ACTIVATED']
    self.main_on = cp.vl["ProPilot"]['CRUISE_ON']
    self.steer_override = abs(self.steer_torque_driver) > 2
    self.angle_steers = cp.vl["SteeringWheel"]['Steering_Angle']
    self.door_open = any([cp.vl["Doors"]['DOOR_OPEN_RR'],
      cp.vl["Doors"]['DOOR_OPEN_RL'],
      cp.vl["Doors"]['DOOR_OPEN_FR'],
      cp.vl["Doors"]['DOOR_OPEN_FL']])
