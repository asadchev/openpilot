typedef unsigned char   undefined;

typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    wchar16;



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d007e00(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  *(undefined *)param_1 = 0;
  *(undefined *)((int)param_1 + 1) = 0;
  uVar1 = 0;
  if (2 < _DAT_a0012e28) {
    uVar1 = (ushort)_DAT_a0013308 & 7;
  }
  *param_1 = uVar1;
  *param_1 = uVar1 | (ushort)DAT_a0013314 << 3;
  if (_DAT_a0013320 == 0) {
    uVar2 = 0;
    if (2 < _DAT_a0012df8) {
      if (_DAT_a0012e08 < 3) {
        uVar1 = *param_1;
        goto LAB_1d007eec;
      }
      if (_DAT_a0012e18 < 3) {
        uVar1 = *param_1;
        goto LAB_1d007eec;
      }
      if (2 < _DAT_a0012e28) {
        uVar2 = _DAT_a0013310 & 7;
      }
    }
  }
  else {
    uVar2 = _DAT_a001330c & 7;
  }
  uVar1 = *param_1;
LAB_1d007eec:
  *param_1 = uVar1 & 0xf | (ushort)(uVar2 << 4);
  uVar2 = 0;
  if (((2 < _DAT_a0012df8) && (uVar2 = 0, 2 < _DAT_a0012e08)) && (uVar2 = 0, 2 < _DAT_a0012e18)) {
    uVar2 = (uint)(_DAT_a0012e28 < 3) ^ 1;
  }
  uVar1 = *param_1 & 0x7f | (ushort)((uVar2 ^ 1) << 7);
  *param_1 = uVar1;
  *param_1 = uVar1 | (ushort)(_DAT_a0013318 << 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d007f88(byte *param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (_DAT_a0012e38 < 3) {
    param_1[2] = param_1[2] & 0x7f | 0x80;
  }
  else {
    bVar2 = (byte)((_DAT_a0012e2c << 0x1a) >> 0x18);
    *param_1 = bVar2 >> 6;
    bVar2 = bVar2 >> 6 | (byte)(((_DAT_a0012e2c << 0x18) >> 0x1e) << 2);
    *param_1 = bVar2;
    *param_1 = bVar2 | (byte)(_DAT_a0012e2c << 4);
    bVar2 = (byte)((_DAT_a0012e2c << 0x10) >> 0x18);
    param_1[1] = bVar2 >> 5;
    bVar2 = bVar2 >> 5 | (byte)(((uint)(_DAT_a0012e30 << 0x1a) >> 0x1f) << 3);
    param_1[1] = bVar2;
    bVar2 = bVar2 | (byte)(((_DAT_a0012e2c << 7) >> 0x1f) << 4);
    param_1[1] = bVar2;
    bVar2 = bVar2 | (byte)(((_DAT_a0012e2c << 6) >> 0x1f) << 5);
    param_1[1] = bVar2;
    bVar2 = bVar2 | (byte)(((_DAT_a0012e2c << 0x17) >> 0x1f) << 6);
    param_1[1] = bVar2;
    param_1[1] = bVar2 | (byte)(((_DAT_a0012e2c << 2) >> 0x1f) << 7);
    param_1[4] = (byte)(((_DAT_a0012e2c << 1) >> 0x1f) << 7);
    bVar2 = (byte)((uint)(_DAT_a0012e30 << 0x19) >> 0x18);
    param_1[2] = bVar2 >> 7;
    bVar2 = bVar2 >> 7 | (byte)(((_DAT_a0012e2c << 10) >> 0x1f) << 1);
    param_1[2] = bVar2;
    bVar2 = bVar2 | (byte)(((_DAT_a0012e2c << 4) >> 0x1f) << 2);
    param_1[2] = bVar2;
    bVar2 = bVar2 | (byte)(((_DAT_a0012e2c << 3) >> 0x1f) << 3);
    param_1[2] = bVar2;
    bVar2 = bVar2 | (byte)(((_DAT_a0012e2c << 0x14) >> 0x1f) << 4);
    param_1[2] = bVar2;
    bVar2 = bVar2 | (byte)(((_DAT_a0012e2c << 0x13) >> 0x1f) << 5);
    param_1[2] = bVar2;
    param_1[2] = bVar2 | ((_DAT_a0012e2c & 0xc00000) == 0x400000) << 6;
  }
  if (2 < _DAT_a00130d4) {
    bVar2 = (byte)((uint)(_DAT_a00130cc << 2) >> 0x18);
    param_1[3] = bVar2 >> 7;
    bVar2 = bVar2 >> 7 | (byte)(((uint)(_DAT_a00130cc << 3) >> 0x1f) << 1);
    param_1[3] = bVar2;
    bVar2 = bVar2 | (byte)(((uint)(_DAT_a00130cc << 0xf) >> 0x1f) << 2);
    param_1[3] = bVar2;
    bVar2 = bVar2 | (byte)(((uint)(_DAT_a00130cc << 0xe) >> 0x1f) << 3);
    param_1[3] = bVar2;
    bVar2 = bVar2 | (byte)(((uint)(_DAT_a00130cc << 4) >> 0x1f) << 4);
    param_1[3] = bVar2;
    param_1[3] = bVar2 | (byte)(((uint)(_DAT_a00130cc << 5) >> 0x1f) << 5);
  }
  if (2 < _DAT_a0012ed8) {
    bVar2 = param_1[3] & 0x3f | ((_DAT_a0012ecc & 0x30) == 0x10) << 6;
    param_1[3] = bVar2;
    param_1[3] = bVar2 | (_DAT_a0012ecc == 0x40000000) << 7;
    bVar1 = (_DAT_a0012ecc & 0xc000) == 0x4000;
    *(bool *)(param_1 + 4) = bVar1;
    param_1[4] = bVar1 | ((_DAT_a0012ecc & 0x3000) == 0x1000) << 1;
  }
  if (_DAT_a0012e44 != 0) {
    bVar3 = param_1[4] & 3 | (byte)(((uint)(_DAT_a0012e3c << 0x1b) >> 0x1f) << 2);
    param_1[4] = bVar3;
    bVar3 = bVar3 | (byte)(((uint)(_DAT_a0012e3c << 0x1c) >> 0x1f) << 3);
    param_1[4] = bVar3;
    bVar2 = (byte)(_DAT_a0012e3c << 4);
    param_1[4] = bVar3 | bVar2;
    bVar2 = bVar3 | bVar2 & 0x1f | (byte)(((uint)(_DAT_a0012e3c << 0x1e) >> 0x1f) << 5);
    param_1[4] = bVar2;
    param_1[4] = bVar2 | (byte)(((uint)(_DAT_a0012e3c << 0x1d) >> 0x1f) << 6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d008268(short *param_1)

{
  *(undefined *)param_1 = 0;
  *(undefined *)((int)param_1 + 1) = 0;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined *)((int)param_1 + 3) = 0;
  if ((_DAT_a0012e70 & 0xc00000) == 0xc00000) {
    *param_1 = (ushort)DAT_a0012e6d + 0x810c + (ushort)DAT_a0012e6c * 0x100;
  }
  if ((_DAT_a0012e70 & 0x300000) == 0x300000) {
    param_1[1] = (ushort)DAT_a0012e6f + 0x810c + (ushort)DAT_a0012e6e * 0x100;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d0082ec(short *param_1)

{
  *(undefined *)param_1 = 0;
  *(undefined *)((int)param_1 + 1) = 0;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined *)((int)param_1 + 3) = 0;
  *(undefined *)(param_1 + 2) = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  if ((_DAT_a0012e7c & 0x60) == 0x60) {
    *param_1 = ((ushort)DAT_a0012e7d - 4000) + (ushort)((_DAT_a0012e7c << 0x1b) >> 0x1b) * 0x100;
  }
  if ((_DAT_a0012e7c & 0x600000) == 0x600000) {
    param_1[1] = ((ushort)DAT_a0012e7f - 4000) + (ushort)((_DAT_a0012e7c << 0xb) >> 0x1b) * 0x100;
  }
  if ((_DAT_a0012e80 & 0x60) == 0x60) {
    param_1[2] = ((ushort)DAT_a0012e81 - 4000) + (ushort)((_DAT_a0012e80 << 0x1b) >> 0x1b) * 0x100;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d0083c4(short *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  *(undefined *)param_1 = 0;
  *(undefined *)((int)param_1 + 1) = 0;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined *)((int)param_1 + 3) = 0;
  *(undefined *)(param_1 + 2) = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined *)((int)param_1 + 7) = 0;
  sVar1 = ((ushort)_DAT_a0012e9c & 0x7f) * 0x100 + (ushort)DAT_a0012e9d;
  *param_1 = sVar1;
  sVar2 = (ushort)((uint)(_DAT_a0012e9c << 9) >> 0x19) * 0x100 + (ushort)DAT_a0012e9f;
  param_1[1] = sVar2;
  sVar3 = ((ushort)_DAT_a0012ea0 & 0x7f) * 0x100 + (ushort)DAT_a0012ea1;
  param_1[2] = sVar3;
  sVar4 = (ushort)((uint)(_DAT_a0012ea0 << 9) >> 0x19) * 0x100 + (ushort)DAT_a0012ea3;
  param_1[3] = sVar4;
  if (_DAT_a0012e94 != 0) {
    if ((_DAT_a0012e90 & 0xc0) == 0x40) {
      *param_1 = -sVar1;
      param_1[2] = -sVar3;
    }
    if ((_DAT_a0012e90 & 3) == 1) {
      param_1[1] = -sVar2;
      param_1[3] = -sVar4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void update_status_report(uint *param_1)

{
  uint uVar1;
  
  if ((int)(param_1[1] << 3) < 0) {
    uVar1 = (*param_1 & 0x7ff) << 0x12 | (param_1[1] << 4) >> 0xe;
  }
  else {
    uVar1 = *param_1 & 0x7ff;
  }
                    // BO_ 103 Gear_Report: 2 STEER
  if (uVar1 == 0x67) {
    _DAT_a0013118 = param_1[2];
    _DAT_a001311c = param_1[3];
    _DAT_a0013120 = 200;
    if (_DAT_a0013124 != -1) {
      _DAT_a0013120 = 200;
      _DAT_a0013124 = _DAT_a0013124 + 1;
      return;
    }
  }
  else {
    if (uVar1 < 0x68) {
                    // BO_ 101 Steering_Report: 8 STEER
                    // 
      if (uVar1 == 0x65) {
        _DAT_a0013108 = param_1[2];
        _DAT_a001310c = param_1[3];
        _DAT_a0013110 = 100;
        if (_DAT_a0013114 != -1) {
          _DAT_a0013110 = 100;
          _DAT_a0013114 = _DAT_a0013114 + 1;
          return;
        }
      }
    }
    else {
                    // BO_ 106 WheelSpeed_Report: 8 STEER
      if (uVar1 == 0x6a) {
        _DAT_a0013128 = param_1[2];
        _DAT_a001312c = param_1[3];
        _DAT_a0013130 = 100;
        if (_DAT_a0013134 != -1) {
          _DAT_a0013130 = 100;
          _DAT_a0013134 = _DAT_a0013134 + 1;
          return;
        }
      }
      else {
        if (uVar1 != 0x74) {
          return;
        }
                    // BO_ 116 BrakeInfo_Report: 8 STEER
        _DAT_a0013138 = param_1[2];
        _DAT_a001313c = param_1[3];
        _DAT_a0013140 = 200;
        if (_DAT_a0013144 != -1) {
          _DAT_a0013140 = 200;
          _DAT_a0013144 = _DAT_a0013144 + 1;
          return;
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d008668(byte *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    DAT_a0013314 = 0;
  }
  if (((((_DAT_a0013304 == 0) && ((*param_1 + 7 & 7) < 5)) && (2 < _DAT_a0012df8)) &&
      ((2 < _DAT_a0012e08 && (2 < _DAT_a0012e18)))) &&
     ((2 < _DAT_a0012e28 &&
      ((iVar2 = FUN_1d0154e0(), iVar2 == 0 && (uVar1 = (uint)*param_1 & 7, uVar1 != _DAT_a001330c)))
      ))) {
    if ((int)(_DAT_a0012e0c << 8) < 0) {
      if ((_DAT_a0012e0c << 0x18) >> 0x1d != uVar1) {
        if ((((_DAT_a0012fac == 0) || (-1 < _DAT_a0012fa8 << 6)) &&
            ((_DAT_a0012fcc == 0 || (-1 < _DAT_a0012fc8 << 6)))) && (DAT_a001332e == '\0')) {
          if (1 < _DAT_a0013324) {
            if ((*param_1 & 7) == 5) {
              _DAT_a0013318 = 3;
              return;
            }
            if ((_DAT_a0012e0c & 0xe0) == 0x20) {
              _DAT_a0013318 = 4;
              return;
            }
          }
          _DAT_a0013320 = 2000;
          DAT_a0013314 = 0;
          _DAT_a0013318 = 0;
          _DAT_a001330c = uVar1;
        }
        else {
          _DAT_a0013318 = 2;
        }
      }
    }
    else {
      _DAT_a0013318 = 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d008848(int param_1)

{
  bool bVar1;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  if ((((2 < _DAT_a0012eb8) || (2 < _DAT_a0012ec8)) || ((2 < _DAT_a0013054 && (2 < _DAT_a0013064))))
     && ((bVar1 = 200 < (uint)(DAT_a00000a8 - DAT_a0000098), bVar1 || (param_1 != 0)))) {
    local_10 = 0;
    local_c = 0;
    if (2 < _DAT_a0012eb8) {
      if ((_DAT_a0012eac & 0x100) != 0) {
        local_10 = 1;
      }
      if ((_DAT_a0012eac & 0x3070000) == 0x20000) {
        local_10 = local_10 | 2;
      }
      if ((_DAT_a0012eac & 0xe00000) == 0x200000) {
        local_10 = local_10 | 4;
      }
      if ((_DAT_a0012eac & 0x18f800) == 0x184000) {
        local_10 = local_10 | 8;
      }
    }
    if (2 < _DAT_a0012ec8) {
      if ((_DAT_a0012ebc & 0x100) != 0) {
        local_10 = local_10 | 0x10;
      }
      if ((_DAT_a0012ebc & 0x3070000) == 0x20000) {
        local_10 = local_10 | 0x20;
      }
      if ((_DAT_a0012ebc & 0xe00000) == 0x200000) {
        local_10 = local_10 | 0x40;
      }
      if ((_DAT_a0012ebc & 0x18f800) == 0x184000) {
        local_10 = local_10 | 0x80;
      }
    }
    if ((2 < _DAT_a0013054) && (2 < _DAT_a0013064)) {
      if (((_DAT_a0013058 & 0xe0) == 0) &&
         (((_DAT_a0013058 & 6) != 6 && ((_DAT_a001305c & 0xc0) != 0xc0)))) {
        if (((_DAT_a0013058 & 6) == 2) && ((_DAT_a001305c & 0xc0) == 0x40)) {
          local_10 = local_10 | ((_DAT_a001304c << 0x18) >> 0x1c) << 8 |
                     ((_DAT_a0013048 << 4) >> 0x1c) << 0xc | (_DAT_a0013048 >> 0x1c) << 0x10 |
                     (_DAT_a001304c & 0xf) << 0x14 | ((_DAT_a001304c << 0x10) >> 0x1c) << 0x18 |
                     (_DAT_a001304c & 0xf00) << 0x14;
          local_c = (_DAT_a0013058 << 8) >> 0x1c | ((_DAT_a0013058 << 0x14) >> 0x1c) << 4 |
                    ((_DAT_a0013058 << 0x10) >> 0x1c) << 8 | ((_DAT_a0013058 << 0xc) >> 0x1c) << 0xc
                    | (_DAT_a0013058 >> 0x1c) << 0x10 | ((_DAT_a0013058 << 4) >> 0x1c) << 0x14;
        }
      }
      else {
        local_c = 0x80000000;
      }
    }
    if (((bVar1) || (local_10 != DAT_a0000090)) || (local_c != DAT_a0000094)) {
      DAT_a0000090 = local_10;
      DAT_a0000094 = local_c;
      DAT_a0000098 = DAT_a00000a8;
      local_14 = 8;
      local_18 = 0x73;
      FUN_1d0127a0(&local_18);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d008b6c(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  
  if ((2 < _DAT_a0012ed8) && (iVar1 = FUN_1d0154e0(), iVar1 != 0)) {
    local_c = _DAT_a0012ed0;
    if (DAT_a00000a8 % 400 < 200) {
      local_10 = _DAT_a0012ecc & 0x3fffffff | 0x40000000;
    }
    else {
      local_10 = _DAT_a0012ecc & 0x3fffffff | 0x80000000;
    }
    local_14 = 8;
    local_18 = 0x4c;
    can0_send_message(&local_18);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d008c2c(byte *param_1)

{
  int iVar1;
  
  if (((*param_1 & 3) != 0) && (2 < _DAT_a0012e38)) {
    if (((_DAT_a0012fac == 0) || (-1 < _DAT_a0012fa8 << 6)) &&
       ((((_DAT_a0012fcc == 0 || (-1 < _DAT_a0012fc8 << 6)) && (DAT_a001332e == '\0')) &&
        (iVar1 = FUN_1d0154e0(), iVar1 == 0)))) {
      _DAT_a0012db4 = (uint)*param_1 & 3;
      _DAT_a0012db8 = 200;
    }
    else {
      _DAT_a0012db8 = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void update_steer_state(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((((3 < _DAT_a0012f6c) && (3 < _MSG_133_COUNT)) && (3 < _STEERING_MSG_COUNT)) &&
      ((3 < _DAT_a0012e58 && (_DAT_a0012fdc != 0)))) &&
     ((_DAT_a0012fd4 << 0xf < 0 && ((DAT_a001332e == '\0' && (DAT_a001332f == '\0')))))) {
    iVar2 = FUN_1d0154e0();
    if (((iVar2 == 0) || (iVar2 = FUN_1d01550c(), iVar2 != 0)) &&
       ((iVar2 = FUN_1d016270(), iVar2 == 0 && (2 < _DAT_a0013394)))) {
      uVar1 = (uint)(_DAT_a0012f60 << 8) >> 0x1e;
      iVar2 = _HANDSHAKE_MAYBE_;
      if (uVar1 == 1) {
        iVar3 = 1;
      }
      else {
        if (uVar1 == 2) {
          iVar2 = _STEERING_ANGLE_ / 100 - _HANDSHAKE_MAYBE_;
          if (iVar2 < 0x547) {
            if (iVar2 < -0x546) {
              iVar3 = 1;
              iVar2 = _HANDSHAKE_MAYBE_ + -0x546;
            }
            else {
              iVar3 = 1;
              iVar2 = _STEERING_ANGLE_ / 100;
            }
          }
          else {
            iVar3 = 1;
            iVar2 = _HANDSHAKE_MAYBE_ + 0x546;
          }
        }
        else {
          iVar3 = 0;
        }
      }
      if (iVar2 + 10000U < 0x7fff) {
        DAT_a001332d = (undefined)iVar3;
        *(undefined *)((int)param_1 + 1) = 0;
        *(undefined *)param_1 = 1;
        *param_1 = *param_1 & 0x7fffff | iVar3 << 0x17;
        *(undefined *)((int)param_1 + 3) = (char)(iVar2 + 10000U);
      }
      else {
        DAT_a001332d = 0;
        *param_1 = *param_1 & 0x7fffff;
      }
    }
    else {
      DAT_a001332d = 0;
    }
    return;
  }
  DAT_a001332d = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void handle_sid_100(int *param_1)

{
  int iVar1;
  short scmd_angle;
  
  scmd_angle = *(short *)param_1;
  _STEERING_ANGLE_CMD = -0x125c;
  if (-0x125d < scmd_angle) {
    if (0x125c < scmd_angle) {
      scmd_angle = 0x125c;
    }
    _STEERING_ANGLE_CMD = (int)scmd_angle;
  }
                    // EN << 1
  _DAT_a0013380 = (uint)*(byte *)((int)param_1 + 3) << 1;
                    // if CLEAR bit set
  if ((*param_1 << 0xe < 0) ||
     (((_DAT_a0012fdc == 0 || (-1 < _DAT_a0012fd4 << 0xf)) && (*param_1 << 0xf < 0)))) {
    DAT_a001332e = '\0';
  }
                    // i think message here is compared against prior messages
  if ((((3 < _DAT_a0012f6c) && (3 < _MSG_133_COUNT)) &&
      ((3 < _STEERING_MSG_COUNT && ((3 < _DAT_a0012e58 && (_DAT_a0012fdc != 0)))))) &&
     ((_DAT_a0012fd4 << 0xf < 0 && ((DAT_a001332e == '\0' && (DAT_a001332f == '\0')))))) {
    iVar1 = FUN_1d0154e0();
    if (((iVar1 != 0) && (iVar1 = FUN_1d01550c(), iVar1 == 0)) ||
       (iVar1 = FUN_1d016270(), iVar1 != 0)) {
      _STEERING_ANGLE_ = _HANDSHAKE_MAYBE_ * 100;
    }
    return;
  }
  _STEERING_ANGLE_ = _HANDSHAKE_MAYBE_ * 100;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d00909c(undefined2 *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  
  *(undefined *)param_1 = 0;
  *(undefined *)((int)param_1 + 1) = 0;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined *)((int)param_1 + 3) = 0;
  *(undefined *)(param_1 + 2) = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined *)((int)param_1 + 7) = 0;
  *param_1 = (short)_HANDSHAKE_MAYBE_;
  param_1[1] = (short)(_STEERING_ANGLE_ / 100);
  if (3 < _DAT_a0012f6c) {
    if (((3 < _MSG_133_COUNT) && (3 < _STEERING_MSG_COUNT)) && (3 < _DAT_a0012e58)) {
      param_1[2] = (ushort)DAT_a0012e52 * 0x100 + (ushort)DAT_a0012e53;
      *(char *)(param_1 + 3) = DAT_a0012f60 + -0x80;
      if (_DAT_a0012f6c < 4) {
        bVar5 = 0;
        goto LAB_1d0091f4;
      }
    }
    if (_MSG_133_COUNT < 4) {
      bVar5 = 0;
      goto LAB_1d0091f4;
    }
    if (_STEERING_MSG_COUNT < 4) {
      bVar5 = 0;
      goto LAB_1d0091f4;
    }
    if (_DAT_a0012e58 < 4) {
      bVar5 = 0;
      goto LAB_1d0091f4;
    }
    if (_DAT_a0012fdc == 0) {
      bVar5 = 0;
      goto LAB_1d0091f4;
    }
    bVar5 = 0;
    if (((-1 < _DAT_a0012fd4 << 0xf) || (bVar5 = 0, DAT_a001332e != '\0')) || (DAT_a001332f != '\0')
       ) goto LAB_1d0091f4;
    iVar4 = FUN_1d0154e0();
    if (iVar4 != 0) {
      iVar4 = FUN_1d01550c();
      bVar5 = 0;
      if (iVar4 == 0) goto LAB_1d0091f4;
    }
    iVar4 = FUN_1d016270();
    bVar5 = 0;
    if (iVar4 != 0) goto LAB_1d0091f4;
    if ((_DAT_a0012f60 & 0xc00000) == 0x800000) {
      bVar5 = 1;
      goto LAB_1d0091f4;
    }
  }
  bVar5 = 0;
LAB_1d0091f4:
  *(byte *)((int)param_1 + 7) = bVar5 | DAT_a001332e << 1;
  uVar3 = FUN_1d016270();
  *(byte *)((int)param_1 + 7) = *(byte *)((int)param_1 + 7) & 3 | (byte)((uVar3 & 0x1fffffff) << 2);
  iVar4 = FUN_1d0154e0();
  *(byte *)((int)param_1 + 7) = *(byte *)((int)param_1 + 7) & 7 | (iVar4 != 0) << 3;
  uVar3 = 0;
  if (3 < _STEERING_MSG_COUNT) {
    uVar3 = (uint)(_DAT_a0012e58 < 4) ^ 1;
  }
  *(byte *)((int)param_1 + 7) = *(byte *)((int)param_1 + 7) & 0xf | (byte)((uVar3 ^ 1) << 4);
  uVar3 = 0;
  if (3 < _DAT_a0012f6c) {
    uVar3 = (uint)(_MSG_133_COUNT < 4) ^ 1;
  }
  bVar5 = *(byte *)((int)param_1 + 7);
  bVar1 = (byte)((uVar3 ^ 1) << 5);
  *(byte *)((int)param_1 + 7) = bVar5 & 0x1f | bVar1;
  bVar2 = DAT_a001332f << 6;
  bVar1 = bVar5 & 0x1f | bVar1;
  *(byte *)((int)param_1 + 7) = bVar1 | bVar2;
  *(byte *)((int)param_1 + 7) = bVar1 | bVar2 & 0x7f | (_DAT_a0012fdc == 0) << 7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void can1_send_936(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  
  if (DAT_a001332d == '\0') {
    if (_DAT_a0013328 != 0) {
      return;
    }
    if (param_1 != 0) {
      return;
    }
  }
  else {
    if (_STEERING_MSG_REMAINING == 0) {
      local_10 = 0;
      local_c = 0;
    }
    else {
      local_c = _STEERING_MSG_DATA_L;
      local_10 = _STEERING_MSG_DATA_H & 0x7fffff;
    }
    local_14 = 8;
    local_18 = 0x3a8;
    if (param_1 != 0) {
      _DAT_bf8860e8 = 0x20;
      can_tx_12(&local_18);
      return;
    }
    can1_send_message(&local_18);
    _DAT_bf8860e4 = 0x20;
    if (_DAT_a0013328 != 0) {
      _DAT_bf8860e4 = 0x20;
      return;
    }
  }
  local_14 = 8;
  local_18 = 0x65;
  FUN_1d00909c(&local_10);
  FUN_1d0152f0(&local_10);
  FUN_1d0127a0(&local_18);
  return;
}



undefined4 FUN_1d009438(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = FUN_1d0141bc();
  }
  else {
    if (param_1 == 0) {
      uVar1 = FUN_1d013d0c();
    }
    else {
      if (param_1 == 2) {
        uVar1 = FUN_1d01449c();
      }
      else {
        if (param_1 == 3) {
          uVar1 = FUN_1d014774();
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



undefined4 FUN_1d0094bc(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = FUN_1d0141dc();
  }
  else {
    if (param_1 == 0) {
      uVar1 = FUN_1d013d2c();
    }
    else {
      if (param_1 == 2) {
        uVar1 = FUN_1d0144b8();
      }
      else {
        if (param_1 == 3) {
          uVar1 = FUN_1d014814();
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



void FUN_1d009540(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_1d018b2c(param_1 + 3,0,0x1c);
  return;
}



uint * FUN_1d009578(uint *param_1,uint param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != (uint *)0x0) {
    uVar4 = param_3[1];
    uVar3 = param_3[2];
    uVar2 = param_3[3];
    param_1[6] = *param_3;
    param_1[7] = uVar4;
    param_1[8] = uVar3;
    param_1[9] = uVar2;
    param_1[5] = param_2;
    *(undefined *)(param_1 + 3) = 1;
    *(undefined *)((int)param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 3) == '\0') {
    return (uint *)0;
  }
  if (param_1[2] == 0) {
    cVar1 = *(char *)((int)param_1 + 0xd);
  }
  else {
    if (param_1[2] <= param_2 - param_1[5]) {
      *(undefined *)(param_1 + 3) = 0;
      return (uint *)0;
    }
    cVar1 = *(char *)((int)param_1 + 0xd);
  }
  if (cVar1 != '\0') {
    if (param_1[1] == 0) {
      return (uint *)0;
    }
    if (param_1[1] <= param_2 - param_1[4]) {
      param_1[4] = param_2;
      return param_1 + 6;
    }
    return (uint *)0;
  }
  if (*param_1 <= param_2 - param_1[4]) {
    *(undefined *)((int)param_1 + 0xd) = 1;
    param_1[4] = param_2;
    return param_1 + 6;
  }
  return (uint *)0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d009684(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined auStack16 [8];
  
  if (_DAT_a0013328 == 0) {
    local_14 = 8;
    local_18 = 0x65;
    FUN_1d00909c(auStack16);
    iVar1 = FUN_1d009578(0xa0013330,DAT_a00000a8,&local_18);
    if (iVar1 != 0) {
      FUN_1d0152f0(iVar1 + 8);
      FUN_1d0127a0(iVar1);
      update_status_report(iVar1);
    }
  }
  return;
}



void can1_send_936_1(void)

{
  can1_send_936(1);
  return;
}



void can1_send_936_0(void)

{
  can1_send_936(0);
  return;
}



void reset_something(void)

{
  reset_some_global_vars();
  reset_interrupts();
  FUN_1d01389c(500000);
  FUN_1d013d4c(500000);
  FUN_1d0141fc(500000);
  FUN_1d0144d4(500000);
  FUN_1d009540(0xa0013330,5,0,0x1e);
  FUN_1d009540(0xa0013358,5,0x32,0);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void finalize_rx_tx_loop(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  
  if (DAT_a0012de4 == '\0') {
    DAT_a0012de4 = '\x01';
  }
  else {
    _DAT_a0012de0 = _DAT_a0012de0 + -1 + (param_1 - _DAT_a0012ddc);
  }
  _DAT_a0012ddc = param_1;
  FUN_1d0133b4();
  DAT_a00000a8 = DAT_a00000a8 + 1;
  uVar2 = DAT_a000008c + 1;
  DAT_a000008c = uVar2 - ((uVar2 / 0x14) * 4 +
                         ((uint)((ulonglong)uVar2 * 0xcccccccd >> 0x20) & 0xfffffff0));
  DAT_a0000014 = (DAT_a0000014 + 1) % 0x32;
  DAT_a0000010 = (DAT_a0000010 + 1) % 0xfa;
  FUN_1d0148fc();
  iVar3 = FUN_1d0154f0();
  if (iVar3 != 0) {
    DAT_a000009c = 1000;
  }
  if ((((((_DAT_a0012fdc == 1) && (3 < _DAT_a0012f6c)) && (3 < _MSG_133_COUNT)) &&
       ((3 < _STEERING_MSG_COUNT && (3 < _DAT_a0012e58)))) && (_DAT_a0012fd4 << 0xf < 0)) &&
     ((((DAT_a001332e == '\0' && (DAT_a001332f == '\0')) &&
       ((iVar3 = FUN_1d0154e0(), iVar3 == 0 || (iVar3 = FUN_1d01550c(), iVar3 != 0)))) &&
      ((iVar3 = FUN_1d016270(), iVar3 == 0 && ((_DAT_a0012f60 & 0xc00000) == 0x800000)))))) {
    DAT_a000009c = 1000;
  }
  if (_DAT_a0012df4 == 0) {
    _DAT_a0012df8 = 0;
  }
  else {
    _DAT_a0012df4 = _DAT_a0012df4 + -1;
  }
  if (_DAT_a0012e04 == 0) {
    _DAT_a0012e08 = 0;
  }
  else {
    _DAT_a0012e04 = _DAT_a0012e04 + -1;
  }
  if (_DAT_a0012e14 == 0) {
    _DAT_a0012e18 = 0;
  }
  else {
    _DAT_a0012e14 = _DAT_a0012e14 + -1;
  }
  if (_DAT_a0012e24 == 0) {
    _DAT_a0012e28 = 0;
  }
  else {
    _DAT_a0012e24 = _DAT_a0012e24 + -1;
  }
  if (_DAT_a0012e34 == 0) {
    _DAT_a0012e38 = 0;
  }
  else {
    _DAT_a0012e34 = _DAT_a0012e34 + -1;
  }
  if (_DAT_a0012e44 == 0) {
    _DAT_a0012e48 = 0;
  }
  else {
    _DAT_a0012e44 = _DAT_a0012e44 + -1;
  }
  if (_DAT_a0012e54 == 0) {
    _DAT_a0012e58 = 0;
  }
  else {
    _DAT_a0012e54 = _DAT_a0012e54 + -1;
  }
  if (_STEERING_MSG_REMAINING == 0) {
    _STEERING_MSG_COUNT = 0;
  }
  else {
    _STEERING_MSG_REMAINING = _STEERING_MSG_REMAINING + -1;
  }
  if (_DAT_a0012e74 == 0) {
    _DAT_a0012e78 = 0;
  }
  else {
    _DAT_a0012e74 = _DAT_a0012e74 + -1;
  }
  if (_DAT_a0012e84 == 0) {
    _DAT_a0012e88 = 0;
  }
  else {
    _DAT_a0012e84 = _DAT_a0012e84 + -1;
  }
  if (_DAT_a0012e94 == 0) {
    _DAT_a0012e98 = 0;
  }
  else {
    _DAT_a0012e94 = _DAT_a0012e94 + -1;
  }
  if (_DAT_a0012ea4 == 0) {
    _DAT_a0012ea8 = 0;
  }
  else {
    _DAT_a0012ea4 = _DAT_a0012ea4 + -1;
  }
  if (_DAT_a0012eb4 == 0) {
    _DAT_a0012eb8 = 0;
  }
  else {
    _DAT_a0012eb4 = _DAT_a0012eb4 + -1;
  }
  if (_DAT_a0012ec4 == 0) {
    _DAT_a0012ec8 = 0;
  }
  else {
    _DAT_a0012ec4 = _DAT_a0012ec4 + -1;
  }
  if (_DAT_a0012ed4 == 0) {
    _DAT_a0012ed8 = 0;
  }
  else {
    _DAT_a0012ed4 = _DAT_a0012ed4 + -1;
  }
  if (_DAT_a0012ee4 == 0) {
    _DAT_a0012ee8 = 0;
  }
  else {
    _DAT_a0012ee4 = _DAT_a0012ee4 + -1;
  }
  if (_DAT_a0012ef4 == 0) {
    _DAT_a0012ef8 = 0;
  }
  else {
    _DAT_a0012ef4 = _DAT_a0012ef4 + -1;
  }
  if (_DAT_a0012f04 == 0) {
    _DAT_a0012f08 = 0;
  }
  else {
    _DAT_a0012f04 = _DAT_a0012f04 + -1;
  }
  if (_DAT_a0012f14 == 0) {
    _DAT_a0012f18 = 0;
  }
  else {
    _DAT_a0012f14 = _DAT_a0012f14 + -1;
  }
  if (_DAT_a0012f24 == 0) {
    _DAT_a0012f28 = 0;
  }
  else {
    _DAT_a0012f24 = _DAT_a0012f24 + -1;
  }
  if (_DAT_a0012f34 == 0) {
    _DAT_a0012f38 = 0;
  }
  else {
    _DAT_a0012f34 = _DAT_a0012f34 + -1;
  }
  if (_DAT_a0012f44 == 0) {
    _DAT_a0012f48 = 0;
  }
  else {
    _DAT_a0012f44 = _DAT_a0012f44 + -1;
  }
  if (_DAT_a0012f54 == 0) {
    _DAT_a0012f58 = 0;
  }
  else {
    _DAT_a0012f54 = _DAT_a0012f54 + -1;
  }
  if (_DAT_a0012f68 == 0) {
    _DAT_a0012f6c = 0;
  }
  else {
    _DAT_a0012f68 = _DAT_a0012f68 + -1;
  }
  if (_DAT_a0012f78 == 0) {
    _MSG_133_COUNT = 0;
  }
  else {
    _DAT_a0012f78 = _DAT_a0012f78 + -1;
  }
  if (_DAT_a0012f88 == 0) {
    _BO_972_COUNTER = 0;
  }
  else {
    _DAT_a0012f88 = _DAT_a0012f88 + -1;
  }
  if (_DAT_a0012f9c == 0) {
    _DAT_a0012fa0 = 0;
  }
  else {
    _DAT_a0012f9c = _DAT_a0012f9c + -1;
  }
  if (_DAT_a0012fac == 0) {
    _DAT_a0012fb0 = 0;
  }
  else {
    _DAT_a0012fac = _DAT_a0012fac + -1;
  }
  if (_DAT_a0012fbc == 0) {
    _DAT_a0012fc0 = 0;
  }
  else {
    _DAT_a0012fbc = _DAT_a0012fbc + -1;
  }
  if (_DAT_a0012fcc == 0) {
    _DAT_a0012fd0 = 0;
  }
  else {
    _DAT_a0012fcc = _DAT_a0012fcc + -1;
  }
  if (_DAT_a0012fdc == 0) {
    _DAT_a0012fe0 = 0;
  }
  else {
    _DAT_a0012fdc = _DAT_a0012fdc + -1;
  }
  if (_DAT_a0012fec == 0) {
    _DAT_a0012ff0 = 0;
  }
  else {
    _DAT_a0012fec = _DAT_a0012fec + -1;
  }
  if (_DAT_a0012ffc == 0) {
    _DAT_a0013000 = 0;
  }
  else {
    _DAT_a0012ffc = _DAT_a0012ffc + -1;
  }
  if (_DAT_a001300c == 0) {
    _DAT_a0013010 = 0;
  }
  else {
    _DAT_a001300c = _DAT_a001300c + -1;
  }
  if (_DAT_a001301c == 0) {
    _DAT_a0013020 = 0;
  }
  else {
    _DAT_a001301c = _DAT_a001301c + -1;
  }
  if (_DAT_a001302c == 0) {
    _DAT_a0013030 = 0;
  }
  else {
    _DAT_a001302c = _DAT_a001302c + -1;
  }
  if (_DAT_a001303c == 0) {
    _DAT_a0013040 = 0;
  }
  else {
    _DAT_a001303c = _DAT_a001303c + -1;
  }
  if (_DAT_a0013050 == 0) {
    _DAT_a0013054 = 0;
  }
  else {
    _DAT_a0013050 = _DAT_a0013050 + -1;
  }
  if (_DAT_a0013060 == 0) {
    _DAT_a0013064 = 0;
  }
  else {
    _DAT_a0013060 = _DAT_a0013060 + -1;
  }
  if (_DAT_a0013070 == 0) {
    _DAT_a0013074 = 0;
  }
  else {
    _DAT_a0013070 = _DAT_a0013070 + -1;
  }
  if (_DAT_a0013080 == 0) {
    _DAT_a0013084 = 0;
  }
  else {
    _DAT_a0013080 = _DAT_a0013080 + -1;
  }
  if (_DAT_a0013090 == 0) {
    _DAT_a0013094 = 0;
  }
  else {
    _DAT_a0013090 = _DAT_a0013090 + -1;
  }
  if (_DAT_a00130a0 == 0) {
    _DAT_a00130a4 = 0;
  }
  else {
    _DAT_a00130a0 = _DAT_a00130a0 + -1;
  }
  if (_DAT_a00130b0 == 0) {
    _DAT_a00130b4 = 0;
  }
  else {
    _DAT_a00130b0 = _DAT_a00130b0 + -1;
  }
  if (_DAT_a00130c0 == 0) {
    _DAT_a00130c4 = 0;
  }
  else {
    _DAT_a00130c0 = _DAT_a00130c0 + -1;
  }
  if (_DAT_a00130d0 == 0) {
    _DAT_a00130d4 = 0;
  }
  else {
    _DAT_a00130d0 = _DAT_a00130d0 + -1;
  }
  if (_DAT_a00130e0 == 0) {
    _DAT_a00130e4 = 0;
  }
  else {
    _DAT_a00130e0 = _DAT_a00130e0 + -1;
  }
  if (_DAT_a00130f0 == 0) {
    _DAT_a00130f4 = 0;
  }
  else {
    _DAT_a00130f0 = _DAT_a00130f0 + -1;
  }
  if (_DAT_a0013100 == 0) {
    _DAT_a0013104 = 0;
  }
  else {
    _DAT_a0013100 = _DAT_a0013100 + -1;
  }
  if (_DAT_a0013110 == 0) {
    _DAT_a0013114 = 0;
  }
  else {
    _DAT_a0013110 = _DAT_a0013110 + -1;
  }
  if (_DAT_a0013120 == 0) {
    _DAT_a0013124 = 0;
  }
  else {
    _DAT_a0013120 = _DAT_a0013120 + -1;
  }
  if (_DAT_a0013130 == 0) {
    _DAT_a0013134 = 0;
  }
  else {
    _DAT_a0013130 = _DAT_a0013130 + -1;
  }
  if (_DAT_a0013140 == 0) {
    _DAT_a0013144 = 0;
  }
  else {
    _DAT_a0013140 = _DAT_a0013140 + -1;
  }
  if (DAT_a0012dda == '\0') {
    if (_DAT_a0012dc4 == 0) {
      _DAT_a0012dc0 = 0;
    }
    else {
      _DAT_a0012dc4 = _DAT_a0012dc4 + -1;
    }
    if ((100 < _DAT_a0013044) && (_DAT_a0012dc4 == 0)) {
      local_18 = 0x20902;
      local_14 = 0;
      local_1c = 8;
      local_20 = 0x7df;
      iVar3 = FUN_1d012a30(&local_20);
      if (iVar3 != 0) {
        _DAT_a0012dc4 = 0x9c4;
        _DAT_a0012dc0 = 1;
      }
    }
  }
  if ((((_DAT_a0013328 != 0) && (iVar3 = steering_module_mode(0xa0010000), iVar3 != 0)) &&
      (_DAT_a0013328 = _DAT_a0013328 + -1, 3 < _STEERING_MSG_COUNT)) &&
     (((3 < _DAT_a0012e58 && (3 < _DAT_a0012f6c)) &&
      ((3 < _MSG_133_COUNT && (DAT_a001332f == '\0')))))) {
    _DAT_a0013328 = 0;
  }
  iVar3 = FUN_1d009578(0xa0013330,DAT_a00000a8,0);
  if (iVar3 == 0) {
    if (DAT_a001333c == '\0') {
      FUN_1d009684();
    }
  }
  else {
    FUN_1d0152f0(iVar3 + 8);
    FUN_1d0127a0(iVar3);
    update_status_report(iVar3);
  }
  if ((((3 < _DAT_a0012f6c) && (3 < _MSG_133_COUNT)) &&
      ((3 < _STEERING_MSG_COUNT &&
       (((3 < _DAT_a0012e58 && (_DAT_a0012fdc != 0)) && (_DAT_a0012fd4 << 0xf < 0)))))) &&
     (((DAT_a001332e == '\0' && (DAT_a001332f == '\0')) &&
      (((iVar3 = FUN_1d0154e0(), iVar3 == 0 || (iVar3 = FUN_1d01550c(), iVar3 != 0)) &&
       (((iVar3 = FUN_1d016270(), iVar3 == 0 && ((_DAT_a0012f60 & 0xc00000) == 0x800000)) &&
        (2 < _DAT_a0013394)))))))) {
                    // This is steering angles being read, looks like difference between req and
                    // prior
    iVar6 = _STEERING_ANGLE_CMD * 100 - _STEERING_ANGLE_;
                    // 13380 is EN bit
    iVar3 = 500;
    if ((_DAT_a0013380 != 0) && (_DAT_a0013380 < 501)) {
      iVar3 = _DAT_a0013380;
    }
                    // clamp angle delta to -500:500
    if ((iVar6 <= iVar3) && (iVar3 = -iVar3, iVar3 < iVar6)) {
      iVar3 = iVar6;
    }
    _STEERING_ANGLE_ = _STEERING_ANGLE_ + iVar3;
  }
  if (((((_DAT_a0013300 != 0) && (iVar3 = steering_module_mode(), iVar3 != 0)) &&
       (_DAT_a0013300 = _DAT_a0013300 + -1, 2 < _DAT_a0012df8)) &&
      ((2 < _DAT_a0012e08 && (2 < _DAT_a0012e18)))) && (2 < _DAT_a0012e28)) {
    _DAT_a0013300 = 0;
  }
  if (_DAT_a0013304 != 0) {
    _DAT_a0013304 = _DAT_a0013304 + -1;
  }
  if (_DAT_a001330c == 0) {
    _DAT_a0013320 = 0;
  }
  if (_DAT_a0013324 < 2) {
    if (_DAT_a0013320 != 0) {
      _DAT_a0013320 = _DAT_a0013320 + -1;
      goto LAB_1d00a49c;
    }
  }
  else {
    if (_DAT_a0013308 == 1) {
      _DAT_a0013320 = 0;
      if (_DAT_a001330c < 2) goto LAB_1d00a6c8;
      _DAT_a001330c = 0;
      _DAT_a0013318 = 4;
    }
    if (_DAT_a0013320 != 0) {
LAB_1d00a49c:
      if (_DAT_a001331c == 0) {
        if (((_DAT_a001330c != 0) && (_DAT_a001331c = 0x31, 2 < _DAT_a0012df8)) &&
           ((2 < _DAT_a0012e08 && ((2 < _DAT_a0012e18 && (2 < _DAT_a0012e28)))))) {
          uVar5 = _DAT_a0012dec & 0xff;
          uVar4 = (uint)DAT_a0012ded;
          local_10 = _DAT_a0012dec & 0xffffff | 0x3000000;
          uVar2 = (((_DAT_a0012df0 << 0x10) >> 0x1c) + 1) * 0x1000;
          local_c = _DAT_a0012df0 & 0xfff | uVar2;
          if (_DAT_a001330c < 6) {
                    // WARNING: Could not emulate address calculation at 0x1d00abc0
                    // WARNING: Treating indirect jump as call
            (**(code **)(&DAT_9d00abcc + _DAT_a001330c * 4))();
            return;
          }
          local_c._1_1_ = (byte)(local_c >> 8);
          local_1c = 8;
          local_20 = 90;
          local_10 = _DAT_a0012dec & 0xff0000 | 0x3000000 | _DAT_a0012dec & 0xffff;
          local_c._0_3_ =
               CONCAT12(DAT_a0012df2,
                        (ushort)_DAT_a0012df0 & 0xf00 | (ushort)uVar2 |
                        (ushort)(byte)((((((-4 - (local_c._1_1_ & 7)) - (DAT_a0012df2 >> 6)) -
                                         (DAT_a0012ded & 1)) - (local_c._1_1_ >> 4)) -
                                       (DAT_a0012dec & 1)) + (char)((int)(uVar4 << 0x1e) >> 0x1f) +
                                       (char)((int)(uVar4 << 0x1d) >> 0x1f) +
                                       (char)((int)(uVar4 << 0x1c) >> 0x1f) +
                                       ((char)DAT_a0012dec >> 7) +
                                       (char)((int)(uVar5 << 0x1a) >> 0x1f) +
                                       ((char)DAT_a0012ded >> 7) +
                                       (char)((int)(uVar5 << 0x19) >> 0x1f) +
                                       (char)((int)(uVar5 << 0x1b) >> 0x1f) +
                                       (char)((int)(uVar5 << 0x1c) >> 0x1f) +
                                       (char)((int)(uVar5 << 0x1d) >> 0x1f) +
                                       (char)((int)(uVar5 << 0x1e) >> 0x1f) +
                                       (char)((int)(uVar4 << 0x19) >> 0x1f) +
                                       (char)((int)(uVar4 << 0x1a) >> 0x1f) +
                                       (char)((int)(uVar4 << 0x1b) >> 0x1f) +
                                      (char)((int)((uint)local_c._1_1_ << 0x1c) >> 0x1f)));
          local_14 = (uint)(uint3)local_c;
          local_18 = local_10;
          local_c = local_14;
          can0_send_message(&local_20);
        }
      }
      else {
        _DAT_a001331c = _DAT_a001331c + -1;
      }
      goto LAB_1d00a6d8;
    }
  }
LAB_1d00a6c8:
  _DAT_a001330c = 0;
  _DAT_a001331c = 0;
LAB_1d00a6d8:
  if (_DAT_a0012db8 != 0) {
    _DAT_a0012db8 = _DAT_a0012db8 + -1;
    if (_DAT_a0012dbc == 0) {
      if (((2 < _DAT_a0012e38) && ((_DAT_a0012e2c & 0x30) == 0)) && (_DAT_a0012db4 != 0)) {
        _DAT_a0012dbc = 0x33;
        local_c = _DAT_a0012e30;
        local_1c = 8;
        local_20 = 131;
        local_18 = _DAT_a0012e2c & 0xf | _DAT_a0012db4 << 4;
        local_14 = _DAT_a0012e30;
        local_10 = local_18;
        can0_send_message(&local_20);
      }
    }
    else {
      _DAT_a0012dbc = _DAT_a0012dbc + -1;
    }
  }
  if ((_DAT_a0012fdc == 0) || (-1 < _DAT_a0012fd4 << 0xb)) {
    iVar3 = DAT_a000009c + -1;
    if ((DAT_a000009c != 0) && (DAT_a000009c = iVar3, 100 < _DAT_a0013044)) {
      if ((iVar3 == 0) && (_DAT_a0013054 < 3)) {
        local_1c = 8;
        local_20 = 0x3aa;
        local_14 = 0;
        local_18 = 0;
        FUN_1d012a30(&local_20);
        DAT_a00000a0 = 0;
      }
      else {
        if (DAT_a00000a0 == 0) {
          if (_DAT_a0013054 < 3) {
            DAT_a00000a0 = 199;
            local_14 = 0;
            local_18 = 0x21;
          }
          else {
            DAT_a00000a0 = 0x12;
            local_14 = _DAT_a001304c;
            local_18 = 0xff;
          }
          local_1c = 8;
          local_20 = 0x3aa;
          local_18 = local_18 | 0x8000;
          FUN_1d012a30(&local_20);
        }
        else {
          DAT_a00000a0 = DAT_a00000a0 + -1;
        }
      }
    }
  }
  else {
    DAT_a000009c = 0;
  }
  bVar1 = DAT_a00000a4 == 0;
  DAT_a00000a4 = DAT_a00000a4 + -1;
  if (bVar1) {
    DAT_a00000a4 = 0x33;
    FUN_1d008b6c();
  }
  FUN_1d008848(0);
  if (_DAT_a0012da8 != 0) {
    _DAT_a0012da8 = _DAT_a0012da8 + -1;
  }
  if (_DAT_a0012dac != 0) {
    _DAT_a0012dac = _DAT_a0012dac + -1;
  }
  if (_DAT_a0012db0 != 0) {
    _DAT_a0012db0 = _DAT_a0012db0 + -1;
  }
  uVar2 = _DAT_a0012d98 + 1;
  _DAT_a0012d98 =
       uVar2 - ((uVar2 / 0x14) * 4 + ((uint)((ulonglong)uVar2 * 0xcccccccd >> 0x20) & 0xfffffff0));
  iVar3 = steering_module_mode();
  if (iVar3 != 0) {
    if (((DAT_a000008c == 0) && (DAT_a001332c == '\0')) && (1 < _DAT_a0012e58)) {
      local_28 = 0;
      local_24 = 0;
      local_2c = 8;
      local_30 = 0x3a8;
      _STEERING_MSG_DATA_H = 0;
      _STEERING_MSG_DATA_L = 0;
      _STEERING_MSG_REMAINING = 200;
      if (_STEERING_MSG_COUNT != 0xffffffff) {
        _STEERING_MSG_COUNT = _STEERING_MSG_COUNT + 1;
      }
      update_steer_state(&local_28);
      can1_send_message(&local_30);
    }
    if (DAT_a0000014 == 0) {
      if ((_DAT_a0013300 == 0) && (_DAT_a0013304 == 0)) {
        local_2c = 2;
        local_30 = 0x67;
        FUN_1d007e00(&local_28);
        FUN_1d015488(&local_28);
        FUN_1d0127a0(&local_30);
        update_status_report(&local_30);
      }
    }
    else {
      if (DAT_a0000014 == 10) {
        local_2c = 5;
        local_30 = 0x69;
        FUN_1d007f88(&local_28);
        FUN_1d0154a0(&local_28);
        FUN_1d0127a0(&local_30);
      }
    }
  }
  if ((DAT_a0000010 == 0) && (iVar3 = FUN_1d016b90(&local_28), iVar3 != 0)) {
    local_2c = 8;
    local_30 = 0x7e;
    FUN_1d0127a0(&local_30);
  }
  iVar3 = FUN_1d018e50();
  if (iVar3 != 0) {
    local_2c = 8;
    local_30 = 0x7f;
    FUN_1d018eb4(&local_28);
    FUN_1d0127a0(&local_30);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rx_tx_loop(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_60;
  uint local_5c;
  byte local_58;
  byte bStack87;
  byte bStack86;
  byte bStack85;
  byte local_54;
  byte bStack83;
  byte bStack82;
  byte bStack81;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined *local_30;
  int local_2c;
  
  rx_tx_loop_init();
LAB_1d00bf30:
  iVar1 = can0_load_message(&local_60);
  if (iVar1 == 0) goto LAB_1d00c264;
  local_50 = local_60;
  local_4c = local_5c;
  local_48 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
  local_44 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
  iVar1 = steering_module_mode();
  if (iVar1 == 0) goto LAB_1d00bf1c;
  if (_DAT_a0012de8 != -1) {
    _DAT_a0012de8 = _DAT_a0012de8 + 1;
  }
  uVar2 = local_5c & 15;
                    // check EID bit
  if ((local_5c & 0x10000000) == 0) {
    uVar7 = local_60 & 0x7ff;
  }
  else {
                    // extract EID address
    uVar7 = (local_60 & 0x7ff) << 0x12 | (local_5c << 4) >> 0xe;
  }
  if ((int)(local_5c << 3) < 0) goto LAB_1d00bf1c;
  if (uVar7 == 0x167) goto LAB_1d00bdfc;
  if (uVar7 < 0x168) {
    if (uVar7 == 0x77) {
      if (uVar2 < 8) goto LAB_1d00bf30;
      _DAT_a0012eec = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
      _DAT_a0012ef0 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
      _DAT_a0012ef4 = 200;
      if (_DAT_a0012ef8 != -1) {
        _DAT_a0012ef8 = _DAT_a0012ef8 + 1;
      }
    }
    else {
      if (uVar7 < 0x78) {
        if (uVar7 == 0x5c) {
          if (uVar2 < 8) goto LAB_1d00bf30;
          _DAT_a0012dfc = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
          _DAT_a0012e00 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
          _DAT_a0012e04 = 0xfa;
          if (_DAT_a0012e08 != -1) {
            _DAT_a0012e08 = _DAT_a0012e08 + 1;
          }
          if ((_DAT_a001330c != 0) && ((local_48 & 0xc00) == 0x800)) {
            _DAT_a001330c = 0;
            _DAT_a0013318 = 5;
          }
        }
        else {
          if (uVar7 < 0x5d) {
            if (uVar7 == 0x4c) {
              if (uVar2 < 8) goto LAB_1d00bf30;
              _DAT_a0012ecc = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
              _DAT_a0012ed0 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
              _DAT_a0012ed4 = 0xfa;
              if (_DAT_a0012ed8 != -1) {
                _DAT_a0012ed8 = _DAT_a0012ed8 + 1;
              }
              FUN_1d008b6c();
              DAT_a00000a4 = 1;
            }
            else {
              if (uVar7 == 0x5a) {
                if (7 < uVar2) {
                  _DAT_a0012dec = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                  _DAT_a0012df0 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                  _DAT_a0012df4 = 0xfa;
                  if (_DAT_a0012df8 != -1) {
                    _DAT_a0012df8 = _DAT_a0012df8 + 1;
                  }
                  if ((local_48 & 0x3000000) == 0x3000000) {
                    if (local_48 == 0) {
                      _DAT_a0013310 = 0;
                    }
                    else {
                      if (local_48 >> 0x1b < 0x11) {
                    // WARNING: Could not emulate address calculation at 0x1d00aedc
                    // WARNING: Treating indirect jump as call
                        (**(code **)((local_48 >> 0x1b) * 4 + -0x62ff5118))();
                        return;
                      }
                      _DAT_a0013310 = 0;
                      if (((_DAT_a0013304 == 0) &&
                          (((_DAT_a0013324 < 2 || (true)) ||
                           ((_DAT_a001330c != 1 && ((_DAT_a001330c != 0 || (_DAT_a0013308 != 1))))))
                          )) && ((((DAT_a0013314 = 1, _DAT_a0012fac != 0 && (_DAT_a0012fa8 << 7 < 0)
                                   ) || ((_DAT_a0012fcc != 0 && (_DAT_a0012fc8 << 7 < 0)))) ||
                                 (((3 < _DAT_a0012f6c &&
                                   ((((3 < _MSG_133_COUNT && (3 < _STEERING_MSG_COUNT)) &&
                                     (3 < _DAT_a0012e58)) &&
                                    ((_DAT_a0012fdc != 0 && (_DAT_a0012fd4 << 0xf < 0)))))) &&
                                  ((DAT_a001332e == '\0' &&
                                   (((DAT_a001332f == '\0' &&
                                     ((iVar1 = FUN_1d0154e0(), iVar1 == 0 ||
                                      (iVar1 = FUN_1d01550c(), iVar1 != 0)))) &&
                                    (iVar1 = FUN_1d016270(), iVar1 == 0)))))))))) {
                        DAT_a000009c = 1000;
                      }
                      _DAT_a0013320 = 0;
                    }
                  }
                  else {
                    _DAT_a0013310 = 0;
                  }
                  if ((local_48 & 0x3000000) == 0x1000000) {
                    if (_DAT_a0013324 != 0xffffffff) {
                      _DAT_a0013324 = _DAT_a0013324 + 1;
                    }
                  }
                  else {
                    if (((local_48 & 0x3000000) == 0) && (_DAT_a0013324 != 0)) {
                      _DAT_a0013324 = _DAT_a0013324 - 1;
                    }
                  }
                  goto LAB_1d00bf1c;
                }
                goto LAB_1d00bf30;
              }
            }
          }
          else {
            if (uVar7 == 0x5d) {
              if (uVar2 < 8) goto LAB_1d00bf30;
              _DAT_a0012e0c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
              _DAT_a0012e10 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
              _DAT_a0012e14 = 0xfa;
              if (_DAT_a0012e18 != -1) {
                _DAT_a0012e18 = _DAT_a0012e18 + 1;
              }
              if (((_DAT_a001330c != 0) && ((int)(local_48 << 8) < 0)) &&
                 (_DAT_a001330c == (local_48 << 0x18) >> 0x1d)) {
                if (_DAT_a0013324 < 2) {
                  _DAT_a001330c = 0;
                }
                else {
                  if (_DAT_a0012df4 != 0) {
                    if (_DAT_a001330c < 6) {
                    // WARNING: Could not emulate address calculation at 0x1d00b244
                    // WARNING: Treating indirect jump as call
                      (**(code **)(_DAT_a001330c * 4 + -0x62ff4db0))();
                      return;
                    }
                    if (false) {
                      _DAT_a001330c = 0;
                    }
                  }
                }
              }
            }
            else {
              if (uVar7 == 0x76) {
                if (uVar2 < 8) goto LAB_1d00bf30;
                _DAT_a0012edc = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a0012ee0 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a0012ee4 = 200;
                if (_DAT_a0012ee8 != -1) {
                  _DAT_a0012ee8 = _DAT_a0012ee8 + 1;
                }
                if ((local_48 & 0xc00000) != 0xc00000) {
                  local_48 = local_48 & 0x3fffff | 0xc00000;
                }
              }
            }
          }
        }
      }
      else {
        if (uVar7 == 0x83) {
          if (uVar2 < 8) goto LAB_1d00bf30;
          _DAT_a0012e2c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
          _DAT_a0012e30 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
          _DAT_a0012e34 = 0xfa;
          if (_DAT_a0012e38 != -1) {
            _DAT_a0012e38 = _DAT_a0012e38 + 1;
          }
          _DAT_a0012dbc = 0;
        }
        else {
          if (uVar7 < 0x84) {
                    // BO_ 125 BrakeSnData_4: 8 ABS_ESC
            if (uVar7 == 0x7d) {
              if (uVar2 < 8) goto LAB_1d00bf30;
              _DAT_a0012efc = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
              _DAT_a0012f00 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
              _DAT_a0012f04 = 200;
              if (_DAT_a0012f08 != 0xffffffff) {
                _DAT_a0012f08 = _DAT_a0012f08 + 1;
              }
              if (10 < _DAT_a0012f08) {
                local_34 = 0;
                local_38 = ((uint)(_DAT_a0012efc << 0x18) >> 0x1d) << 0xc;
                if (_DAT_a0012f28 < 3) {
                  local_38 = local_38 | 0x30000000;
                }
                else {
                  local_38 = local_38 | _DAT_a0012f20 << 0x1c;
                  local_34 = (((_DAT_a0012f1c ^ 0x20) << 0x1a) >> 0x1f) << 0x1b |
                             ((_DAT_a0012f1c << 0x1b) >> 0x1f) << 0x1d |
                             ((_DAT_a0012f1c << 3) >> 0x1f) << 0x1e |
                             (uint)((_DAT_a0012f20 & 0x1800) == 0) << 0x1f;
                }
                if (_DAT_a0012f38 < 3) {
                  local_38 = local_38 & 0x3fffffff | 0xc0000000;
                }
                else {
                  local_38 = local_38 & 0x7fff | ((uint)(_DAT_a0012f30 << 0x18) >> 0x1f) << 0xf;
                  local_34 = ((uint)(_DAT_a0012f30 << 0x12) >> 0x1f) << 0x1a |
                             ((uint)(_DAT_a0012f2c << 8) >> 0x1f) << 0x1c;
                  uVar2 = (uint)(_DAT_a0012f2c << 5) >> 0x1d;
                  if (uVar2 == 2) {
                    local_38 = local_38 | 0x40000000;
                  }
                  else {
                    if (uVar2 != 4) {
                      if (uVar2 == 1) {
                        local_38 = local_38 | 0x80000000;
                      }
                      else {
                        local_38 = local_38 | 0xc0000000;
                      }
                    }
                  }
                }
                local_3c = 8;
                local_40 = 0x74;
                FUN_1d0127a0(&local_40);
                update_status_report(&local_40);
              }
            }
            else {
              if (uVar7 == 0x81) {
                if (uVar2 < 8) goto LAB_1d00bf30;
                _DAT_a0012e3c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a0012e40 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a0012e44 = 0x9c4;
                if (_DAT_a0012e48 != -1) {
                  _DAT_a0012e48 = _DAT_a0012e48 + 1;
                }
              }
            }
          }
          else {
                    // BO_ 145 Yaw_Data_FD1: 8 GWM
            if (uVar7 == 0x91) {
              if (uVar2 < 8) goto LAB_1d00bf30;
              _DAT_a0012e6c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
              _DAT_a0012e70 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
              _DAT_a0012e74 = 200;
              if (_DAT_a0012e78 != 0xffffffff) {
                _DAT_a0012e78 = _DAT_a0012e78 + 1;
              }
              if (2 < _DAT_a0012e78) {
                local_3c = 4;
                local_40 = 0x6c;
                FUN_1d008268(&local_38);
                FUN_1d0127a0(&local_40);
              }
            }
            else {
              if (uVar7 == 0x92) {
                if (uVar2 < 8) goto LAB_1d00bf30;
                _DAT_a0012e7c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a0012e80 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a0012e84 = 0x106;
                if (_DAT_a0012e88 != 0xffffffff) {
                  _DAT_a0012e88 = _DAT_a0012e88 + 1;
                }
                if (2 < _DAT_a0012e88) {
                  local_3c = 6;
                  local_40 = 0x6b;
                  FUN_1d0082ec(&local_38);
                  FUN_1d0127a0(&local_40);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
                    // BO_ 934 Side_Detect_L_Stat: 8 IPMA_ADAS
    if (uVar7 == 934) {
      if (uVar2 < 8) goto LAB_1d00bf30;
      _DAT_a0012eac = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
      _DAT_a0012eb0 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
      _DAT_a0012eb4 = 500;
      if (_DAT_a0012eb8 != -1) {
        _DAT_a0012eb8 = _DAT_a0012eb8 + 1;
      }
      FUN_1d008848(1);
    }
    else {
      if (uVar7 < 0x3a7) {
                    // BO_ 534 WheelData: 8 ABS_ESC
        if (uVar7 == 0x216) {
          if (uVar2 < 8) goto LAB_1d00bf30;
          _DAT_a0012e8c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
          _DAT_a0012e90 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
          _DAT_a0012e94 = 0xfa;
          if (_DAT_a0012e98 != 0xffffffff) {
            _DAT_a0012e98 = _DAT_a0012e98 + 1;
          }
          if (2 < _DAT_a0012e98) {
            uVar2 = (local_48 >> 8 & 0xff) - (_DAT_a0012d90 >> 8 & 0xff) & 0xff;
            uVar6 = (local_48 & 0xff) - (_DAT_a0012d90 & 0xff) & 0xff;
            uVar7 = (local_48 >> 0x18) - (_DAT_a0012d90 >> 0x18) & 0xff;
            uVar5 = (uint)local_48._2_1_ - (_DAT_a0012d90 >> 0x10 & 0xff) & 0xff;
            if ((local_44 & 0xc0) == 0x40) {
              uVar2 = -uVar2;
              uVar7 = -uVar7;
            }
            _DAT_a0012d88 = _DAT_a0012d88 + uVar7;
            _DAT_a0012d80 = _DAT_a0012d80 + uVar2;
            if ((local_44 & 3) == 1) {
              uVar6 = -uVar6;
              uVar5 = -uVar5;
            }
            _DAT_a0012d8c = _DAT_a0012d8c + uVar5;
            _DAT_a0012d84 = _DAT_a0012d84 + uVar6;
            local_3c = 8;
            local_40 = 0x70;
            local_38 = _DAT_a0012d80 & 0xffff | _DAT_a0012d84 * 0x10000;
            local_34 = _DAT_a0012d88 & 0xffff | _DAT_a0012d8c * 0x10000;
            FUN_1d0127a0(&local_40);
          }
          _DAT_a0012d90 = local_48;
          _DAT_a0012d94 = local_44;
        }
        else {
          if (uVar7 < 0x217) {
            if (uVar7 == 0x202) {
              if (uVar2 < 8) goto LAB_1d00bf30;
              _DAT_a0012e4c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
              _DAT_a0012e50 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
              _DAT_a0012e54 = 200;
              if (_DAT_a0012e58 != 0xffffffff) {
                _DAT_a0012e58 = _DAT_a0012e58 + 1;
              }
              if ((DAT_a001332f == '\0') || (DAT_a001332d != '\0')) {
                local_44 = local_44 & 0x1f | 0x60;
                local_48._0_2_ =
                     CONCAT11(((byte)(((uint)local_48._2_1_ << 0x19) >> 0x1c) ^ 0xff) -
                              (byte)((local_44 << 0x19) >> 0x1e),(undefined)local_48);
                local_48 = local_48 & 0xffff0000 | (uint)(ushort)local_48;
                if (_DAT_a0013394 != -1) {
                  _DAT_a0013394 = _DAT_a0013394 + 1;
                }
              }
              else {
                _DAT_a0013394 = 0;
              }
            }
            else {
              if (uVar7 == 0x213) {
                if (uVar2 < 8) goto LAB_1d00bf30;
                _DAT_a0012f2c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a0012f30 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a0012f34 = 200;
                if (_DAT_a0012f38 != 0xffffffff) {
                  _DAT_a0012f38 = _DAT_a0012f38 + 1;
                }
              }
            }
          }
          else {
                    // BO_ 535 WheelSpeed: 8 ABS_ESC
            if (uVar7 == 0x217) {
              if (uVar2 < 8) goto LAB_1d00bf30;
              _DAT_a0012e9c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
              _DAT_a0012ea0 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
              _DAT_a0012ea4 = 200;
              if (_DAT_a0012ea8 != 0xffffffff) {
                _DAT_a0012ea8 = _DAT_a0012ea8 + 1;
              }
              if (2 < _DAT_a0012ea8) {
                local_3c = 8;
                    // BO_ 106 WheelSpeed_Report: 8 STEER
                local_40 = 0x6a;
                FUN_1d0083c4(&local_38);
                FUN_1d0127a0(&local_40);
                update_status_report(&local_40);
              }
            }
            else {
              if (uVar7 == 0x230) {
                if (uVar2 < 8) goto LAB_1d00bf30;
                _DAT_a0012e1c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a0012e20 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a0012e24 = 200;
                if (_DAT_a0012e28 != -1) {
                  _DAT_a0012e28 = _DAT_a0012e28 + 1;
                }
                uVar2 = (local_48 << 0x13) >> 0x1c;
                if (uVar2 < 6) {
                    // WARNING: Could not emulate address calculation at 0x1d00b33c
                    // WARNING: Treating indirect jump as call
                  (**(code **)(uVar2 * 4 + -0x62ff4cb8))();
                  return;
                }
                _DAT_a0013308 = 0;
              }
            }
          }
        }
      }
      else {
                    // BO_ 970 Lane_Assist_Data1: 8 IPMA_ADAS
        if (uVar7 == 0x3ca) {
          if (uVar2 < 8) goto LAB_1d00bf30;
          _DAT_a0012f4c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
          _DAT_a0012f50 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
          _DAT_a0012f54 = 200;
          if (_DAT_a0012f58 != -1) {
            _DAT_a0012f58 = _DAT_a0012f58 + 1;
          }
          if ((((((3 < _DAT_a0012f6c) && (3 < _MSG_133_COUNT)) && (3 < _STEERING_MSG_COUNT)) &&
               (((3 < _DAT_a0012e58 && (_DAT_a0012fdc != 0)) &&
                ((_DAT_a0012fd4 << 0xf < 0 && ((DAT_a001332e == '\0' && (DAT_a001332f == '\0')))))))
               ) && ((iVar1 = FUN_1d0154e0(), iVar1 == 0 || (iVar1 = FUN_1d01550c(), iVar1 != 0))))
             && (iVar1 = FUN_1d016270(), iVar1 == 0)) {
            local_48 = 0;
            local_44 = 0;
          }
        }
        else {
          if (uVar7 < 0x3cb) {
            if (uVar7 == 0x3a7) {
              if (uVar2 < 8) goto LAB_1d00bf30;
              _DAT_a0012ebc = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
              _DAT_a0012ec0 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
              _DAT_a0012ec4 = 500;
              if (_DAT_a0012ec8 != -1) {
                _DAT_a0012ec8 = _DAT_a0012ec8 + 1;
              }
              FUN_1d008848(1);
            }
            else {
                    // BO_ 936 ParkAid_Data: 8 IPMA_ADAS
              if (uVar7 == 0x3a8) {
                if (uVar2 < 8) goto LAB_1d00bf30;
                _STEERING_MSG_DATA_H =
                     CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _STEERING_MSG_DATA_L =
                     CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _STEERING_MSG_REMAINING = 200;
                if (_STEERING_MSG_COUNT != 0xffffffff) {
                  _STEERING_MSG_COUNT = _STEERING_MSG_COUNT + 1;
                }
                DAT_a001332c = 1;
                update_steer_state(&local_48);
              }
            }
          }
          else {
            if (uVar7 == 0x415) {
              if (uVar2 < 8) goto LAB_1d00bf30;
              _DAT_a0012f0c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
              _DAT_a0012f10 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
              _DAT_a0012f14 = 200;
              if (_DAT_a0012f18 != -1) {
                _DAT_a0012f18 = _DAT_a0012f18 + 1;
              }
              if ((DAT_a001332f == '\0') || (DAT_a001332d != '\0')) {
                local_48 = (local_48 >> 8 & 0x3f00) << 8 | 0xc00000;
                uVar2 = local_48 << 8;
                local_48 = local_48 |
                           (uint)(byte)(((byte)(((uVar2 >> 0x18) << 0x1a) >> 0x1c) ^ 0xff) -
                                       (byte)(uVar2 >> 0x1e)) << 0x18;
              }
            }
            else {
              if (uVar7 == 0x416) {
                if (uVar2 < 8) goto LAB_1d00bf30;
                _DAT_a0012f1c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a0012f20 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a0012f24 = 0xfa;
                if (_DAT_a0012f28 != 0xffffffff) {
                  _DAT_a0012f28 = _DAT_a0012f28 + 1;
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_1d00bf1c;
LAB_1d00c264:
                    // 
                    // CAN1 check rx
                    // 
                    // 
  uVar2 = can1_load_message((int *)&local_60);
  if (uVar2 == 0) goto LAB_1d00c958;
  local_50 = local_60;
  local_4c = local_5c;
  local_48 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
  local_44 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
  iVar1 = steering_module_mode();
  if (iVar1 == 0) goto LAB_1d00c254;
  if (_DAT_a0012f5c != -1) {
    _DAT_a0012f5c = _DAT_a0012f5c + 1;
  }
  uVar2 = local_5c & 0xf;
  if ((local_5c & 0x10000000) == 0) {
    uVar7 = local_60 & 0x7ff;
  }
  else {
    uVar7 = (local_60 & 0x7ff) << 0x12 | (local_5c << 4) >> 0xe;
  }
  if ((int)(local_5c << 3) < 0) goto LAB_1d00c254;
                    // BO_ 133
  if (uVar7 == 0x85) goto LAB_1d00c15c;
                    // BO_ 972 Lane_Assist_Data3_FD1: 8 PSCM
  if (uVar7 == 0x3cc) {
    if (uVar2 < 8) goto LAB_1d00c264;
    _DAT_a0012f80 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
    _DAT_a0012f84 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
    _DAT_a0012f88 = 200;
    if (_BO_972_COUNTER != -1) {
      _BO_972_COUNTER = _BO_972_COUNTER + 1;
    }
  }
  else {
                    // BO_ 130 EPAS_INFO: 8 PSCM
    if (uVar7 == 0x82) {
      if (7 < uVar2) {
        _DAT_a0012f60 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
        _DAT_a0012f64 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
        _DAT_a0012f68 = 200;
        if (_DAT_a0012f6c != 0xffffffff) {
          _DAT_a0012f6c = _DAT_a0012f6c + 1;
        }
        if (_MSG_130_22_2 == 2) {
          if ((local_48 & 0xc00000) == 0xc00000) {
            if (((_DAT_a0012fdc == 0) || (-1 < _DAT_a0012fd4 << 0xd)) ||
               (iVar1 = FUN_1d01973c(), iVar1 == 0)) {
              if ((((3 < _DAT_a0012f6c) && (3 < _MSG_133_COUNT)) &&
                  ((3 < _STEERING_MSG_COUNT && ((3 < _DAT_a0012e58 && (_DAT_a0012fdc != 0)))))) &&
                 (((_DAT_a0012fd4 << 0xf < 0 && ((DAT_a001332e == '\0' && (DAT_a001332f == '\0'))))
                  && (((iVar1 = FUN_1d0154e0(), iVar1 == 0 || (iVar1 = FUN_1d01550c(), iVar1 != 0))
                      && (iVar1 = FUN_1d016270(), iVar1 == 0)))))) {
                DAT_a000009c = 1000;
              }
              DAT_a001332e = '\x01';
            }
          }
          else {
            if (((local_48 & 0xc00000) != 0x800000) && (_DAT_a0012fd4 << 0xf < 0)) {
              DAT_a000009c = 1000;
            }
          }
        }
        _MSG_130_22_2 = (local_48 << 8) >> 0x1e;
        local_48 = local_48 & 0x3fffff;
        goto LAB_1d00c254;
      }
      goto LAB_1d00c264;
    }
  }
  goto LAB_1d00c254;
LAB_1d00c958:
  iVar1 = FUN_1d013144(&local_60);
  if (iVar1 != 0) {
    if (_DAT_a0012f90 != -1) {
      _DAT_a0012f90 = _DAT_a0012f90 + 1;
    }
    iVar1 = local_5c << 3;
    uVar2 = local_5c & 0xf;
    if (iVar1 < 0) {
      uVar7 = (local_60 & 0x7ff) << 0x12 | (local_5c << 4) >> 0xe;
    }
    else {
      uVar7 = local_60 & 0x7ff;
    }
    iVar3 = steering_module_mode();
    if (iVar3 != 0) goto LAB_1d00c2fc;
    if ((uVar7 == 0x7f) && (-1 < iVar1)) {
      if (7 < uVar2) {
        FUN_1d018e94(&local_58);
        _DAT_a0013034 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
        _DAT_a0013038 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
        _DAT_a001303c = 0;
        if (_DAT_a0013040 != -1) {
          _DAT_a0013040 = _DAT_a0013040 + 1;
        }
      }
      goto LAB_1d00c918;
    }
    goto LAB_1d00c958;
  }
  goto code_r0x1d00c968;
LAB_1d00c2fc:
  if (-1 < iVar1) {
    if (uVar7 - 0x60 < 0x20) {
                    // WARNING: Could not emulate address calculation at 0x1d00c314
                    // WARNING: Treating indirect jump as call
      (**(code **)((uVar7 - 0x60) * 4 + -0x62ff3ce0))();
      return;
    }
                    // BO_ 100 Steering_Command: 8 MAB
                    // But why on CAN1 ???
    if (uVar7 == 100) {
      if ((uVar2 - 4 & 0xff) < 4) {
        handle_sid_100(&local_58);
        _DAT_a0012fd4 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
        _DAT_a0012fd8 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
        _DAT_a0012fdc = 100;
        if (_DAT_a0012fe0 != -1) {
          _DAT_a0012fe0 = _DAT_a0012fe0 + 1;
        }
      }
    }
    else {
LAB_1d00c918:
      if (uVar7 == 0x62) {
        _DAT_a0012dac = 100;
        goto LAB_1d00c958;
      }
      if (uVar7 != 100) {
        if (uVar7 == 0x60) {
          _DAT_a0012da8 = 100;
        }
        goto LAB_1d00c958;
      }
    }
    _DAT_a0012db0 = 100;
  }
  goto LAB_1d00c958;
code_r0x1d00c968:
  local_2c = 3;
  local_30 = &DAT_a0012dc8;
LAB_1d00d494:
  do {
    iVar1 = FUN_1d01327c(&local_60);
    if (iVar1 == 0) {
      FUN_1d0133f4();
      return;
    }
    if (_DAT_a0013044 != -1) {
      _DAT_a0013044 = _DAT_a0013044 + 1;
    }
    iVar1 = local_5c << 3;
    uVar2 = local_5c & 0xf;
    if (iVar1 < 0) {
      uVar7 = (local_60 & 0x7ff) << 0x12 | (local_5c << 4) >> 0xe;
    }
    else {
      uVar7 = local_60 & 0x7ff;
    }
    iVar3 = steering_module_mode();
    if (iVar3 != 0) goto LAB_1d00c9fc;
  } while ((uVar7 != 0x7e8) || (iVar1 < 0));
  goto LAB_1d00d2f8;
LAB_1d00c9fc:
  if (-1 < iVar1) {
                    // BO_ 949 Tire_Pressure_Data_FD1: 8 GWM
    if (uVar7 == 0x3b5) {
      if (7 < uVar2) {
        _DAT_a0013098 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
        _DAT_a001309c = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
        _DAT_a00130a0 = 0x4e2;
        if (_DAT_a00130a4 != 0xffffffff) {
          _DAT_a00130a4 = _DAT_a00130a4 + 1;
        }
        if (2 < _DAT_a00130a4) {
          local_38 = CONCAT22((ushort)bStack86 * 0x100 + (ushort)bStack85,
                              (ushort)local_58 * 0x100 + (ushort)bStack87);
          local_34 = CONCAT22((ushort)local_54 * 0x100 + (ushort)bStack83,
                              (ushort)bStack82 * 0x100 + (ushort)bStack81);
          local_3c = 8;
          local_40 = 0x71;
          FUN_1d0127a0(&local_40);
        }
      }
    }
    else {
      if (uVar7 < 0x3b6) {
                    // BO_ 938 ParkAid_Aud_Warn_Stat: 8 IPMA_ADAS
        if (uVar7 == 0x3aa) {
          if (7 < uVar2) {
            _DAT_a0013048 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
            _DAT_a001304c = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
            _DAT_a0013050 = 500;
            if (_DAT_a0013054 != -1) {
              _DAT_a0013054 = _DAT_a0013054 + 1;
            }
            FUN_1d008848(1);
            DAT_a00000a0 = 10;
          }
        }
        else {
          if (uVar7 < 0x3ab) {
                    // BO_ 359 VehicleOperatingModes: 8 PCM_HEV
            if (uVar7 == 0x167) {
              if (7 < uVar2) {
                _DAT_a00130d8 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a00130dc = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a00130e0 = 200;
                if (_DAT_a00130e4 != -1) {
                  _DAT_a00130e4 = _DAT_a00130e4 + 1;
                }
              }
            }
            else {
                    // BO_ 516 EngVehicleSpThrottle: 8 PCM_HEV
              if ((uVar7 == 0x204) && (7 < uVar2)) {
                _DAT_a00130e8 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a00130ec = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a00130f0 = 200;
                if (_DAT_a00130f4 != 0xffffffff) {
                  _DAT_a00130f4 = _DAT_a00130f4 + 1;
                }
                if (2 < _DAT_a00130f4) {
                  local_38 = (uint)(ushort)((ushort)bStack82 * 0x100 + (ushort)bStack81);
                  bVar4 = (byte)((ushort)bStack86 - 0x7d);
                  if (0x7f < (short)((ushort)bStack86 - 0x7d)) {
                    bVar4 = 0x7f;
                  }
                  local_34 = (uint)bVar4;
                  local_3c = 8;
                    // BO_ 117 ThrottleInfo_Report: 8 STEER
                  local_40 = 0x75;
                  FUN_1d0127a0(&local_40);
                }
              }
            }
          }
          else {
                    // BO_ 939 ParkAid_Aud_Warn_Stat2: 8 IPMA_ADAS
            if (uVar7 == 0x3ab) {
              if (7 < uVar2) {
                _DAT_a0013058 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a001305c = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a0013060 = 500;
                if (_DAT_a0013064 != -1) {
                  _DAT_a0013064 = _DAT_a0013064 + 1;
                }
                FUN_1d008848(1);
              }
            }
            else {
              if ((uVar7 == 0x3b3) && (7 < uVar2)) {
                _DAT_a00130c8 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a00130cc = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a00130d0 = 0x4e2;
                if (_DAT_a00130d4 != -1) {
                  _DAT_a00130d4 = _DAT_a00130d4 + 1;
                }
              }
            }
          }
        }
      }
      else {
        if (uVar7 == 0x465) {
          if (7 < uVar2) {
            _DAT_a0013068 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
            _DAT_a001306c = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
            _DAT_a0013070 = 0x9c4;
            if (_DAT_a0013074 != 0xffffffff) {
              _DAT_a0013074 = _DAT_a0013074 + 1;
            }
            if (1 < _DAT_a0013074) {
              local_38 = 0;
              if (((bStack85 & 3) == 2) || ((bStack85 & 3) == 1)) {
                local_38 = 0x80000000;
              }
              local_34 = 0;
              if (((bStack87 & 3) == 1) || ((bStack87 & 3) == 2)) {
                local_34 = 0x80000000;
              }
              local_3c = 8;
                    // BO_ 109 GPS_1_Report: 8 STEER
              local_40 = 0x6d;
              FUN_1d0127a0(&local_40);
            }
          }
        }
        else {
          if (uVar7 < 0x466) {
                    // BO_ 1076 Cluster_Info_3_FD1: 8 GWM
            if (uVar7 == 0x434) {
              if (7 < uVar2) {
                _DAT_a00130a8 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a00130ac = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a00130b0 = 0xfa;
                if (_DAT_a00130b4 != -1) {
                  _DAT_a00130b4 = _DAT_a00130b4 + 1;
                }
                iVar1 = FUN_1d019748();
                if (iVar1 != 0) {
                  uVar2 = DAT_a000000c + 1;
                  DAT_a000000c = uVar2 - ((uVar2 / 10) * 2 +
                                         ((uint)((ulonglong)uVar2 * 0xcccccccd >> 0x20) & 0xfffffff8
                                         ));
                  if (DAT_a000000c == 0) {
                    local_38 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                    local_34 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54))) &
                               0x3fffffff | 0x40000000;
                    local_3c = 8;
                    local_40 = 0x434;
                    FUN_1d012a30(&local_40);
                  }
                }
              }
            }
            else {
              if ((uVar7 == 0x435) && (7 < uVar2)) {
                _DAT_a00130b8 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a00130bc = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a00130c0 = 0xfa;
                if (_DAT_a00130c4 != 0xffffffff) {
                  _DAT_a00130c4 = _DAT_a00130c4 + 1;
                }
                if (2 < _DAT_a00130c4) {
                  local_38 = local_38 & 0xffff0000 |
                             (uint)(ushort)(((ushort)local_54 - 0x30) +
                                           ((ushort)bStack85 & 3) * 0x100);
                  local_3c = 2;
                    // BO_ 114 FuelLevel_Report: 8 STEER
                  local_40 = 0x72;
                  FUN_1d0127a0(&local_40);
                }
              }
            }
          }
          else {
            if (uVar7 == 0x467) {
              if (7 < uVar2) {
                _DAT_a0013088 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                _DAT_a001308c = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                _DAT_a0013090 = 0x9c4;
                if (_DAT_a0013094 != 0xffffffff) {
                  _DAT_a0013094 = _DAT_a0013094 + 1;
                }
                if (1 < _DAT_a0013094) {
                  local_38 = (int)(((uint)bStack87 * 0x10 +
                                    ((uint)CONCAT11(bStack85,bStack86) & 0xf) + -0x7fe) * 4000) /
                             0x148 & 0xffffU |
                             (uint)(ushort)((ushort)bStack85 * 0x100 + (ushort)local_54) << 0x10;
                  local_34 = CONCAT13(local_58,CONCAT12(bStack81 >> 3,
                                                        CONCAT11(bStack82 >> 3,bStack83)));
                  local_3c = 8;
                  local_40 = 0x6f;
                  FUN_1d0127a0(&local_40);
                }
              }
            }
            else {
              if (uVar7 < 0x467) {
                if (7 < uVar2) {
                  _DAT_a0013078 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                  _DAT_a001307c = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                  _DAT_a0013080 = 0x9c4;
                  if (_DAT_a0013084 != 0xffffffff) {
                    _DAT_a0013084 = _DAT_a0013084 + 1;
                  }
                  iVar1 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                  if (1 < _DAT_a0013084) {
                    local_38 = ((uint)(iVar1 << 8) >> 0x1b) + 10 |
                               (((uint)(iVar1 << 0x10) >> 0x1c) + 1) * 0x100;
                    iVar3 = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                    local_34 = (uint)(iVar3 << 0x10) >> 0x1a |
                               (((uint)(iVar3 << 5) >> 0x1d) * 2 - ((iVar1 << 0x18) >> 0x1f)) *
                               0x10000 & 0x1fffffff | ((uint)(iVar3 << 0x1d) >> 0x1f) << 0x1d |
                               ((uint)(iVar1 << 0x19) >> 0x1f) << 0x1e;
                    local_3c = 8;
                    local_40 = 0x6e;
                    FUN_1d0127a0(&local_40);
                  }
                }
              }
              else {
                    // BO_ 2024 TesterPhysicalResPCM: 64 PCM_HEV
                if (uVar7 == 0x7e8) {
LAB_1d00d2f8:
                  if (7 < uVar2) {
                    _DAT_a00130f8 =
                         CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
                    _DAT_a00130fc =
                         CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
                    _DAT_a0013100 = 200;
                    if (_DAT_a0013104 != -1) {
                      _DAT_a0013104 = _DAT_a0013104 + 1;
                    }
                    if (DAT_a0012dda == '\0') {
                      if (_DAT_a0012dc0 == 2) {
                        if (local_58 == 0x21) {
                          uVar2 = CONCAT13(local_54,CONCAT12(bStack85,CONCAT11(bStack86,bStack87)));
                          _DAT_a0012dc8 = _DAT_a0012dc8 & 0xffffff | uVar2 << 0x18;
                          _DAT_a0012dcc = uVar2 >> 8 | (uint)bStack83 << 0x18;
                          _DAT_a0012dd0 = CONCAT11(bStack81,bStack82);
                          _DAT_a0012dd0 = _DAT_a0012dd0 & 0xffff0000 | (uint)_DAT_a0012dd0;
                          _DAT_a0012dc0 = local_2c;
                        }
                      }
                      else {
                        if (_DAT_a0012dc0 == 3) {
                          if (local_58 == 0x22) {
                            iVar1 = CONCAT13(local_54,CONCAT12(bStack85,CONCAT11(bStack86,bStack87))
                                            );
                            _DAT_a0012dd0 = _DAT_a0012dd0 & 0xffff | iVar1 << 0x10;
                            _DAT_a0012dd4 =
                                 CONCAT13(bStack82,CONCAT12(bStack83,(short)((uint)iVar1 >> 0x10)));
                            DAT_a0012dd8 = bStack81;
                            DAT_a0012dda = '\x01';
                            _DAT_a0012dc0 = 4;
                            FUN_1d011b60(local_30);
                            reset_some_global_vars();
                          }
                        }
                        else {
                          if (((((_DAT_a0012dc0 == 1) && (local_58 == 0x10)) && (bStack87 == 0x14))
                              && ((bStack86 == 0x49 && (bStack85 == 2)))) && (local_54 == 1)) {
                            _DAT_a0012dc8 = _DAT_a0012dc8 & 0xffffff00 | (uint)bStack83;
                            local_30[1] = bStack82;
                            local_30[2] = bStack81;
                            local_38 = 0x30;
                            local_34 = 0;
                            local_3c = 8;
                    // BO_ 2016 TesterPhysicalReqPCM: 64 TSTR
                            local_40 = 0x7e0;
                            FUN_1d012a30(&local_40);
                            _DAT_a0012dc0 = 2;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_1d00d494;
LAB_1d00c15c:
                    // BO_ 133
  if (uVar2 < 8) goto LAB_1d00c264;
  _MSG_133_DATA_H = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
  _MSG_133_DATA_L = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
  _DAT_a0012f78 = 200;
  if (_MSG_133_COUNT != 0xffffffff) {
    _MSG_133_COUNT = _MSG_133_COUNT + 1;
  }
  uVar2 = (local_48 & 0xff) * 0x100 + (local_48 >> 8 & 0xff) & 0xffff;
  if (((uVar2 - 1 & 0xffff) < 0xfffd) &&
     (uVar7 = (local_44 >> 0x18) + (local_44 >> 0x10 & 0xff) * 0x100 & 0xffff,
     (uVar7 - 1 & 0xffff) < 0xfffd)) {
    _HANDSHAKE_MAYBE_ = uVar2 - uVar7;
    DAT_a001332f = '\0';
  }
  else {
    _HANDSHAKE_MAYBE_ = 0;
    DAT_a001332f = '\x01';
  }
  FUN_1d009684();
LAB_1d00c254:
  can0_send_message(&local_50);
  goto LAB_1d00c264;
LAB_1d00bdfc:
  if (uVar2 < 8) goto LAB_1d00bf30;
  _DAT_a0012f3c = CONCAT13(bStack85,CONCAT12(bStack86,CONCAT11(bStack87,local_58)));
  _DAT_a0012f40 = CONCAT13(bStack81,CONCAT12(bStack82,CONCAT11(bStack83,local_54)));
  _DAT_a0012f44 = 200;
  if (_DAT_a0012f48 != -1) {
    _DAT_a0012f48 = _DAT_a0012f48 + 1;
  }
LAB_1d00bf1c:
  can1_send_message(&local_50);
  goto LAB_1d00bf30;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d00d5b0(char *param_1,undefined *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*param_1 == '\0') {
    if (param_1[1] == '\0') {
      cVar1 = param_1[2];
    }
    else {
      puVar7 = (undefined4 *)(param_1 + 8);
      FUN_1d014ea0(puVar7);
      handle_sid_100(puVar7);
      _DAT_a0012fd4 = *puVar7;
      _DAT_a0012fd8 = *(undefined4 *)(param_1 + 0xc);
      _DAT_a0012fdc = 100;
      if (_DAT_a0012fe0 != -1) {
        _DAT_a0012fe0 = _DAT_a0012fe0 + 1;
      }
      cVar1 = param_1[2];
    }
    if (cVar1 == '\0') {
      cVar1 = param_1[3];
    }
    else {
      FUN_1d008668(param_1 + 0x10);
      _DAT_a0012fe4 = *(undefined4 *)(param_1 + 0x10);
      _DAT_a0012fe8 = *(undefined4 *)(param_1 + 0x14);
      _DAT_a0012fec = 0;
      if (_DAT_a0012ff0 != -1) {
        _DAT_a0012ff0 = _DAT_a0012ff0 + 1;
      }
      cVar1 = param_1[3];
    }
    if (cVar1 != '\0') {
      FUN_1d008c2c(param_1 + 0x18);
      _DAT_a0013004 = *(undefined4 *)(param_1 + 0x18);
      _DAT_a0013008 = *(undefined4 *)(param_1 + 0x1c);
      _DAT_a001300c = 200;
      if (_DAT_a0013010 != -1) {
        _DAT_a0013010 = _DAT_a0013010 + 1;
      }
    }
    FUN_1d018b2c(param_2,0,0x40);
    *param_2 = 0xff;
    *(undefined2 *)(param_2 + 2) = 2;
    *(undefined2 *)(param_2 + 6) = 7;
    FUN_1d00909c(param_2 + 8);
    FUN_1d007f88(param_2 + 0x10);
    FUN_1d007e00(param_2 + 0x16);
    FUN_1d008268(param_2 + 0x18);
    FUN_1d0082ec(param_2 + 0x1c);
    FUN_1d0083c4(param_2 + 0x24);
    param_2[0x2c] = (byte)((uint)(_DAT_a0012f60 << 8) >> 0x1e);
    uVar5 = FUN_1d0154e8();
    param_2[0x2d] = uVar5;
    uVar5 = FUN_1d0154e0();
    param_2[0x2e] = uVar5;
    uVar4 = _DAT_a0012dd4;
    uVar3 = _DAT_a0012dd0;
    uVar2 = _DAT_a0012dcc;
    *(undefined4 *)(param_2 + 0x2f) = _DAT_a0012dc8;
    *(undefined4 *)(param_2 + 0x33) = uVar2;
    *(undefined4 *)(param_2 + 0x37) = uVar3;
    *(undefined4 *)(param_2 + 0x3b) = uVar4;
    param_2[0x3f] = DAT_a0012dd8;
  }
  else {
    if (*param_1 == '\x01') {
      FUN_1d01906c();
    }
    iVar6 = FUN_1d01685c();
    if (iVar6 == 0) {
      FUN_1d018b2c(param_2,0,0x40);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d00d804(void)

{
  undefined uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  iVar3 = DAT_a0000210;
  if (DAT_a0000488 < 0x40) {
    uVar2 = DAT_a0000488 & 0xff;
    uVar5 = (uint)DAT_a0000488 & 0xff;
    if (DAT_a00000d0 == '\0') {
      DAT_a00000d0 = '\x01';
    }
    else {
      if (DAT_a00000d0 == '\x01') {
        DAT_a00000d0 = '\x02';
      }
    }
    DAT_a0000488 = DAT_a0000488 - (DAT_a0000488 & 0xff);
    *(undefined *)(DAT_a0000210 + 2) = (char)uVar5;
    *(undefined *)(iVar3 + 3) = 0;
    if ((_DAT_a0000484 & 1) != 0) {
      if (uVar2 != 0) goto LAB_1d00d914;
      goto LAB_1d00d8cc;
    }
  }
  else {
    DAT_a0000488 = DAT_a0000488 - 0x40;
    *(undefined *)(DAT_a0000210 + 2) = 0x40;
    *(undefined *)(iVar3 + 3) = 0;
    uVar5 = 0x40;
    if ((_DAT_a0000484 & 1) != 0) {
LAB_1d00d914:
      DAT_a00000f4 = &DAT_a0000490;
      do {
        uVar1 = *DAT_a0000480;
        puVar4 = DAT_a00000f4 + 1;
        DAT_a0000480 = DAT_a0000480 + 1;
        *DAT_a00000f4 = uVar1;
        DAT_a00000f4 = puVar4;
        uVar5 = uVar5 - 1 & 0xff;
      } while (uVar5 != 0);
      return;
    }
  }
  if (uVar5 != 0) {
    DAT_a00000f4 = &DAT_a0000490;
    do {
      uVar1 = *DAT_a0000480;
      puVar4 = DAT_a00000f4 + 1;
      DAT_a0000480 = DAT_a0000480 + 1;
      *DAT_a00000f4 = uVar1;
      DAT_a00000f4 = puVar4;
      uVar5 = uVar5 - 1 & 0xff;
    } while (uVar5 != 0);
    return;
  }
LAB_1d00d8cc:
  DAT_a00000f4 = &DAT_a0000490;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void init_usb(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  _DAT_bf881074 = 0x2000000;
  _DAT_bf885220 = 0xff;
  _DAT_bf885200 = 0xff;
  _DAT_bf885310 = 0;
  _DAT_bf885320 = 0;
  _DAT_bf885330 = 0;
  _DAT_bf8852e0 = 0;
  _DAT_bf885230 = 0x9f;
  _DAT_bf885210 = 0x9f;
  _DAT_bf885070 = _DAT_bf885070 & 0xf;
  DAT_bf885080 = 1;
  _DAT_bf8852d0 = 0;
  _DAT_bf8852c0 = 0;
  _DAT_bf885270 = 4;
  iVar1 = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)((int)&DAT_a0000400 + iVar2) = 0;
    *(undefined4 *)((int)&DAT_a0000404 + iVar2) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar1 * 8;
  } while (iVar1 != 0x10);
  DAT_bf885250 = DAT_bf885250 & 1;
  _DAT_bf885260 = 0;
  if ((_DAT_bf885200 & 8) != 0) {
    do {
      _DAT_bf885200 = 8;
      DAT_a0000484 = 0;
      _DAT_a00004d4 = _DAT_a00004d4 & 0xffffff00;
    } while (true);
  }
  DAT_a00000c4 = 1;
  DAT_a00000cc = 1;
  DAT_a00000fc = 0;
  DAT_a0000100 = 0;
  DAT_a00000e0 = 0;
  puVar4 = &DAT_a0000210;
  puVar3 = &DAT_a0000200;
  iVar1 = 0;
  do {
    *puVar4 = 0;
    *puVar3 = 0;
    (&DAT_a0000114)[iVar1] = 0;
    (&DAT_a00000e4)[iVar1] = 0;
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 4);
  DAT_a00000c8 = 0;
  DAT_a0000104 = 0;
  DAT_a0000210 = &DAT_a0000410;
  DAT_a0000400._0_2_ = 0x84;
  DAT_a0000404 = 0xd8;
  _DAT_bf885300 = 0xd;
  return;
}



void FUN_1d00dbcc(int param_1,byte param_2)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  
  if ((param_2 & 8) != 0) {
    puVar1 = &DAT_a0000400 + param_1 * 8;
    *(byte *)puVar1 = *(byte *)puVar1 & 0x7f;
    *(undefined4 **)(&DAT_a0000200 + param_1) = puVar1;
    *(byte *)puVar1 = *(byte *)puVar1 & 0x3f;
    *(byte *)(&DAT_a0000408 + param_1 * 8) = *(byte *)(&DAT_a0000408 + param_1 * 8) & 0x3f | 0x40;
  }
  if ((param_2 & 4) != 0) {
    iVar2 = param_1 * 0x20;
    pbVar3 = &DAT_a0000410 + iVar2;
    *pbVar3 = *pbVar3 & 0x7f;
    *(byte **)(&DAT_a0000210 + param_1) = pbVar3;
    *pbVar3 = *pbVar3 & 0x3f;
    (&DAT_a0000418)[iVar2] = (&DAT_a0000418)[iVar2] & 0x3f | 0x40;
  }
  (&DAT_bf885300)[param_1 * 0x10] = param_2;
  return;
}



ushort * FUN_1d00dca0(int param_1,int param_2,uint param_3,byte param_4)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (ushort *)(&DAT_a0000200)[param_1];
  }
  else {
    puVar2 = (ushort *)(&DAT_a0000210)[param_1];
  }
  if (puVar2 != (ushort *)0x0) {
    *(uint *)(puVar2 + 2) = param_3 & 0x1fffffff;
    *(byte *)(puVar2 + 1) = param_4;
    *(byte *)((int)puVar2 + 3) = 0;
    *(byte *)puVar2 = *(byte *)puVar2 & 0x40;
    *(byte *)((int)puVar2 + 1) = 0;
    uVar1 = *puVar2;
    *(byte *)puVar2 = *(byte *)puVar2 | 0x88;
    *(byte *)((int)puVar2 + 1) = (byte)((uint)uVar1 >> 8);
    if (param_2 != 0) {
      *(byte *)(&DAT_a0000210 + param_1) = *(byte *)(&DAT_a0000210 + param_1) ^ 8;
      return puVar2;
    }
    *(byte *)(&DAT_a0000200 + param_1) = *(byte *)(&DAT_a0000200 + param_1) ^ 8;
    return puVar2;
  }
  return (ushort *)0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void init_interrupts(void)

{
  if (DAT_a0000104 == 0) {
    _DAT_bf885250 = 0;
    _DAT_bf8852e0 = 0;
    _DAT_bf885230 = 0x9f;
    _DAT_bf885210 = 0x9f;
    _DAT_bf885070 = _DAT_bf885070 & 0xf;
    _DAT_bf881078 = 0x2000000;
    _DAT_bf881144 = 0xff00;
    _DAT_bf881148 = 0x1000;
    init_external_interrupt();
    FUN_1d01989c();
    if ((_DAT_bf885250 & 1) == 0) {
      do {
        _DAT_bf885250 = CONCAT31(ram0xbf885251,1);
      } while (false);
    }
    DAT_a0000104 = 1;
  }
  return;
}



void FUN_1d00e124(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_a00000e8;
  DAT_a00000fc = 0;
  DAT_a0000100 = 0;
  if (DAT_a00000ec == '\x02') {
    DAT_a00000e8[2] = 0x40;
    puVar1[3] = 0;
    puVar1 = DAT_a00000e8;
    *(undefined4 *)(DAT_a00000e8 + 4) = 0x490;
    *puVar1 = 200;
    puVar1[1] = 0;
  }
  else {
    if (DAT_a00000de < DAT_a0000488) {
      DAT_a0000488 = DAT_a00000de;
    }
    FUN_1d00d804();
    puVar1 = DAT_a0000210;
    *(undefined4 *)(DAT_a0000210 + 4) = 0x490;
    *puVar1 = 200;
    puVar1[1] = 0;
  }
  return;
}



uint FUN_1d00f708(int param_1)

{
  return (uint)(byte)(&DAT_a00000ac)[param_1];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1d00f718(int param_1)

{
  if (param_1 == 2) {
    return ((_DAT_bf8860d0 ^ 0x400) << 0x15) >> 0x1f;
  }
  if (param_1 == 3) {
    return ((_DAT_bf8860d0 ^ 0x100) << 0x17) >> 0x1f;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d00f758(int param_1,byte param_2,undefined *param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  uint *puVar5;
  int iVar6;
  
  if (param_1 == 3) {
    _DAT_bf8860e4 = 0x200;
    _DAT_bf8860c4 = 0x200;
LAB_1d00f820:
    puVar2 = (uint *)&DAT_bf805810;
    puVar5 = (uint *)&DAT_bf805820;
LAB_1d00f854:
    *puVar5 = 3;
    *puVar5 = (uint)param_2;
    do {
    } while ((*puVar2 & 0x1f000000) < 0x2000000);
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886064 = 0x100;
      _DAT_bf886044 = 0x100;
LAB_1d00f834:
      puVar2 = (uint *)&DAT_bf805c10;
      puVar5 = (uint *)&DAT_bf805c20;
      goto LAB_1d00f854;
    }
    if (param_1 == 2) {
      _DAT_bf8861a4 = 0x200;
      _DAT_bf886184 = 0x200;
      puVar2 = (uint *)&DAT_bf805a10;
      puVar5 = (uint *)&DAT_bf805a20;
      goto LAB_1d00f854;
    }
    if (param_1 == 3) goto LAB_1d00f820;
    if (param_1 == 4) goto LAB_1d00f834;
    if (param_1 == 2) {
      puVar2 = (uint *)&DAT_bf805a10;
      puVar5 = (uint *)&DAT_bf805a20;
      goto LAB_1d00f854;
    }
  }
  if (param_1 == 3) {
    puVar2 = (uint *)&DAT_bf805810;
    puVar3 = (undefined4 *)&DAT_bf805820;
  }
  else {
    if (param_1 == 4) {
      puVar2 = (uint *)&DAT_bf805c10;
      puVar3 = (undefined4 *)&DAT_bf805c20;
    }
    else {
      if (param_1 != 2) goto LAB_1d00f964;
      puVar2 = (uint *)&DAT_bf805a10;
      puVar3 = (undefined4 *)&DAT_bf805a20;
    }
  }
  iVar6 = param_4 + -1;
  iVar1 = iVar6;
  if (param_4 != 0) {
    do {
      *puVar3 = 0;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  do {
  } while ((*puVar2 & 0x1f000000) < (uint)(param_4 << 0x18));
  if (param_3 == (undefined *)0x0) {
    if (param_4 != 0) {
      do {
        iVar6 = iVar6 + -1;
      } while (iVar6 != -1);
    }
  }
  else {
    puVar4 = param_3;
    if (param_4 != 0) {
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = (char)*puVar3;
        puVar4 = puVar4;
      } while (puVar4 != param_3 + param_4);
    }
  }
LAB_1d00f964:
  if (param_1 == 3) {
    _DAT_bf8860e8 = 0x200;
    _DAT_bf8860c4 = 0x200;
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886068 = 0x100;
      _DAT_bf886044 = 0x100;
    }
    else {
      if (param_1 == 2) {
        _DAT_bf8861a8 = 0x200;
        _DAT_bf886184 = 0x200;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d00f9d4(int param_1,byte param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (param_1 == 3) {
    _DAT_bf8860e4 = 0x200;
    _DAT_bf8860c4 = 0x200;
LAB_1d00fa9c:
    puVar2 = (uint *)&DAT_bf805810;
    puVar3 = (uint *)&DAT_bf805820;
LAB_1d00fad0:
    *puVar3 = 2;
    *puVar3 = (uint)param_2;
    do {
    } while ((*puVar2 & 0x1f000000) < 0x2000000);
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886064 = 0x100;
      _DAT_bf886044 = 0x100;
LAB_1d00fab0:
      puVar2 = (uint *)&DAT_bf805c10;
      puVar3 = (uint *)&DAT_bf805c20;
      goto LAB_1d00fad0;
    }
    if (param_1 == 2) {
      _DAT_bf8861a4 = 0x200;
      _DAT_bf886184 = 0x200;
      puVar2 = (uint *)&DAT_bf805a10;
      puVar3 = (uint *)&DAT_bf805a20;
      goto LAB_1d00fad0;
    }
    if (param_1 == 3) goto LAB_1d00fa9c;
    if (param_1 == 4) goto LAB_1d00fab0;
    if (param_1 == 2) {
      puVar2 = (uint *)&DAT_bf805a10;
      puVar3 = (uint *)&DAT_bf805a20;
      goto LAB_1d00fad0;
    }
  }
  if (param_1 == 3) {
    puVar3 = (uint *)&DAT_bf805810;
    puVar2 = (uint *)&DAT_bf805820;
  }
  else {
    if (param_1 == 4) {
      puVar3 = (uint *)&DAT_bf805c10;
      puVar2 = (uint *)&DAT_bf805c20;
    }
    else {
      if (param_1 != 2) goto LAB_1d00fbe0;
      puVar3 = (uint *)&DAT_bf805a10;
      puVar2 = (uint *)&DAT_bf805a20;
    }
  }
  iVar1 = param_4 + -1;
  if (param_3 == 0) {
    if (param_4 != 0) {
      do {
        *puVar2 = 0;
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
  }
  else {
    if (param_4 != 0) {
      iVar1 = param_3 + 1;
      while (*puVar2 = (uint)*(byte *)(iVar1 + -1), iVar1 != param_3 + param_4) {
        iVar1 = iVar1 + 1;
      }
    }
  }
  do {
  } while ((*puVar3 & 0x1f000000) < (uint)(param_4 << 0x18));
  iVar1 = param_4 + -1;
  if (param_4 != 0) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
LAB_1d00fbe0:
  if (param_1 == 3) {
    _DAT_bf8860e8 = 0x200;
    _DAT_bf8860c4 = 0x200;
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886068 = 0x100;
      _DAT_bf886044 = 0x100;
    }
    else {
      if (param_1 == 2) {
        _DAT_bf8861a8 = 0x200;
        _DAT_bf886184 = 0x200;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1d00fc50(int param_1)

{
  if (param_1 == 3) {
    _DAT_bf8860e4 = 0x200;
LAB_1d00fd1c:
    do {
    } while ((_DAT_bf805810 & 0x1f000000) == 0);
LAB_1d00fdbc:
    do {
    } while ((_DAT_bf805810 & 0x1f000000) == 0);
    _DAT_bf805820 = 0;
    _DAT_bf8860c4 = 0x200;
    _DAT_bf8860e8 = 0x200;
    return 0;
  }
  if (param_1 == 4) {
    _DAT_bf886064 = 0x100;
LAB_1d00fd4c:
    do {
    } while ((_DAT_bf805c10 & 0x1f000000) == 0);
LAB_1d00fde8:
    do {
    } while ((_DAT_bf805c10 & 0x1f000000) == 0);
    _DAT_bf805c20 = 0;
    _DAT_bf886044 = 0x100;
    _DAT_bf886068 = 0x100;
    return 0;
  }
  if (param_1 == 2) {
    _DAT_bf8861a4 = 0x200;
  }
  else {
    if (param_1 == 3) goto LAB_1d00fd1c;
    if (param_1 == 4) goto LAB_1d00fd4c;
    if (param_1 != 2) {
      if (param_1 != 3) {
        if (param_1 == 4) goto LAB_1d00fde8;
        if (param_1 != 2) {
          if (param_1 == 3) {
            _DAT_bf8860c4 = 0x200;
            _DAT_bf8860e8 = 0x200;
            return 0;
          }
          if (param_1 != 4) {
            if (param_1 != 2) {
              return 0;
            }
            _DAT_bf886184 = 0x200;
            _DAT_bf8861a8 = 0x200;
            return 0;
          }
          _DAT_bf886044 = 0x100;
          _DAT_bf886068 = 0x100;
          return 0;
        }
        goto LAB_1d00fd90;
      }
      goto LAB_1d00fdbc;
    }
  }
  do {
  } while ((_DAT_bf805a10 & 0x1f000000) == 0);
LAB_1d00fd90:
  do {
  } while ((_DAT_bf805a10 & 0x1f000000) == 0);
  _DAT_bf805a20 = 0;
  _DAT_bf886184 = 0x200;
  _DAT_bf8861a8 = 0x200;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d00fe84(int param_1)

{
  if (param_1 == 3) {
    _DAT_bf8860e4 = 0x200;
LAB_1d00ff50:
    _DAT_bf805820 = 0xc0;
    do {
    } while ((_DAT_bf805810 & 0x1f000000) == 0);
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886064 = 0x100;
LAB_1d00ff80:
      _DAT_bf805c20 = 0xc0;
      do {
      } while ((_DAT_bf805c10 & 0x1f000000) == 0);
LAB_1d00fffc:
      _DAT_bf886068 = 0x100;
      _DAT_bf886044 = 0x100;
      goto LAB_1d01000c;
    }
    if (param_1 == 2) {
      _DAT_bf8861a4 = 0x200;
LAB_1d00ff20:
      _DAT_bf805a20 = 0xc0;
      do {
      } while ((_DAT_bf805a10 & 0x1f000000) == 0);
LAB_1d00ffc4:
      _DAT_bf8861a8 = 0x200;
      _DAT_bf886184 = 0x200;
      goto LAB_1d01000c;
    }
    if (param_1 == 3) goto LAB_1d00ff50;
    if (param_1 == 4) goto LAB_1d00ff80;
    if (param_1 == 2) goto LAB_1d00ff20;
    if (param_1 != 3) {
      if (param_1 != 4) {
        if (param_1 != 2) goto LAB_1d01000c;
        goto LAB_1d00ffc4;
      }
      goto LAB_1d00fffc;
    }
  }
  _DAT_bf8860e8 = 0x200;
  _DAT_bf8860c4 = 0x200;
LAB_1d01000c:
  FUN_1d00fc50(param_1);
  FUN_1d00fc50(param_1);
  FUN_1d00fc50(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d010268(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 != 3) {
    if (param_1 == 4) {
      _DAT_bf886064 = 0x100;
      uVar1 = 1 << (param_2 & 3) & 0x7fU | 0x80;
LAB_1d01039c:
      do {
      } while ((_DAT_bf805c10 & 0x1f000000) == 0);
      _DAT_bf805c20 = uVar1;
      _DAT_bf886044 = 0x100;
      _DAT_bf886068 = 0x100;
      return;
    }
    if (param_1 == 2) {
      _DAT_bf8861a4 = 0x200;
      uVar1 = 1 << (param_2 & 3) & 0x7fU | 0x80;
    }
    else {
      uVar1 = 1 << (param_2 & 3) & 0x7fU | 0x80;
      if (param_1 == 3) goto LAB_1d010370;
      if (param_1 == 4) goto LAB_1d01039c;
      if (param_1 != 2) {
        if (param_1 == 3) {
          _DAT_bf8860c4 = 0x200;
          _DAT_bf8860e8 = 0x200;
          return;
        }
        if (param_1 != 4) {
          if (param_1 == 2) {
            _DAT_bf886184 = 0x200;
            _DAT_bf8861a8 = 0x200;
            return;
          }
          return;
        }
        _DAT_bf886044 = 0x100;
        _DAT_bf886068 = 0x100;
        return;
      }
    }
    do {
    } while ((_DAT_bf805a10 & 0x1f000000) == 0);
    _DAT_bf805a20 = uVar1;
    _DAT_bf886184 = 0x200;
    _DAT_bf8861a8 = 0x200;
    return;
  }
  _DAT_bf8860e4 = 0x200;
  uVar1 = 1 << (param_2 & 3) & 0x7fU | 0x80;
LAB_1d010370:
  do {
  } while ((_DAT_bf805810 & 0x1f000000) == 0);
  _DAT_bf805820 = uVar1;
  _DAT_bf8860c4 = 0x200;
  _DAT_bf8860e8 = 0x200;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d010420(int param_1,undefined param_2,undefined param_3,undefined param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  uint *puVar4;
  byte local_8 [4];
  byte abStack4 [4];
  
  if (param_1 == 3) {
    _DAT_bf8860e4 = 0x200;
    _DAT_bf8860c4 = 0x200;
    local_8[0] = 5;
    local_8[1] = param_2;
    local_8[2] = param_3;
    local_8[3] = param_4;
LAB_1d010508:
    puVar4 = (uint *)&DAT_bf805810;
    puVar3 = (uint *)&DAT_bf805820;
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886064 = 0x100;
      _DAT_bf886044 = 0x100;
      local_8[0] = 5;
      local_8[1] = param_2;
      local_8[2] = param_3;
      local_8[3] = param_4;
LAB_1d01051c:
      puVar4 = (uint *)&DAT_bf805c10;
      puVar3 = (uint *)&DAT_bf805c20;
    }
    else {
      if (param_1 == 2) {
        _DAT_bf8861a4 = 0x200;
        _DAT_bf886184 = 0x200;
        local_8[0] = 5;
        local_8[1] = param_2;
        local_8[2] = param_3;
        local_8[3] = param_4;
        puVar4 = (uint *)&DAT_bf805a10;
        puVar3 = (uint *)&DAT_bf805a20;
      }
      else {
        local_8[0] = 5;
        local_8[1] = param_2;
        local_8[2] = param_3;
        local_8[3] = param_4;
        if (param_1 == 3) goto LAB_1d010508;
        if (param_1 == 4) goto LAB_1d01051c;
        if (param_1 != 2) goto LAB_1d010588;
        puVar4 = (uint *)&DAT_bf805a10;
        puVar3 = (uint *)&DAT_bf805a20;
      }
    }
  }
  pbVar1 = local_8;
  do {
    pbVar2 = pbVar1 + 1;
    *puVar3 = (uint)*pbVar1;
    pbVar1 = pbVar2;
  } while (pbVar2 != abStack4);
  do {
  } while ((*puVar4 & 0x1f000000) < 0x4000000);
LAB_1d010588:
  if (param_1 == 3) {
    _DAT_bf8860e8 = 0x200;
    _DAT_bf8860c4 = 0x200;
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886068 = 0x100;
      _DAT_bf886044 = 0x100;
    }
    else {
      if (param_1 == 2) {
        _DAT_bf8861a8 = 0x200;
        _DAT_bf886184 = 0x200;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d0105f8(int param_1,uint param_2,uint param_3,int param_4,byte *param_5,byte param_6)

{
  byte *pbVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  byte local_8 [6];
  byte abStack2 [2];
  
  uVar6 = (uint)param_6;
  if (8 < param_6) {
    uVar6 = 8;
  }
  if (param_1 == 3) {
    _DAT_bf8860e4 = 0x200;
    _DAT_bf8860c4 = 0x200;
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886064 = 0x100;
      _DAT_bf886044 = 0x100;
    }
    else {
      if (param_1 == 2) {
        _DAT_bf8861a4 = 0x200;
        _DAT_bf886184 = 0x200;
      }
    }
  }
  local_8[0] = (byte)((param_2 & 3) << 1) | 0x40;
  if (param_4 == 0) {
    local_8[1] = (char)(param_3 >> 3);
    local_8[2] = (char)(param_3 << 5);
    local_8[3] = 0;
    local_8[4] = 0;
  }
  else {
    local_8[1] = (char)(param_3 >> 0x15);
    local_8[2] = (byte)(param_3 >> 0xd) | (byte)((param_3 << 0xe) >> 0x1e) | 8;
    local_8[3] = (char)(param_3 >> 8);
    local_8[4] = (char)param_3;
  }
  local_8[5] = (char)uVar6;
  if (param_1 == 3) {
    puVar4 = (uint *)&DAT_bf805810;
    puVar3 = (uint *)&DAT_bf805820;
LAB_1d010734:
    pbVar5 = local_8;
    do {
      pbVar1 = pbVar5 + 1;
      *puVar3 = (uint)*pbVar5;
      pbVar5 = pbVar1;
    } while (pbVar1 != abStack2);
    do {
    } while ((*puVar4 & 0x1f000000) < 0x6000000);
  }
  else {
    if (param_1 == 4) {
      puVar4 = (uint *)&DAT_bf805c10;
      puVar3 = (uint *)&DAT_bf805c20;
      goto LAB_1d010734;
    }
    if (param_1 == 2) {
      puVar4 = (uint *)&DAT_bf805a10;
      puVar3 = (uint *)&DAT_bf805a20;
      goto LAB_1d010734;
    }
  }
  if (param_1 == 3) {
    puVar4 = (uint *)&DAT_bf805810;
    puVar3 = (uint *)&DAT_bf805820;
  }
  else {
    if (param_1 == 4) {
      puVar4 = (uint *)&DAT_bf805c10;
      puVar3 = (uint *)&DAT_bf805c20;
    }
    else {
      if (param_1 != 2) goto LAB_1d010864;
      puVar4 = (uint *)&DAT_bf805a10;
      puVar3 = (uint *)&DAT_bf805a20;
    }
  }
  iVar2 = uVar6 - 1;
  if (param_5 == (byte *)0x0) {
    if (uVar6 != 0) {
      do {
        *puVar3 = 0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
  }
  else {
    pbVar5 = param_5 + uVar6;
    if (uVar6 != 0) {
      do {
        pbVar1 = param_5 + 1;
        *puVar3 = (uint)*param_5;
        param_5 = pbVar1;
      } while (pbVar1 != pbVar5);
    }
  }
  do {
  } while ((*puVar4 & 0x1f000000) < uVar6 << 0x18);
  iVar2 = uVar6 - 1;
  if (uVar6 != 0) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
LAB_1d010864:
  if (param_1 == 3) {
    _DAT_bf8860e8 = 0x200;
    _DAT_bf8860c4 = 0x200;
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886068 = 0x100;
      _DAT_bf886044 = 0x100;
    }
    else {
      if (param_1 == 2) {
        _DAT_bf8861a8 = 0x200;
        _DAT_bf886184 = 0x200;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d0108d4(int param_1,uint param_2,uint *param_3,undefined *param_4,undefined *param_5,
                 undefined *param_6)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  byte local_8 [5];
  undefined auStack3 [3];
  
  if (param_1 == 3) {
    _DAT_bf8860e4 = 0x200;
    _DAT_bf8860c4 = 0x200;
    uVar1 = (param_2 & 1) << 2 | 0x90;
LAB_1d0109d4:
    do {
      _DAT_bf805820 = uVar1;
      uVar1 = _DAT_bf805820;
    } while ((_DAT_bf805810 & 0x1f000000) == 0);
LAB_1d010a40:
    puVar5 = (uint *)&DAT_bf805810;
    puVar6 = (undefined4 *)&DAT_bf805820;
LAB_1d010a6c:
    *puVar6 = 0;
    *puVar6 = 0;
    *puVar6 = 0;
    *puVar6 = 0;
    *puVar6 = 0;
    do {
    } while ((*puVar5 & 0x1f000000) < 0x5000000);
    puVar2 = local_8;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = (char)*puVar6;
      puVar2 = puVar2;
    } while (puVar2 != auStack3);
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886064 = 0x100;
      _DAT_bf886044 = 0x100;
      uVar1 = (param_2 & 1) << 2 | 0x90;
LAB_1d010a00:
      do {
        _DAT_bf805c20 = uVar1;
        uVar1 = _DAT_bf805c20;
      } while ((_DAT_bf805c10 & 0x1f000000) == 0);
LAB_1d010a54:
      puVar5 = (uint *)&DAT_bf805c10;
      puVar6 = (undefined4 *)&DAT_bf805c20;
      goto LAB_1d010a6c;
    }
    if (param_1 == 2) {
      _DAT_bf8861a4 = 0x200;
      _DAT_bf886184 = 0x200;
      uVar1 = (param_2 & 1) << 2 | 0x90;
LAB_1d01099c:
      do {
        _DAT_bf805a20 = uVar1;
        uVar1 = _DAT_bf805a20;
      } while ((_DAT_bf805a10 & 0x1f000000) == 0);
      puVar5 = (uint *)&DAT_bf805a10;
      puVar6 = (undefined4 *)&DAT_bf805a20;
      goto LAB_1d010a6c;
    }
    uVar1 = (param_2 & 1) << 2 | 0x90;
    if (param_1 == 3) goto LAB_1d0109d4;
    if (param_1 == 4) goto LAB_1d010a00;
    if (param_1 == 2) goto LAB_1d01099c;
    if (param_1 == 3) goto LAB_1d010a40;
    if (param_1 == 4) goto LAB_1d010a54;
    if (param_1 == 2) {
      puVar5 = (uint *)&DAT_bf805a10;
      puVar6 = (undefined4 *)&DAT_bf805a20;
      goto LAB_1d010a6c;
    }
  }
  if (param_3 != (uint *)0x0) {
    if ((local_8[1] & 8) == 0) {
      if (param_4 != (undefined *)0x0) {
        *param_4 = 0;
      }
      uVar1 = (uint)(local_8[1] >> 5) | (uint)local_8[0] << 3;
    }
    else {
      uVar1 = (uint)local_8[2] << 8 | (uint)local_8[0] << 0x15 | (uint)local_8[3] |
              ((uint)local_8[1] & 3) << 0x10 | ((uint)local_8[1] & 0xe0) << 0xd;
      if (param_4 != (undefined *)0x0) {
        *param_4 = 1;
      }
    }
    *param_3 = uVar1;
  }
  uVar1 = (uint)local_8[4] & 0xf;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  if (param_6 != (undefined *)0x0) {
    *param_6 = (char)uVar1;
  }
  if (param_1 == 3) {
    puVar5 = (uint *)&DAT_bf805810;
    puVar6 = (undefined4 *)&DAT_bf805820;
  }
  else {
    if (param_1 == 4) {
      puVar5 = (uint *)&DAT_bf805c10;
      puVar6 = (undefined4 *)&DAT_bf805c20;
    }
    else {
      if (param_1 != 2) goto LAB_1d010c28;
      puVar5 = (uint *)&DAT_bf805a10;
      puVar6 = (undefined4 *)&DAT_bf805a20;
    }
  }
  iVar7 = uVar1 - 1;
  iVar3 = iVar7;
  if (uVar1 != 0) {
    do {
      *puVar6 = 0;
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  do {
  } while ((*puVar5 & 0x1f000000) < uVar1 << 0x18);
  if (param_5 == (undefined *)0x0) {
    if (uVar1 != 0) {
      do {
        iVar7 = iVar7 + -1;
      } while (iVar7 != -1);
    }
  }
  else {
    puVar2 = param_5;
    if (uVar1 != 0) {
      do {
        puVar4 = puVar2 + 1;
        *puVar2 = (char)*puVar6;
        puVar2 = puVar4;
      } while (puVar4 != param_5 + uVar1);
    }
  }
LAB_1d010c28:
  if (param_1 == 3) {
    _DAT_bf8860e8 = 0x200;
    _DAT_bf8860c4 = 0x200;
  }
  else {
    if (param_1 == 4) {
      _DAT_bf886068 = 0x100;
      _DAT_bf886044 = 0x100;
    }
    else {
      if (param_1 == 2) {
        _DAT_bf8861a8 = 0x200;
        _DAT_bf886184 = 0x200;
      }
    }
  }
  return;
}



uint FUN_1d010c98(undefined4 param_1)

{
  byte local_10 [12];
  
  FUN_1d00f758(param_1,0xe,local_10,1);
  return (uint)(local_10[0] >> 5);
}



uint FUN_1d010cc4(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  FUN_1d010420(param_1,0xf,0xe0,(param_2 & 7) << 5);
  FUN_1d00fc50(param_1);
  uVar1 = FUN_1d010c98(param_1);
  return (uint)(uVar1 == param_2);
}



void FUN_1d010d1c(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  undefined local_10;
  byte local_f;
  undefined local_e;
  undefined local_d;
  
  if (5 < param_2) {
    param_2 = 5;
  }
  if (param_4 == 0) {
    local_10 = (undefined)(param_3 >> 3);
    local_f = (byte)(param_3 << 5);
    local_e = 0;
    local_d = 0;
  }
  else {
    local_10 = (undefined)(param_3 >> 0x15);
    local_f = (byte)(param_3 >> 0xd) | (byte)((param_3 << 0xe) >> 0x1e) | 8;
    local_e = (undefined)(param_3 >> 8);
    local_d = (undefined)param_3;
  }
  FUN_1d00f9d4(param_1,(uint)*(byte *)((param_2 & 0xff) + 0x9d019894),&local_10,4);
  return;
}



void FUN_1d010dac(undefined4 param_1,byte param_2,uint param_3)

{
  undefined local_10;
  undefined local_f;
  undefined local_e;
  undefined local_d;
  
  local_10 = (undefined)(param_3 >> 3);
  local_f = (undefined)(param_3 << 5);
  local_e = 0;
  local_d = 0;
  if (param_2 != 0) {
    param_2 = 1;
  }
  FUN_1d00f9d4(param_1,(uint)*(byte *)((uint)param_2 + 0x9d019890),&local_10,4);
  return;
}



void FUN_1d010e08(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined local_18 [8];
  
  FUN_1d018170(param_1,0x10260,4);
  FUN_1d00fe84(param_1);
  (&DAT_a00000ac)[param_1] = 0;
  iVar2 = 0xb;
  do {
    iVar1 = FUN_1d010cc4(param_1,4);
    iVar2 = iVar2 + -1;
    if (iVar1 != 0) {
      if (param_2 == 0) {
        return;
      }
      FUN_1d010420(param_1,0x29,0x40,0x40);
      FUN_1d010420(param_1,0x29,0x80,0x80);
      if (param_2 << 4 == 0) {
        trap(7);
      }
      FUN_1d010420(param_1,0x2a,0x3f,8000000U / (uint)(param_2 << 4) - 1 & 0xff);
      FUN_1d010420(param_1,0x2a,0xc0,0x40);
      FUN_1d010420(param_1,0x29,7,2);
      FUN_1d010420(param_1,0x29,0x38,8);
      FUN_1d010420(param_1,0x28,7,1);
      local_18[0] = 4;
      FUN_1d00f9d4(param_1,0x60,local_18,1);
      local_18[0] = 0;
      FUN_1d00f9d4(param_1,0x70,local_18,1);
      FUN_1d010420(param_1,0x2b,3,3);
      FUN_1d010420(param_1,0xc,0x3f,0xf);
      FUN_1d010dac(param_1,0,0);
      FUN_1d010d1c(param_1,0,0,0);
      FUN_1d010d1c(param_1,1,0,1);
      FUN_1d010dac(param_1,1,0);
      FUN_1d010d1c(param_1,2,0,0);
      FUN_1d010d1c(param_1,3,0,0);
      FUN_1d010d1c(param_1,4,0,1);
      FUN_1d010d1c(param_1,5,0,1);
      iVar2 = 0xb;
      do {
        iVar1 = FUN_1d010cc4(param_1,0);
        iVar2 = iVar2 + -1;
        if (iVar1 != 0) {
          (&DAT_a00000ac)[param_1] = 1;
          return;
        }
      } while (iVar2 != 0);
      return;
    }
  } while (iVar2 != 0);
  return;
}



uint FUN_1d011064(undefined4 param_1)

{
  byte local_10 [12];
  
  FUN_1d00f758(param_1,0x1c,local_10,1);
  return (uint)local_10[0];
}



uint FUN_1d01108c(undefined4 param_1)

{
  byte local_10 [12];
  
  FUN_1d00f758(param_1,0x1d,local_10,1);
  return (uint)local_10[0];
}



void FUN_1d0110b4(undefined4 param_1,undefined *param_2,undefined *param_3)

{
  undefined local_18;
  undefined local_17;
  
  FUN_1d00f758(param_1,0x1c,&local_18,2);
  *param_3 = local_18;
  *param_2 = local_17;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1d011100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  
  if ((&DAT_a00000ac)[param_1] == '\0') {
    return 0;
  }
  if (param_1 == 2) {
    if ((_DAT_bf886110 & 0x20) == 0) {
LAB_1d011188:
      FUN_1d0108d4(param_1,0,param_2,param_3,param_4,param_5);
      return 1;
    }
LAB_1d0111c8:
    uVar1 = ((_DAT_bf886110 ^ 0x40) << 0x19) >> 0x1f;
  }
  else {
    if (param_1 == 3) {
      if ((_DAT_bf8860d0 & 1) == 0) goto LAB_1d011188;
    }
    else {
      if (param_1 == 2) goto LAB_1d0111c8;
      if (param_1 != 3) {
        uVar1 = 0;
        goto LAB_1d0111e4;
      }
    }
    uVar1 = ((_DAT_bf8860d0 ^ 0x800) << 0x14) >> 0x1f;
  }
LAB_1d0111e4:
  if (uVar1 == 0) {
    uVar1 = FUN_1d00fc50(param_1);
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 & 2;
      if (uVar1 != 0) {
        FUN_1d0108d4(param_1,1,param_2,param_3,param_4,param_5);
        uVar1 = 2;
      }
    }
    else {
      FUN_1d0108d4(param_1,0,param_2,param_3,param_4,param_5);
      uVar1 = 1;
    }
  }
  else {
    FUN_1d0108d4(param_1,1,param_2,param_3,param_4,param_5);
    uVar1 = 2;
  }
  return uVar1;
}



int FUN_1d011298(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  iVar2 = *(int *)(param_1 * 0x10 + -0x62fe8930);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  pbVar4 = &DAT_9d07ff80 + (iVar2 >> 3);
  pbVar5 = (byte *)((iVar2 >> 3) + -0x62f80000);
  if (pbVar4 < pbVar5) {
    iVar2 = 0;
    do {
      if ((*pbVar4 & 1) != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      uVar3 = 2;
      do {
        if ((uVar3 & *pbVar4) != 0) {
          return iVar2;
        }
        uVar1 = uVar3 & 0x7f;
        uVar3 = uVar1 << 1;
        iVar2 = iVar2 + 1;
      } while (uVar1 != 0);
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 != pbVar4);
    return iVar2;
  }
  return 0;
}



int FUN_1d011334(int param_1,uint param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar2 = FUN_1d018dc0(param_1,param_3);
    if ((param_2 == 0) || (uVar2 <= param_2)) {
      iVar3 = 0;
      if (uVar2 != 0) {
        iVar3 = FUN_1d018008(param_3);
        iVar3 = uVar2 + iVar3;
        if (param_4 != (int *)0x0) {
          *param_4 = 0;
          while( true ) {
            bVar1 = *(byte *)(iVar3 + *param_4);
            if (((bVar1 != 0x5f) && (0xb < (byte)(bVar1 - 0x2f))) &&
               (0x19 < (byte)((bVar1 & 0x1f) + 0xbf))) break;
            *param_4 = *param_4 + 1;
          }
        }
      }
    }
    else {
      iVar3 = 0;
    }
    return iVar3;
  }
  return 0;
}



undefined4 FUN_1d01140c(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_10 [3];
  
  local_10[0] = 0;
  pbVar1 = (byte *)FUN_1d011334(param_1,param_2,0x9d01750c,local_10);
  if (pbVar1 == (byte *)0x0) {
    uVar3 = 1;
  }
  else {
    if (((local_10[0] == 10) && (pbVar1[4] == 0x2f)) && (pbVar1[7] == 0x2f)) {
      uVar4 = (uint)*pbVar1 - 0x30 & 0xff;
      if (9 < uVar4) {
        uVar4 = 0;
      }
      uVar5 = (uint)pbVar1[1] - 0x30 & 0xff;
      if (9 < uVar5) {
        uVar5 = 0;
      }
      uVar6 = (uint)pbVar1[2] - 0x30 & 0xff;
      if (9 < uVar6) {
        uVar6 = 0;
      }
      uVar7 = (uint)pbVar1[3] - 0x30 & 0xff;
      if (9 < uVar7) {
        uVar7 = 0;
      }
      uVar8 = (uint)pbVar1[5] - 0x30 & 0xff;
      if (9 < uVar8) {
        uVar8 = 0;
      }
      uVar9 = (uint)pbVar1[6] - 0x30 & 0xff;
      if (9 < uVar9) {
        uVar9 = 0;
      }
      uVar10 = (uint)pbVar1[8] - 0x30 & 0xff;
      if (9 < uVar10) {
        uVar10 = 0;
      }
      uVar2 = (uint)pbVar1[9] - 0x30 & 0xff;
      if (9 < uVar2) {
        uVar2 = 0;
      }
      if (-1 < (int)(uVar2 + uVar10 * 0x10 +
                             uVar9 * 0x100 +
                             uVar8 * 0x1000 +
                             uVar7 * 0x10000 +
                             uVar6 * 0x100000 + uVar4 * 0x10000000 + uVar5 * 0x1000000 + -0x20180821
                    )) {
        return 1;
      }
    }
    DAT_a000001e = 1;
    uVar3 = 0;
  }
  return uVar3;
}



uint FUN_1d011564(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_18 [3];
  
  local_18[0] = 0;
  iVar1 = FUN_1d011334(param_1,param_2,0x9d017514,local_18);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_1d018008(param_3);
    uVar3 = 0;
    if ((iVar2 == 0x11) && (uVar3 = 0, local_18[0] == 0x11)) {
      iVar1 = FUN_1d0190e8(param_3,iVar1,0x11);
      uVar3 = (uint)(iVar1 == 0);
    }
  }
  return uVar3;
}



undefined4 FUN_1d0115ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_20 [3];
  
  local_20[0] = 0;
  iVar2 = FUN_1d011334(param_1,param_2,0x9d01751c,local_20);
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    iVar3 = FUN_1d018008(param_3);
    if (iVar3 == 0x11) {
      while (iVar3 = iVar2, uVar1 = local_20[0], 0x10 < local_20[0]) {
        iVar2 = FUN_1d0190e8(param_3,iVar3,0x11);
        if (iVar2 == 0) {
          return 1;
        }
        local_20[0] = uVar1 - 0x11;
        iVar2 = iVar3 + 0x11;
        if ((local_20[0] != 0) && (*(char *)(iVar3 + 0x11) == ',')) {
          local_20[0] = uVar1 - 0x12;
          iVar2 = iVar3 + 0x12;
        }
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



uint FUN_1d0116c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_18 [3];
  
  local_18[0] = 0;
  iVar1 = FUN_1d011334(param_1,param_2,0x9d017524,local_18);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    DAT_a000001d = 1;
    iVar2 = FUN_1d018008(param_3);
    uVar3 = 0;
    if ((iVar2 == 0x11) && (uVar3 = 0, local_18[0] == 0x11)) {
      iVar1 = FUN_1d0190e8(param_3,iVar1,0x11);
      uVar3 = (uint)(iVar1 == 0);
    }
  }
  return uVar3;
}



undefined4 FUN_1d011754(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_20 [3];
  
  local_20[0] = 0;
  iVar2 = FUN_1d011334(param_1,param_2,0x9d01752c,local_20);
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    DAT_a000001d = 1;
    iVar3 = FUN_1d018008(param_3);
    if (iVar3 == 0x11) {
      while (iVar3 = iVar2, uVar1 = local_20[0], 0x10 < local_20[0]) {
        iVar2 = FUN_1d0190e8(param_3,iVar3,0x11);
        if (iVar2 == 0) {
          return 1;
        }
        local_20[0] = uVar1 - 0x11;
        iVar2 = iVar3 + 0x11;
        if ((local_20[0] != 0) && (*(char *)(iVar3 + 0x11) == ',')) {
          local_20[0] = uVar1 - 0x12;
          iVar2 = iVar3 + 0x12;
        }
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



uint FUN_1d011834(void)

{
  return (uint)DAT_a000001f;
}



uint FUN_1d01183c(void)

{
  return (uint)DAT_a000001e;
}



uint FUN_1d011844(void)

{
  return (uint)DAT_a000001d;
}



uint FUN_1d01184c(int param_1)

{
  return (uint)(param_1 == 0);
}



uint FUN_1d011854(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = (uint)CAN0_MODE;
  }
  return uVar1;
}



uint FUN_1d01186c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = (uint)DAT_a00001d9;
  }
  return uVar1;
}



undefined4 FUN_1d011884(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = DAT_a00001dc;
  }
  return uVar1;
}



undefined4 FUN_1d01189c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = DAT_a00001e0;
  }
  return uVar1;
}



undefined4 FUN_1d0118b4(int param_1)

{
  if (param_1 == 0) {
    return 0x9d017534;
  }
  return 0;
}



undefined4 FUN_1d0118cc(int param_1)

{
  if (param_1 == 0) {
    return 0x9d01753c;
  }
  return 0;
}



uint steering_module_mode(void)

{
  return (uint)CAN0_MODE;
}



undefined1 * FUN_1d011950(void)

{
  byte bVar1;
  
  if (DAT_a00001b0 == '\0') {
    DAT_a00001b0 = (DAT_bf889320 >> 4) + 0x37;
    if (((uint)DAT_bf889320 << 0x18) >> 0x1c < 10) {
      DAT_a00001b0 = (DAT_bf889320 >> 4) + 0x30;
    }
    bVar1 = DAT_bf889320 & 0xf;
    DAT_a00001b1 = bVar1 + 0x37;
    if (bVar1 < 10) {
      DAT_a00001b1 = bVar1 + 0x30;
    }
    DAT_a00001b2 = 0x3a;
    DAT_a00001b3 = (DAT_bf889321 >> 4) + 0x37;
    if (((uint)DAT_bf889321 << 0x18) >> 0x1c < 10) {
      DAT_a00001b3 = (DAT_bf889321 >> 4) + 0x30;
    }
    bVar1 = DAT_bf889321 & 0xf;
    DAT_a00001b4 = bVar1 + 0x37;
    if (bVar1 < 10) {
      DAT_a00001b4 = bVar1 + 0x30;
    }
    DAT_a00001b5 = 0x3a;
    DAT_a00001b6 = (DAT_bf889310 >> 4) + 0x37;
    if (((uint)DAT_bf889310 << 0x18) >> 0x1c < 10) {
      DAT_a00001b6 = (DAT_bf889310 >> 4) + 0x30;
    }
    bVar1 = DAT_bf889310 & 0xf;
    DAT_a00001b7 = bVar1 + 0x37;
    if (bVar1 < 10) {
      DAT_a00001b7 = bVar1 + 0x30;
    }
    DAT_a00001b8 = 0x3a;
    DAT_a00001b9 = (DAT_bf889311 >> 4) + 0x37;
    if (((uint)DAT_bf889311 << 0x18) >> 0x1c < 10) {
      DAT_a00001b9 = (DAT_bf889311 >> 4) + 0x30;
    }
    bVar1 = DAT_bf889311 & 0xf;
    DAT_a00001ba = bVar1 + 0x37;
    if (bVar1 < 10) {
      DAT_a00001ba = bVar1 + 0x30;
    }
    DAT_a00001bb = 0x3a;
    DAT_a00001bc = (DAT_bf889300 >> 4) + 0x37;
    if (((uint)DAT_bf889300 << 0x18) >> 0x1c < 10) {
      DAT_a00001bc = (DAT_bf889300 >> 4) + 0x30;
    }
    bVar1 = DAT_bf889300 & 0xf;
    DAT_a00001bd = bVar1 + 0x37;
    if (bVar1 < 10) {
      DAT_a00001bd = bVar1 + 0x30;
    }
    DAT_a00001be = 0x3a;
    DAT_a00001bf = (DAT_bf889301 >> 4) + 0x37;
    if (((uint)DAT_bf889301 << 0x18) >> 0x1c < 10) {
      DAT_a00001bf = (DAT_bf889301 >> 4) + 0x30;
    }
    bVar1 = DAT_bf889301 & 0xf;
    DAT_a00001c0 = bVar1 + 0x37;
    if (bVar1 < 10) {
      DAT_a00001c0 = bVar1 + 0x30;
    }
    DAT_a00001c1 = 0;
  }
  return &DAT_a00001b0;
}



void FUN_1d011b60(undefined4 param_1)

{
  FUN_1d018f60(&DAT_a000019c,param_1,0x11);
  return;
}



undefined * FUN_1d011b88(void)

{
  return &DAT_a000019c;
}



undefined * FUN_1d011b94(void)

{
  if ((DAT_9d07f000 != '\0') && (DAT_9d07f000 != -1)) {
    return &DAT_9d07f000;
  }
  return (undefined *)0x9d017550;
}



void reset_some_global_vars(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint local_40;
  uint local_38;
  int local_34;
  undefined4 local_30;
  
  DAT_a00001c4 = 0;
  DAT_a00001c8 = 0;
  DAT_a00001cc = 0;
  DAT_a00001d0 = 0;
  DAT_a00001d4 = 0;
  DAT_a000001d = 0;
  pbVar9 = (byte *)FUN_1d011b94();
  local_30 = 0x9d0175a0;
LAB_1d01216c:
  pbVar10 = pbVar9;
  if ((byte)(*pbVar9 - 1) < 0x7e) {
    if (*pbVar9 == 10) {
      pbVar10 = pbVar9 + 1;
    }
    else {
      pbVar10 = pbVar9 + 1;
      do {
        bVar1 = *pbVar10;
        if (0x7d < (byte)(bVar1 - 1)) break;
        pbVar10 = pbVar10 + 1;
      } while (bVar1 != 10);
    }
  }
  if (pbVar10 == pbVar9) {
    DAT_a000001f = 0;
    if (DAT_a00001dc == 0) {
      DAT_a00001dc = FUN_1d011298(0);
    }
    DAT_a000001f = DAT_a00001d9 | DAT_a000001f;
    return;
  }
  if (pbVar9 == (byte *)0x0) {
LAB_1d012168:
    if (pbVar10 != (byte *)0x0) {
      pbVar9 = pbVar10;
    }
    goto LAB_1d01216c;
  }
  pbVar7 = (byte *)FUN_1d018dc0(pbVar9,0x9d017588);
  if ((pbVar10 != (byte *)0x0) && (pbVar10 < pbVar7)) {
    if (pbVar10 != (byte *)0x0) {
      pbVar9 = pbVar10;
    }
    goto LAB_1d01216c;
  }
  if (pbVar7 == (byte *)0x0) goto LAB_1d012168;
  local_38 = local_38 & 0xffff0000;
  bVar1 = pbVar7[10];
  if (bVar1 == 0) {
    local_40 = 0;
    iVar12 = 0;
  }
  else {
    local_40 = 0;
    iVar12 = 0;
    pbVar11 = pbVar7 + 0xb;
    while( true ) {
      local_38 = local_38 & 0xffffff00 | (uint)bVar1;
      uVar2 = local_40 >> 0x1c;
      uVar3 = FUN_1d017884(&local_38,0,0x10);
      local_40 = uVar3 + local_40 * 0x10;
      bVar1 = *pbVar11;
      iVar12 = (uint)(local_40 < uVar3) + ((int)uVar3 >> 0x1f) + (uVar2 | iVar12 << 4);
      if ((bVar1 == 0) || (pbVar11 == pbVar7 + 0x1a)) break;
      pbVar11 = pbVar11 + 1;
    }
  }
  iVar8 = 0;
  iVar4 = 0;
  do {
    uVar2 = (uint)*(byte *)(((uint)*pbVar9 + iVar4 & 0xff) + 0x9d0175c8);
    if ((byte *)0x1 < pbVar7 + (10 - (int)pbVar9)) {
      pbVar11 = (byte *)0x1;
      do {
        pbVar6 = pbVar9 + (int)pbVar11;
        pbVar11 = pbVar11 + 1;
        uVar2 = (uint)*(byte *)((uVar2 ^ *pbVar6) + 0x9d0175c8);
      } while (pbVar7 + (10 - (int)pbVar9) != pbVar11);
    }
    if ((uint)(byte)(&stack0xffffffc7)[iVar8] != uVar2) {
      if (pbVar10 != (byte *)0x0) {
        pbVar9 = pbVar10;
      }
      goto LAB_1d01216c;
    }
    iVar8 = iVar8 + -1;
    iVar4 = -iVar8;
  } while (iVar8 != -8);
  local_38 = 0;
  iVar12 = FUN_1d011334(pbVar9,pbVar10,0x9d0175b0,&local_38,local_40,iVar12);
  if (((iVar12 == 0) || (local_38 != 8)) ||
     (iVar12 = FUN_1d0190e8(0x9d017594,iVar12,8), iVar12 != 0)) {
    pbVar7 = (byte *)FUN_1d018dc0(pbVar9,local_30);
    if ((pbVar10 == (byte *)0x0) || (pbVar7 <= pbVar10)) {
      if (pbVar7 == (byte *)0x0) goto LAB_1d012168;
      iVar12 = FUN_1d01140c(pbVar9,pbVar10);
      if (iVar12 == 0) {
        if (pbVar10 != (byte *)0x0) {
          pbVar9 = pbVar10;
        }
      }
      else {
        uVar5 = FUN_1d011950();
        iVar12 = FUN_1d011564(pbVar9,pbVar10,uVar5);
        if (iVar12 == 0) {
          if (pbVar10 != (byte *)0x0) {
            pbVar9 = pbVar10;
          }
        }
        else {
          uVar5 = FUN_1d011950();
          iVar12 = FUN_1d0115ec(pbVar9,pbVar10,uVar5);
          if (iVar12 == 0) {
            if (pbVar10 != (byte *)0x0) {
              pbVar9 = pbVar10;
            }
          }
          else {
            iVar12 = FUN_1d0116c4(pbVar9,pbVar10,&DAT_a000019c);
            if (iVar12 == 0) {
              if (pbVar10 != (byte *)0x0) {
                pbVar9 = pbVar10;
              }
            }
            else {
              iVar12 = FUN_1d011754(pbVar9,pbVar10,&DAT_a000019c);
              if (iVar12 != 0) {
                local_38 = 0;
                iVar12 = FUN_1d011334(pbVar9,pbVar10,local_30,&local_38);
                if (iVar12 == 0) goto LAB_1d012168;
                pbVar7 = (byte *)FUN_1d018dc0(pbVar9,0x9d0175b0);
                if ((pbVar10 == (byte *)0x0) || (pbVar7 <= pbVar10)) {
                  if (pbVar7 != (byte *)0x0) {
                    if (pbVar10 != (byte *)0x0) {
                      pbVar9 = pbVar10;
                    }
                    goto LAB_1d01216c;
                  }
                  pbVar7 = (byte *)FUN_1d018dc0(pbVar9,0x9d0175bc);
                  if (pbVar10 != (byte *)0x0) goto LAB_1d012134;
LAB_1d01213c:
                  if (pbVar7 != (byte *)0x0) {
                    if (pbVar10 != (byte *)0x0) {
                      pbVar9 = pbVar10;
                    }
                    goto LAB_1d01216c;
                  }
                }
                else {
                  pbVar7 = (byte *)FUN_1d018dc0(pbVar9,0x9d0175bc);
LAB_1d012134:
                  if (pbVar7 <= pbVar10) goto LAB_1d01213c;
                }
                if (local_38 < 0x12) {
                  FUN_1d018f60(&DAT_a00001c4,iVar12);
                  goto LAB_1d012168;
                }
                if (pbVar10 != (byte *)0x0) {
                  pbVar9 = pbVar10;
                }
                goto LAB_1d01216c;
              }
              if (pbVar10 != (byte *)0x0) {
                pbVar9 = pbVar10;
              }
            }
          }
        }
      }
    }
    else {
      if (pbVar10 != (byte *)0x0) {
        pbVar9 = pbVar10;
      }
    }
    goto LAB_1d01216c;
  }
  iVar12 = FUN_1d01140c(pbVar9,pbVar10);
  if (iVar12 == 0) {
    if (pbVar10 != (byte *)0x0) {
      pbVar9 = pbVar10;
    }
    goto LAB_1d01216c;
  }
  uVar5 = FUN_1d011950();
  iVar12 = FUN_1d011564(pbVar9,pbVar10,uVar5);
  if (iVar12 == 0) {
    if (pbVar10 != (byte *)0x0) {
      pbVar9 = pbVar10;
    }
    goto LAB_1d01216c;
  }
  uVar5 = FUN_1d011950();
  iVar12 = FUN_1d0115ec(pbVar9,pbVar10,uVar5);
  if (iVar12 == 0) {
    if (pbVar10 != (byte *)0x0) {
      pbVar9 = pbVar10;
    }
    goto LAB_1d01216c;
  }
  iVar12 = FUN_1d0116c4(pbVar9,pbVar10,&DAT_a000019c);
  if (iVar12 == 0) {
    if (pbVar10 != (byte *)0x0) {
      pbVar9 = pbVar10;
    }
    goto LAB_1d01216c;
  }
  iVar12 = FUN_1d011754(pbVar9,pbVar10,&DAT_a000019c);
  if (iVar12 == 0) {
    if (pbVar10 != (byte *)0x0) {
      pbVar9 = pbVar10;
    }
    goto LAB_1d01216c;
  }
  local_38 = 0;
  iVar12 = FUN_1d011334(pbVar9,pbVar10,local_30,&local_38);
  if (iVar12 != 0) {
    local_40 = FUN_1d018008(&DAT_a00001c4);
    if (local_40 != local_38) {
      if (pbVar10 != (byte *)0x0) {
        pbVar9 = pbVar10;
      }
      goto LAB_1d01216c;
    }
    iVar12 = FUN_1d0190e8(&DAT_a00001c4,iVar12,local_40);
    if (iVar12 != 0) {
      if (pbVar10 != (byte *)0x0) {
        pbVar9 = pbVar10;
      }
      goto LAB_1d01216c;
    }
  }
  local_34 = 0;
  iVar12 = FUN_1d011334(pbVar9,pbVar10,0x9d0175bc,&local_34);
  if (iVar12 == 0) {
    if (pbVar10 != (byte *)0x0) {
      pbVar9 = pbVar10;
    }
    goto LAB_1d01216c;
  }
  if (local_34 != 4) {
    if (pbVar10 != (byte *)0x0) {
      pbVar9 = pbVar10;
    }
    goto LAB_1d01216c;
  }
  iVar12 = FUN_1d0190e8(0x9d017534,iVar12,4);
  if (iVar12 != 0) {
    if (pbVar10 != (byte *)0x0) {
      pbVar9 = pbVar10;
    }
    goto LAB_1d01216c;
  }
  local_38 = 0;
  iVar12 = FUN_1d011334(pbVar9,pbVar10,0x9d0175a8,&local_38);
  if (iVar12 == 0) {
    DAT_a00001d9 = 0;
  }
  else {
    if (CAN0_MODE == '\0') {
      DAT_a00001d9 = 1;
      iVar12 = FUN_1d018bd4(iVar12);
      if (iVar12 < 1) goto LAB_1d012168;
      if (DAT_a00001dc == 0) {
        DAT_a00001dc = FUN_1d011298(0);
      }
      iVar12 = iVar12 - DAT_a00001dc;
      if (0 < iVar12) {
        pbVar7 = &DAT_9d07ff80;
        do {
          bVar1 = *pbVar7;
          local_40 = 2;
          if ((bVar1 & 1) != 0) {
            local_40 = 0xfffffffe;
LAB_1d011f34:
            local_40 = local_40 & 0xff;
            uVar2 = (uint)pbVar7 & 3;
            if (uVar2 == 1) {
              local_40 = local_40 << 8 | 0xffff00ff;
            }
            else {
              if (uVar2 < 2) {
                if (uVar2 == 0) {
                  local_40 = local_40 | 0xffffff00;
                }
                else {
                  local_40 = 0;
                }
              }
              else {
                if (uVar2 == 2) {
                  local_40 = local_40 << 0x10 | 0xff00ffff;
                }
                else {
                  if (uVar2 == 3) {
                    local_40 = local_40 << 0x18 | 0xffffff;
                  }
                  else {
                    local_40 = 0;
                  }
                }
              }
            }
            if ((local_40 == 0xffffffff) || (iVar4 = FUN_1d0195d4(), iVar4 == 0)) {
              DAT_a00001e0 = iVar12 + -1;
              if (DAT_a00001dc != 0) {
                DAT_a00001dc = DAT_a00001dc + 1;
              }
              goto LAB_1d012028;
            }
            if (pbVar10 != (byte *)0x0) {
              pbVar9 = pbVar10;
            }
            goto LAB_1d01216c;
          }
          uVar2 = (uint)bVar1 & 2;
          do {
            if (uVar2 != 0) {
              local_40 = ~local_40;
              goto LAB_1d011f34;
            }
            uVar3 = local_40 & 0x7f;
            local_40 = uVar3 << 1;
            uVar2 = local_40 & (uint)bVar1;
          } while (uVar3 != 0);
          pbVar7 = pbVar7 + 1;
        } while (pbVar7 != (byte *)0x9d080000);
        if (pbVar10 != (byte *)0x0) {
          pbVar9 = pbVar10;
        }
        goto LAB_1d01216c;
      }
      goto LAB_1d012168;
    }
  }
LAB_1d012028:
  CAN0_MODE = '\x01';
  if (pbVar10 != (byte *)0x0) {
    pbVar9 = pbVar10;
  }
  goto LAB_1d01216c;
}



uint FUN_1d0122dc(uint *param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  
  if (0xf80 < param_2) {
    return 0;
  }
  puVar2 = (undefined4 *)&DAT_9d07ff80;
  puVar8 = &DAT_a000011c;
  do {
    uVar12 = puVar2[1];
    uVar11 = puVar2[2];
    uVar10 = puVar2[3];
    *puVar8 = *puVar2;
    puVar8[1] = uVar12;
    puVar8[2] = uVar11;
    puVar8[3] = uVar10;
    puVar2 = puVar2 + 4;
    puVar8 = puVar8 + 4;
  } while (puVar2 != (undefined4 *)0x9d080000);
  iVar3 = FUN_1d016270();
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = FUN_1d0196bc(&DAT_9d07f000);
  uVar15 = 0;
  puVar9 = &DAT_9d07ff80;
  do {
    puVar13 = puVar9 + 4;
    uVar4 = 0;
    if (*(int *)(puVar9 + 0x2f8019c) != -1) {
      uVar4 = FUN_1d0195d4();
    }
    uVar15 = uVar15 | uVar4;
    puVar9 = puVar13;
  } while (puVar13 != (undefined *)0x9d080000);
  iVar5 = FUN_1d0195d4(0x9d07ff7f,0xffffff);
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar14 = 0;
  }
  else {
    if (((uint)param_1 & 3) == 0) {
      if (param_2 < 4) {
        uVar14 = 0;
        puVar9 = &DAT_9d07f000;
      }
      else {
        uVar14 = 0;
        puVar9 = &DAT_9d07f000;
        puVar16 = param_1;
        do {
          uVar7 = 0;
          if (*puVar16 != 0xffffffff) {
            uVar7 = FUN_1d0195d4(puVar9);
          }
          uVar14 = uVar14 | uVar7;
          uVar4 = uVar4 - 4;
          uVar7 = param_2 - 4;
          puVar9 = puVar9 + 4;
          puVar16 = puVar16 + 1;
        } while (3 < uVar4);
        puVar9 = (undefined *)((uVar7 & 0xfffffffc) + 0x9d07f004);
        param_1 = param_1 + (uVar7 >> 2) + 1;
        uVar4 = uVar7 - (uVar7 & 0xfffffffc);
      }
      goto LAB_1d0124e4;
    }
    uVar14 = 0;
    do {
      iVar6 = 0;
      if (((uint)*(byte *)param_1 | 0xffffff00) != 0xffffffff) {
        iVar6 = FUN_1d0195d4(&DAT_9d07f000);
      }
      uVar4 = uVar4 - 1;
      uVar14 = uVar14 | iVar6 != 0;
    } while (uVar4 != 0);
  }
  puVar9 = &DAT_9d07f000;
LAB_1d0124e4:
  if (uVar4 == 2) {
    uVar4 = 0;
    if ((*param_1 | 0xffff0000) != 0xffffffff) {
      uVar4 = FUN_1d0195d4(puVar9);
    }
    uVar14 = uVar14 | uVar4;
  }
  else {
    if (uVar4 == 3) {
      uVar4 = 0;
      if ((*param_1 | 0xff000000) != 0xffffffff) {
        uVar4 = FUN_1d0195d4(puVar9);
      }
      uVar14 = uVar14 | uVar4;
    }
    else {
      if (uVar4 == 1) {
        uVar4 = 0;
        if ((*param_1 | 0xffffff00) != 0xffffffff) {
          uVar4 = FUN_1d0195d4(puVar9);
        }
        uVar14 = uVar14 | uVar4;
      }
    }
  }
  bVar1 = (iVar3 == 0 && (uVar15 == 0 && iVar5 == 0)) && uVar14 == 0;
  if ((int)param_2 < 0xf80) {
    uVar15 = (uint)(&DAT_9d07f000 + param_2) & 3;
    if (uVar15 == 1) {
      uVar10 = 0xffff00ff;
    }
    else {
      if (uVar15 < 2) {
        uVar10 = 0xffffff00;
        if (uVar15 != 0) {
          uVar10 = 0;
        }
      }
      else {
        if (uVar15 == 2) {
          uVar10 = 0xff00ffff;
        }
        else {
          if (uVar15 == 3) {
            uVar10 = 0xffffff;
          }
          else {
            uVar10 = 0;
          }
        }
      }
    }
    iVar3 = FUN_1d0195d4(&DAT_9d07f000 + param_2,uVar10);
    bVar1 = bVar1 && iVar3 == 0;
  }
  return (uint)bVar1;
}



void FUN_1d012650(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1d018008();
  FUN_1d0122dc(param_1,iVar1 + 1);
  return;
}



undefined4 FUN_1d012680(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = FUN_1d0141bc();
  }
  else {
    if (param_1 == 0) {
      uVar1 = FUN_1d013d0c();
    }
    else {
      if (param_1 == 2) {
        uVar1 = FUN_1d01449c();
      }
      else {
        if (param_1 == 3) {
          uVar1 = FUN_1d014774();
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



undefined4 FUN_1d012704(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = FUN_1d0141dc();
  }
  else {
    if (param_1 == 0) {
      uVar1 = FUN_1d013d2c();
    }
    else {
      if (param_1 == 2) {
        uVar1 = FUN_1d0144b8();
      }
      else {
        if (param_1 == 3) {
          uVar1 = FUN_1d014814();
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



int FUN_1d0127a0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((DAT_a00000b4 & 0x20) != 0) &&
     (iVar1 = (DAT_a0000cf8 & 0xfff) * 0x10,
     (DAT_a0000cf4 & 0xfff) != ((DAT_a0000cf8 & 0xfff) + 1 & 0xfff))) {
    *(uint *)(&DAT_a0000d00 + iVar1) =
         *(uint *)(&DAT_a0000d00 + iVar1) & 0x1fffffff |
         ((int)(param_1[1] << 3) >> 0x1f) * -0x20000000 & 0x3fffffffU |
         ((param_1[1] & 0xf) >> 2) << 0x1e;
    *(uint *)(&DAT_a0000cfc + iVar1) = *(uint *)(&DAT_a0000cfc + iVar1) & 0x7ffffff | 0x28000000;
    uVar3 = param_1[3];
    *(undefined4 *)(&DAT_a0000d04 + iVar1) = param_1[2];
    *(undefined4 *)(&DAT_a0000d08 + iVar1) = uVar3;
    uVar2 = DAT_a0000cf8 + 1 & 0xfff;
    if ((DAT_a0000cf4 & 0xfff) != uVar2) {
      DAT_a0000cf8 = uVar2;
    }
  }
  while( true ) {
    iVar1 = (DAT_a00008e8 & 0x3f) * 0x10;
    if ((DAT_a00008e8 & 0x3f) == (DAT_a00008ec & 0x3f)) {
      iVar1 = FUN_1d01423c(param_1);
      if (iVar1 == 0) {
        uVar2 = (DAT_a00008ec & 0x3f) + 1 & 0x3f;
        if ((DAT_a00008e8 & 0x3f) == uVar2) {
          DAT_a00008f0 = DAT_a00008f0 + 1;
        }
        else {
          iVar1 = (DAT_a00008ec & 0x3f) * 0x10;
          uVar5 = param_1[1];
          uVar4 = param_1[2];
          uVar3 = param_1[3];
          *(undefined4 *)(&DAT_a00008f4 + iVar1) = *param_1;
          *(undefined4 *)(&DAT_a00008f8 + iVar1) = uVar5;
          *(undefined4 *)(&DAT_a00008fc + iVar1) = uVar4;
          *(undefined4 *)(&DAT_a0000900 + iVar1) = uVar3;
          iVar1 = 1;
          DAT_a00008ec = uVar2;
        }
      }
      return iVar1;
    }
    local_20 = *(undefined4 *)(&DAT_a00008f4 + iVar1);
    local_1c = *(undefined4 *)(&DAT_a00008f8 + iVar1);
    local_18 = *(undefined4 *)(&DAT_a00008fc + iVar1);
    local_14 = *(undefined4 *)(&DAT_a0000900 + iVar1);
    iVar1 = FUN_1d01423c(&local_20);
    if (iVar1 == 0) break;
    if ((DAT_a00008e8 & 0x3f) != (DAT_a00008ec & 0x3f)) {
      DAT_a00008e8 = (DAT_a00008e8 & 0x3f) + 1 & 0x3f;
    }
  }
  uVar2 = (DAT_a00008ec & 0x3f) + 1 & 0x3f;
  if ((DAT_a00008e8 & 0x3f) != uVar2) {
    iVar1 = (DAT_a00008ec & 0x3f) * 0x10;
    uVar5 = param_1[1];
    uVar4 = param_1[2];
    uVar3 = param_1[3];
    *(undefined4 *)(&DAT_a00008f4 + iVar1) = *param_1;
    *(undefined4 *)(&DAT_a00008f8 + iVar1) = uVar5;
    *(undefined4 *)(&DAT_a00008fc + iVar1) = uVar4;
    *(undefined4 *)(&DAT_a0000900 + iVar1) = uVar3;
    DAT_a00008ec = uVar2;
    return 1;
  }
  DAT_a00008f0 = DAT_a00008f0 + 1;
  return 0;
}



int FUN_1d012a30(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((DAT_a00000b4 & 0x80) != 0) &&
     (iVar1 = (DAT_a0000cf8 & 0xfff) * 0x10,
     (DAT_a0000cf4 & 0xfff) != ((DAT_a0000cf8 & 0xfff) + 1 & 0xfff))) {
    *(uint *)(&DAT_a0000d00 + iVar1) =
         *(uint *)(&DAT_a0000d00 + iVar1) & 0x1fffffff |
         ((int)(param_1[1] << 3) >> 0x1f) * -0x20000000 & 0x3fffffffU |
         ((param_1[1] & 0xf) >> 2) << 0x1e;
    *(uint *)(&DAT_a0000cfc + iVar1) = *(uint *)(&DAT_a0000cfc + iVar1) & 0x7ffffff | 0x38000000;
    uVar3 = param_1[3];
    *(undefined4 *)(&DAT_a0000d04 + iVar1) = param_1[2];
    *(undefined4 *)(&DAT_a0000d08 + iVar1) = uVar3;
    uVar2 = DAT_a0000cf8 + 1 & 0xfff;
    if ((DAT_a0000cf4 & 0xfff) != uVar2) {
      DAT_a0000cf8 = uVar2;
    }
  }
  while( true ) {
    iVar1 = (DAT_a00004dc & 0x3f) * 0x10;
    if ((DAT_a00004dc & 0x3f) == (DAT_a00004e0 & 0x3f)) {
      iVar1 = FUN_1d014514(param_1);
      if (iVar1 == 0) {
        uVar2 = (DAT_a00004e0 & 0x3f) + 1 & 0x3f;
        if ((DAT_a00004dc & 0x3f) == uVar2) {
          DAT_a00004e4 = DAT_a00004e4 + 1;
        }
        else {
          iVar1 = (DAT_a00004e0 & 0x3f) * 0x10;
          uVar5 = param_1[1];
          uVar4 = param_1[2];
          uVar3 = param_1[3];
          *(undefined4 *)(&DAT_a00004e8 + iVar1) = *param_1;
          *(undefined4 *)(&DAT_a00004ec + iVar1) = uVar5;
          *(undefined4 *)(&DAT_a00004f0 + iVar1) = uVar4;
          *(undefined4 *)(&DAT_a00004f4 + iVar1) = uVar3;
          iVar1 = 1;
          DAT_a00004e0 = uVar2;
        }
      }
      return iVar1;
    }
    local_20 = *(undefined4 *)(&DAT_a00004e8 + iVar1);
    local_1c = *(undefined4 *)(&DAT_a00004ec + iVar1);
    local_18 = *(undefined4 *)(&DAT_a00004f0 + iVar1);
    local_14 = *(undefined4 *)(&DAT_a00004f4 + iVar1);
    iVar1 = FUN_1d014514(&local_20);
    if (iVar1 == 0) break;
    if ((DAT_a00004dc & 0x3f) != (DAT_a00004e0 & 0x3f)) {
      DAT_a00004dc = (DAT_a00004dc & 0x3f) + 1 & 0x3f;
    }
  }
  uVar2 = (DAT_a00004e0 & 0x3f) + 1 & 0x3f;
  if ((DAT_a00004dc & 0x3f) != uVar2) {
    iVar1 = (DAT_a00004e0 & 0x3f) * 0x10;
    uVar5 = param_1[1];
    uVar4 = param_1[2];
    uVar3 = param_1[3];
    *(undefined4 *)(&DAT_a00004e8 + iVar1) = *param_1;
    *(undefined4 *)(&DAT_a00004ec + iVar1) = uVar5;
    *(undefined4 *)(&DAT_a00004f0 + iVar1) = uVar4;
    *(undefined4 *)(&DAT_a00004f4 + iVar1) = uVar3;
    DAT_a00004e0 = uVar2;
    return 1;
  }
  DAT_a00004e4 = DAT_a00004e4 + 1;
  return 0;
}



void can0_send_message(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (((DAT_a00000b4 & 2) != 0) &&
     (iVar1 = (DAT_a0000cf8 & 0xfff) * 0x10,
     (DAT_a0000cf4 & 0xfff) != ((DAT_a0000cf8 & 0xfff) + 1 & 0xfff))) {
    *(uint *)(&DAT_a0000d00 + iVar1) =
         *(uint *)(&DAT_a0000d00 + iVar1) & 0x1fffffff |
         ((int)(*(uint *)(param_1 + 4) << 3) >> 0x1f) * -0x20000000 & 0x3fffffffU |
         ((*(uint *)(param_1 + 4) & 0xf) >> 2) << 0x1e;
    *(uint *)(&DAT_a0000cfc + iVar1) = *(uint *)(&DAT_a0000cfc + iVar1) & 0x7ffffff | 0x8000000;
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(&DAT_a0000d04 + iVar1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(&DAT_a0000d08 + iVar1) = uVar3;
    uVar2 = DAT_a0000cf8 + 1 & 0xfff;
    if ((DAT_a0000cf4 & 0xfff) != uVar2) {
      DAT_a0000cf8 = uVar2;
    }
  }
  can_tx_01();
  return;
}



void can1_send_message(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (((DAT_a00000b4 & 8) != 0) &&
     (iVar1 = (DAT_a0000cf8 & 0xfff) * 0x10,
     (DAT_a0000cf4 & 0xfff) != ((DAT_a0000cf8 & 0xfff) + 1 & 0xfff))) {
    *(uint *)(&DAT_a0000d00 + iVar1) =
         *(uint *)(&DAT_a0000d00 + iVar1) & 0x1fffffff |
         ((int)(*(uint *)(param_1 + 4) << 3) >> 0x1f) * -0x20000000 & 0x3fffffffU |
         ((*(uint *)(param_1 + 4) & 0xf) >> 2) << 0x1e;
    *(uint *)(&DAT_a0000cfc + iVar1) = *(uint *)(&DAT_a0000cfc + iVar1) & 0x7ffffff | 0x18000000;
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(&DAT_a0000d04 + iVar1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(&DAT_a0000d08 + iVar1) = uVar3;
    uVar2 = DAT_a0000cf8 + 1 & 0xfff;
    if ((DAT_a0000cf4 & 0xfff) != uVar2) {
      DAT_a0000cf8 = uVar2;
    }
  }
  can_tx_11();
  return;
}



uint can0_load_message(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = can_rx_00(param_1,(uint)((uint)(DAT_a00000b8 - DAT_a0000018) < 2000));
  if (uVar1 != 0) {
    if (((DAT_a00000b4 & 1) != 0) &&
       (iVar2 = (DAT_a0000cf8 & 0xfff) * 0x10,
       (DAT_a0000cf4 & 0xfff) != ((DAT_a0000cf8 & 0xfff) + 1 & 0xfff))) {
      *(uint *)(&DAT_a0000d00 + iVar2) =
           *(uint *)(&DAT_a0000d00 + iVar2) & 0x1fffffff |
           ((int)(*(uint *)(param_1 + 4) << 3) >> 0x1f) * -0x20000000 & 0x3fffffffU |
           ((*(uint *)(param_1 + 4) & 0xf) >> 2) << 0x1e;
      *(uint *)(&DAT_a0000cfc + iVar2) = *(uint *)(&DAT_a0000cfc + iVar2) & 0x7ffffff;
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(&DAT_a0000d04 + iVar2) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(&DAT_a0000d08 + iVar2) = uVar3;
      uVar1 = DAT_a0000cf8 + 1 & 0xfff;
      if ((DAT_a0000cf4 & 0xfff) != uVar1) {
        DAT_a0000cf8 = uVar1;
      }
    }
    uVar1 = (uint)((*(uint *)(param_1 + 4) & 0xf) < 0xf);
  }
  return uVar1;
}



uint can1_load_message(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = can_rx_10(param_1,(uint)((uint)(DAT_a00000b8 - DAT_a0000018) < 2000));
  if (uVar1 != 0) {
    if (((DAT_a00000b4 & 4) != 0) &&
       (iVar2 = (DAT_a0000cf8 & 0xfff) * 0x10,
       (DAT_a0000cf4 & 0xfff) != ((DAT_a0000cf8 & 0xfff) + 1 & 0xfff))) {
      *(uint *)(&DAT_a0000d00 + iVar2) =
           *(uint *)(&DAT_a0000d00 + iVar2) & 0x1fffffff |
           ((param_1[1] << 3) >> 0x1f) * -0x20000000 & 0x3fffffffU |
           ((param_1[1] & 0xfU) >> 2) << 0x1e;
      *(uint *)(&DAT_a0000cfc + iVar2) = *(uint *)(&DAT_a0000cfc + iVar2) & 0x7ffffff | 0x10000000;
      iVar3 = param_1[3];
      *(int *)(&DAT_a0000d04 + iVar2) = param_1[2];
      *(int *)(&DAT_a0000d08 + iVar2) = iVar3;
      uVar1 = DAT_a0000cf8 + 1 & 0xfff;
      if ((DAT_a0000cf4 & 0xfff) != uVar1) {
        DAT_a0000cf8 = uVar1;
      }
    }
    uVar1 = (uint)((param_1[1] & 0xfU) < 0xf);
  }
  return uVar1;
}



uint FUN_1d013144(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1d0142f0(param_1,(uint)((uint)(DAT_a00000b8 - DAT_a0000018) < 2000));
  if (uVar1 != 0) {
    if (((DAT_a00000b4 & 0x10) != 0) &&
       (iVar2 = (DAT_a0000cf8 & 0xfff) * 0x10,
       (DAT_a0000cf4 & 0xfff) != ((DAT_a0000cf8 & 0xfff) + 1 & 0xfff))) {
      *(uint *)(&DAT_a0000d00 + iVar2) =
           *(uint *)(&DAT_a0000d00 + iVar2) & 0x1fffffff |
           ((int)(*(uint *)(param_1 + 4) << 3) >> 0x1f) * -0x20000000 & 0x3fffffffU |
           ((*(uint *)(param_1 + 4) & 0xf) >> 2) << 0x1e;
      *(uint *)(&DAT_a0000cfc + iVar2) = *(uint *)(&DAT_a0000cfc + iVar2) & 0x7ffffff | 0x20000000;
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(&DAT_a0000d04 + iVar2) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(&DAT_a0000d08 + iVar2) = uVar3;
      uVar1 = DAT_a0000cf8 + 1 & 0xfff;
      if ((DAT_a0000cf4 & 0xfff) != uVar1) {
        DAT_a0000cf8 = uVar1;
      }
    }
    uVar1 = (uint)((*(uint *)(param_1 + 4) & 0xf) < 0xf);
  }
  return uVar1;
}



uint FUN_1d01327c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1d0145c8(param_1,(uint)((uint)(DAT_a00000b8 - DAT_a0000018) < 2000));
  if (uVar1 != 0) {
    if (((DAT_a00000b4 & 0x40) != 0) &&
       (iVar2 = (DAT_a0000cf8 & 0xfff) * 0x10,
       (DAT_a0000cf4 & 0xfff) != ((DAT_a0000cf8 & 0xfff) + 1 & 0xfff))) {
      *(uint *)(&DAT_a0000d00 + iVar2) =
           *(uint *)(&DAT_a0000d00 + iVar2) & 0x1fffffff |
           ((int)(*(uint *)(param_1 + 4) << 3) >> 0x1f) * -0x20000000 & 0x3fffffffU |
           ((*(uint *)(param_1 + 4) & 0xf) >> 2) << 0x1e;
      *(uint *)(&DAT_a0000cfc + iVar2) = *(uint *)(&DAT_a0000cfc + iVar2) & 0x7ffffff | 0x30000000;
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(&DAT_a0000d04 + iVar2) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(&DAT_a0000d08 + iVar2) = uVar3;
      uVar1 = DAT_a0000cf8 + 1 & 0xfff;
      if ((DAT_a0000cf4 & 0xfff) != uVar1) {
        DAT_a0000cf8 = uVar1;
      }
    }
    uVar1 = (uint)((*(uint *)(param_1 + 4) & 0xf) < 0xf);
  }
  return uVar1;
}



void FUN_1d0133b4(void)

{
  if (1999 < (uint)((DAT_a00000b8 + 1) - DAT_a0000018)) {
    DAT_a00000b4 = 0;
    DAT_a0000cf4 = 0;
    DAT_a0000cf8 = 0;
    DAT_a0000018 = DAT_a00000b8 + -19999;
  }
  DAT_a00000b8 = DAT_a00000b8 + 1;
  return;
}



void FUN_1d0133f4(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  while (iVar1 = (DAT_a00008e8 & 0x3f) * 0x10, (DAT_a00008e8 & 0x3f) != (DAT_a00008ec & 0x3f)) {
    local_18 = *(undefined4 *)(&DAT_a00008f4 + iVar1);
    local_14 = *(undefined4 *)(&DAT_a00008f8 + iVar1);
    local_10 = *(undefined4 *)(&DAT_a00008fc + iVar1);
    local_c = *(undefined4 *)(&DAT_a0000900 + iVar1);
    iVar1 = FUN_1d01423c(&local_18);
    if (iVar1 == 0) break;
    if ((DAT_a00008e8 & 0x3f) != (DAT_a00008ec & 0x3f)) {
      DAT_a00008e8 = (DAT_a00008e8 & 0x3f) + 1 & 0x3f;
    }
  }
  while( true ) {
    iVar1 = (DAT_a00004dc & 0x3f) * 0x10;
    if ((DAT_a00004dc & 0x3f) == (DAT_a00004e0 & 0x3f)) {
      return;
    }
    local_18 = *(undefined4 *)(&DAT_a00004e8 + iVar1);
    local_14 = *(undefined4 *)(&DAT_a00004ec + iVar1);
    local_10 = *(undefined4 *)(&DAT_a00004f0 + iVar1);
    local_c = *(undefined4 *)(&DAT_a00004f4 + iVar1);
    iVar1 = FUN_1d014514(&local_18);
    if (iVar1 == 0) break;
    if ((DAT_a00004dc & 0x3f) != (DAT_a00004e0 & 0x3f)) {
      DAT_a00004dc = (DAT_a00004dc & 0x3f) + 1 & 0x3f;
    }
  }
  return;
}



undefined4 FUN_1d013510(char *param_1,char *param_2)

{
  undefined4 uVar1;
  
  FUN_1d018b2c(param_2,0,0x40);
  *param_2 = *param_1;
  if (*param_1 == '\0') {
    *(undefined2 *)(param_2 + 2) = 2;
    *(undefined2 *)(param_2 + 4) = 0;
    *(undefined2 *)(param_2 + 6) = 7;
    param_2[8] = '\0';
    param_2[9] = '\x03';
    FUN_1d018f60(param_2 + 0x10,0x9d019880,0x30);
    uVar1 = 0x40;
  }
  else {
    uVar1 = 0;
    if (*param_1 == '\x01') {
      uVar1 = FUN_1d01906c();
    }
  }
  return uVar1;
}



void FUN_1d0135b4(byte *param_1)

{
  if (*param_1 != 0) {
    DAT_a0000018 = DAT_a00000b8;
  }
  DAT_a00000b4 = (uint)*param_1;
  return;
}



undefined4 FUN_1d0135d0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = DAT_a0000cf4 & 0xfff;
  if (uVar1 == (DAT_a0000cf8 & 0xfff)) {
    return 0;
  }
  iVar2 = uVar1 * 0x10;
  if (param_1 != (uint *)0x0) {
    uVar5 = *(uint *)(&DAT_a0000d00 + iVar2);
    uVar4 = *(uint *)(&DAT_a0000d04 + iVar2);
    uVar3 = *(uint *)(&DAT_a0000d08 + iVar2);
    *param_1 = *(uint *)(&DAT_a0000cfc + iVar2);
    param_1[1] = uVar5;
    param_1[2] = uVar4;
    param_1[3] = uVar3;
  }
  DAT_a0000cf4 = uVar1 + 1 & 0xfff;
  *param_1 = *param_1 ^ 0xd31cf166;
  param_1[1] = param_1[1] ^ 0x43a36258;
  param_1[2] = param_1[2] ^ 0xacdaa11c;
  param_1[3] = param_1[3] ^ 0xa4876c6a;
  uVar1 = DAT_a0000cf4 & 0xfff;
  uVar3 = DAT_a0000cf8 & 0xfff;
  if (uVar1 == uVar3) {
    return 0x10;
  }
  iVar2 = uVar1 * 0x10;
  if (param_1 != (uint *)0xfffffff0) {
    uVar6 = *(uint *)(&DAT_a0000d00 + iVar2);
    uVar5 = *(uint *)(&DAT_a0000d04 + iVar2);
    uVar4 = *(uint *)(&DAT_a0000d08 + iVar2);
    param_1[4] = *(uint *)(&DAT_a0000cfc + iVar2);
    param_1[5] = uVar6;
    param_1[6] = uVar5;
    param_1[7] = uVar4;
  }
  DAT_a0000cf4 = uVar1 + 1 & 0xfff;
  param_1[4] = param_1[4] ^ 0xecb3671d;
  param_1[5] = param_1[5] ^ 0x8f53eabc;
  param_1[6] = param_1[6] ^ 0x9d8e2cae;
  uVar1 = uVar1 + 1 & 0xfff;
  param_1[7] = param_1[7] ^ 0x235ecd98;
  if (uVar3 == uVar1) {
    return 0x20;
  }
  iVar2 = uVar1 * 0x10;
  if (param_1 != (uint *)0xffffffe0) {
    uVar6 = *(uint *)(&DAT_a0000d00 + iVar2);
    uVar5 = *(uint *)(&DAT_a0000d04 + iVar2);
    uVar4 = *(uint *)(&DAT_a0000d08 + iVar2);
    param_1[8] = *(uint *)(&DAT_a0000cfc + iVar2);
    param_1[9] = uVar6;
    param_1[10] = uVar5;
    param_1[0xb] = uVar4;
  }
  DAT_a0000cf4 = uVar1 + 1 & 0xfff;
  param_1[8] = param_1[8] ^ 0x576233dc;
  param_1[9] = param_1[9] ^ 0x2c28114a;
  param_1[10] = param_1[10] ^ 0x65ad4697;
  uVar1 = uVar1 + 1 & 0xfff;
  param_1[0xb] = param_1[0xb] ^ 0x82b5f467;
  if (uVar3 != uVar1) {
    iVar2 = uVar1 * 0x10;
    if (param_1 != (uint *)0xffffffd0) {
      uVar5 = *(uint *)(&DAT_a0000d00 + iVar2);
      uVar4 = *(uint *)(&DAT_a0000d04 + iVar2);
      uVar3 = *(uint *)(&DAT_a0000d08 + iVar2);
      param_1[0xc] = *(uint *)(&DAT_a0000cfc + iVar2);
      param_1[0xd] = uVar5;
      param_1[0xe] = uVar4;
      param_1[0xf] = uVar3;
    }
    DAT_a0000cf4 = uVar1 + 1 & 0xfff;
    param_1[0xc] = param_1[0xc] ^ 0xfcf36b28;
    param_1[0xd] = param_1[0xd] ^ 0xe54e26a1;
    param_1[0xe] = param_1[0xe] ^ 0xba81ecb7;
    param_1[0xf] = param_1[0xf] ^ 0xc18daef1;
    return 0x40;
  }
  return 0x30;
}



void FUN_1d01389c(int param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_1d0194f0(0,1);
  FUN_1d019714(0,4);
  do {
    iVar1 = FUN_1d0197a8(0);
  } while (iVar1 != 4);
  if (param_1 == 0) {
    FUN_1d0194f0(0,0);
  }
  else {
    local_24 = 2;
    local_28 = 2;
    local_20 = 2;
    local_18 = 1;
    local_14 = 1;
    local_1c = 1;
    FUN_1d0188b8(0,&local_28,40000000,param_1);
    FUN_1d019760(0,0xa001153c,0x840);
    FUN_1d0191c0(0,0,0x40,1);
    FUN_1d018c7c(0,1,0x40,1,1);
    FUN_1d018c7c(0,2,4,1,3);
    FUN_1d018a74(0,0,0,1,1);
    FUN_1d018ed8(0,0,0,1);
    FUN_1d019220(0,0,0,0);
    FUN_1d019158(0,0,1);
    FUN_1d019568(0,3,1);
    FUN_1d019568(0,0x808,0);
    FUN_1d019714(0,0);
    do {
      iVar1 = FUN_1d0197a8(0);
    } while (iVar1 != 0);
  }
  return;
}



void FUN_1d013a24(void)

{
  int iVar1;
  
  FUN_1d0194f0(0,1);
  FUN_1d019714(0,4);
  do {
    iVar1 = FUN_1d0197a8(0);
  } while (iVar1 != 4);
  FUN_1d0194f0(0,0);
  return;
}



undefined4 can_tx_01(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)can_tx_fifo_ua(0,1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = param_1[1];
    uVar3 = param_1[2];
    uVar2 = param_1[3];
    *puVar1 = *param_1;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[3] = uVar2;
    can_fifo_uinc(0,1);
    can_tx_req(0,1);
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 can_tx_02(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)can_tx_fifo_ua(0,2);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = param_1[1];
    uVar3 = param_1[2];
    uVar2 = param_1[3];
    *puVar1 = *param_1;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[3] = uVar2;
    can_fifo_uinc(0,2);
    can_tx_req(0,2);
    uVar2 = 1;
  }
  return uVar2;
}



uint can_rx_00(undefined4 *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  
  puVar3 = (undefined4 *)can_rx_fifo_ua(0,0);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
    if (param_2 != 0) {
      uVar5 = FUN_1d0197c8(0);
      uVar6 = FUN_1d0197e8(0);
      bVar1 = DAT_a0000068 < uVar6;
      uVar4 = (uint)bVar1;
      cVar2 = (char)uVar6;
      cVar10 = (char)uVar5;
      if (DAT_a000006c < uVar5) {
        FUN_1d018b2c(param_1,0,0x10);
        param_1[1] = 0xf;
        *(char *)(param_1 + 2) = cVar10;
        *(char *)((int)param_1 + 9) = cVar2;
        *(char *)((int)param_1 + 10) = cVar10 - (char)DAT_a000006c;
        uVar4 = 1;
      }
      else {
        if (!bVar1) {
          DAT_a0000068 = uVar6;
          DAT_a000006c = uVar5;
          return uVar4;
        }
        FUN_1d018b2c(param_1,0,0x10);
        param_1[1] = 0xf;
        *(char *)(param_1 + 2) = cVar10;
        *(char *)((int)param_1 + 9) = cVar2;
      }
      DAT_a0000068 = uVar6;
      DAT_a000006c = uVar5;
      if (bVar1) {
        *(char *)((int)param_1 + 0xb) = cVar2 - (char)DAT_a0000068;
      }
    }
  }
  else {
    uVar8 = puVar3[1];
    uVar7 = puVar3[2];
    uVar9 = puVar3[3];
    *param_1 = *puVar3;
    param_1[1] = uVar8;
    param_1[2] = uVar7;
    param_1[3] = uVar9;
    can_fifo_uinc(0,0);
    uVar4 = 1;
  }
  return uVar4;
}



uint FUN_1d013d0c(void)

{
  uint uVar1;
  
  uVar1 = FUN_1d0197e8(0);
  return uVar1 & 0xff;
}



uint FUN_1d013d2c(void)

{
  uint uVar1;
  
  uVar1 = FUN_1d0197c8(0);
  return uVar1 & 0xff;
}



void FUN_1d013d4c(int param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_1d0194f0(1,1);
  FUN_1d019714(1,4);
  do {
    iVar1 = FUN_1d0197a8(1);
  } while (iVar1 != 4);
  if (param_1 == 0) {
    FUN_1d0194f0(1,0);
  }
  else {
    local_24 = 2;
    local_28 = 2;
    local_20 = 2;
    local_18 = 1;
    local_14 = 1;
    local_1c = 1;
    FUN_1d0188b8(1,&local_28,40000000,param_1);
    FUN_1d019760(1,0xa0010cfc,0x840);
    FUN_1d0191c0(1,0,0x40,1);
    FUN_1d018c7c(1,1,0x40,1,1);
    FUN_1d018c7c(1,2,4,1,3);
    FUN_1d018a74(1,0,0,1,1);
    FUN_1d018ed8(1,0,0,1);
    FUN_1d019220(1,0,0,0);
    FUN_1d019158(1,0,1);
    FUN_1d019568(1,3,1);
    FUN_1d019568(1,0x808,0);
    FUN_1d019714(1,0);
    do {
      iVar1 = FUN_1d0197a8(1);
    } while (iVar1 != 0);
  }
  return;
}



void FUN_1d013ed4(void)

{
  int iVar1;
  
  FUN_1d0194f0(1,1);
  FUN_1d019714(1,4);
  do {
    iVar1 = FUN_1d0197a8(1);
  } while (iVar1 != 4);
  FUN_1d0194f0(1,0);
  return;
}



undefined4 can_tx_11(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)can_tx_fifo_ua(1,1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = param_1[1];
    uVar3 = param_1[2];
    uVar2 = param_1[3];
    *puVar1 = *param_1;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[3] = uVar2;
    can_fifo_uinc(1,1);
    can_tx_req(1,1);
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 can_tx_12(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)can_tx_fifo_ua(1,2);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = param_1[1];
    uVar3 = param_1[2];
    uVar2 = param_1[3];
    *puVar1 = *param_1;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[3] = uVar2;
    can_fifo_uinc(1,2);
    can_tx_req(1,2);
    uVar2 = 1;
  }
  return uVar2;
}



uint can_rx_10(undefined4 *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  
  puVar3 = (undefined4 *)can_rx_fifo_ua(1,0);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
    if (param_2 != 0) {
      uVar5 = FUN_1d0197c8(1);
      uVar6 = FUN_1d0197e8(1);
      bVar1 = DAT_a0000060 < uVar6;
      uVar4 = (uint)bVar1;
      cVar2 = (char)uVar6;
      cVar10 = (char)uVar5;
      if (DAT_a0000064 < uVar5) {
        FUN_1d018b2c(param_1,0,0x10);
        param_1[1] = 0xf;
        *(char *)(param_1 + 2) = cVar10;
        *(char *)((int)param_1 + 9) = cVar2;
        *(char *)((int)param_1 + 10) = cVar10 - (char)DAT_a0000064;
        uVar4 = 1;
      }
      else {
        if (!bVar1) {
          DAT_a0000060 = uVar6;
          DAT_a0000064 = uVar5;
          return uVar4;
        }
        FUN_1d018b2c(param_1,0,0x10);
        param_1[1] = 0xf;
        *(char *)(param_1 + 2) = cVar10;
        *(char *)((int)param_1 + 9) = cVar2;
      }
      DAT_a0000060 = uVar6;
      DAT_a0000064 = uVar5;
      if (bVar1) {
        *(char *)((int)param_1 + 0xb) = cVar2 - (char)DAT_a0000060;
      }
    }
  }
  else {
    uVar8 = puVar3[1];
    uVar7 = puVar3[2];
    uVar9 = puVar3[3];
    *param_1 = *puVar3;
    param_1[1] = uVar8;
    param_1[2] = uVar7;
    param_1[3] = uVar9;
    can_fifo_uinc(1,0);
    uVar4 = 1;
  }
  return uVar4;
}



uint FUN_1d0141bc(void)

{
  uint uVar1;
  
  uVar1 = FUN_1d0197e8(1);
  return uVar1 & 0xff;
}



uint FUN_1d0141dc(void)

{
  uint uVar1;
  
  uVar1 = FUN_1d0197c8(1);
  return uVar1 & 0xff;
}



void FUN_1d0141fc(undefined4 param_1)

{
  FUN_1d010e08(3,param_1);
  return;
}



undefined4 FUN_1d01421c(void)

{
  FUN_1d00fe84(3);
  return 1;
}



int FUN_1d01423c(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_1d00f708(3);
  if (iVar2 != 0) {
    uVar3 = FUN_1d00fc50(3);
    if ((uVar3 & 4) == 0) {
      iVar1 = -((int)(param_1[1] << 3) >> 0x1f);
      if (iVar1 == 0) {
        uVar3 = *param_1 & 0x7ff;
      }
      else {
        uVar3 = (*param_1 & 0x7ff) << 0x12 | (param_1[1] << 4) >> 0xe;
      }
      FUN_1d0105f8(3,0,uVar3,iVar1,param_1 + 2,param_1[1] & 0xf);
      FUN_1d010268(3,0);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



int FUN_1d0142f0(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte local_20 [4];
  byte local_1c;
  char local_1b [7];
  
  iVar2 = FUN_1d00f718(3);
  if ((iVar2 == 0) || (iVar3 = FUN_1d011100(3,local_20,local_1b,param_1 + 2,&local_1c), iVar3 == 0))
  {
    uVar4 = 0;
    if (param_2 != 0) {
      FUN_1d0110b4(3,&local_1c,local_20);
      uVar5 = (uint)local_1c;
      uVar6 = (uint)local_20[0];
      bVar1 = uVar6 <= DAT_a0000058;
      if (DAT_a000005c < uVar5) {
        FUN_1d018b2c(param_1,0,0x10);
        param_1[1] = 0xf;
        *(byte *)(param_1 + 2) = local_1c;
        *(byte *)((int)param_1 + 9) = local_20[0];
        *(char *)((int)param_1 + 10) = local_1c - (char)DAT_a000005c;
      }
      else {
        if (bVar1) {
          DAT_a0000058 = uVar6;
          DAT_a000005c = uVar5;
          return 0;
        }
        FUN_1d018b2c(param_1,0,0x10);
        param_1[1] = 0xf;
        *(byte *)(param_1 + 2) = local_1c;
        *(byte *)((int)param_1 + 9) = local_20[0];
      }
      if (!bVar1) {
        *(char *)((int)param_1 + 0xb) = local_20[0] - (char)DAT_a0000058;
      }
      uVar4 = 1;
      DAT_a0000058 = uVar6;
      DAT_a000005c = uVar5;
    }
    return uVar4;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (local_1c < 9) {
    param_1[1] = (uint)local_1c;
  }
  else {
    param_1[1] = 8;
  }
  if (local_1b[0] != '\0') {
    param_1[1] = param_1[1] & 0xfffffff | 0x10000000;
    *param_1 = *param_1;
    return iVar2;
  }
  param_1[1] = param_1[1] & 0xfffffff;
  *param_1 = *param_1;
  return iVar2;
}



void FUN_1d01449c(void)

{
  FUN_1d011064(3);
  return;
}



void FUN_1d0144b8(void)

{
  FUN_1d01108c(3);
  return;
}



void FUN_1d0144d4(undefined4 param_1)

{
  FUN_1d010e08(2,param_1);
  return;
}



undefined4 FUN_1d0144f4(void)

{
  FUN_1d00fe84(2);
  return 1;
}



int FUN_1d014514(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_1d00f708(2);
  if (iVar2 != 0) {
    uVar3 = FUN_1d00fc50(2);
    if ((uVar3 & 4) == 0) {
      iVar1 = -((int)(param_1[1] << 3) >> 0x1f);
      if (iVar1 == 0) {
        uVar3 = *param_1 & 0x7ff;
      }
      else {
        uVar3 = (*param_1 & 0x7ff) << 0x12 | (param_1[1] << 4) >> 0xe;
      }
      FUN_1d0105f8(2,0,uVar3,iVar1,param_1 + 2,param_1[1] & 0xf);
      FUN_1d010268(2,0);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



int FUN_1d0145c8(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte local_20 [4];
  byte local_1c;
  char local_1b [7];
  
  iVar2 = FUN_1d00f718(2);
  if ((iVar2 == 0) || (iVar3 = FUN_1d011100(2,local_20,local_1b,param_1 + 2,&local_1c), iVar3 == 0))
  {
    uVar4 = 0;
    if (param_2 != 0) {
      FUN_1d0110b4(2,&local_1c,local_20);
      uVar5 = (uint)local_1c;
      uVar6 = (uint)local_20[0];
      bVar1 = uVar6 <= DAT_a0000050;
      if (DAT_a0000054 < uVar5) {
        FUN_1d018b2c(param_1,0,0x10);
        param_1[1] = 0xf;
        *(byte *)(param_1 + 2) = local_1c;
        *(byte *)((int)param_1 + 9) = local_20[0];
        *(char *)((int)param_1 + 10) = local_1c - (char)DAT_a0000054;
      }
      else {
        if (bVar1) {
          DAT_a0000050 = uVar6;
          DAT_a0000054 = uVar5;
          return 0;
        }
        FUN_1d018b2c(param_1,0,0x10);
        param_1[1] = 0xf;
        *(byte *)(param_1 + 2) = local_1c;
        *(byte *)((int)param_1 + 9) = local_20[0];
      }
      if (!bVar1) {
        *(char *)((int)param_1 + 0xb) = local_20[0] - (char)DAT_a0000050;
      }
      uVar4 = 1;
      DAT_a0000050 = uVar6;
      DAT_a0000054 = uVar5;
    }
    return uVar4;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (local_1c < 9) {
    param_1[1] = (uint)local_1c;
  }
  else {
    param_1[1] = 8;
  }
  if (local_1b[0] != '\0') {
    param_1[1] = param_1[1] & 0xfffffff | 0x10000000;
    *param_1 = *param_1;
    return iVar2;
  }
  param_1[1] = param_1[1] & 0xfffffff;
  *param_1 = *param_1;
  return iVar2;
}



void FUN_1d014774(void)

{
  FUN_1d011064(2);
  return;
}



undefined4 FUN_1d014790(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = FUN_1d0141bc();
  }
  else {
    if (param_1 == 0) {
      uVar1 = FUN_1d013d0c();
    }
    else {
      if (param_1 == 2) {
        uVar1 = FUN_1d01449c();
      }
      else {
        if (param_1 == 3) {
          uVar1 = FUN_1d014774();
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



void FUN_1d014814(void)

{
  FUN_1d01108c(2);
  return;
}



undefined4 FUN_1d014830(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = FUN_1d0141dc();
  }
  else {
    if (param_1 == 0) {
      uVar1 = FUN_1d013d2c();
    }
    else {
      if (param_1 == 2) {
        uVar1 = FUN_1d0144b8();
      }
      else {
        if (param_1 == 3) {
          uVar1 = FUN_1d014814();
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



void FUN_1d0148b4(void)

{
  FUN_1d018b2c(&DAT_a0013398,0,0x48);
  DAT_a0000008 = 1;
  DAT_a000002c = 0;
  DAT_a0000030 = 0;
  DAT_a0000034 = 0;
  DAT_a0000038 = 0;
  DAT_a000003c = 0;
  DAT_a0000040 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d0148fc(void)

{
  int iVar1;
  
  if (((((_DAT_a001339c != 0) && (_DAT_a001339c = _DAT_a001339c + -1, _DAT_a001339c == 0)) &&
       (DAT_a0013398 != '\0')) && (DAT_a00133a1 != '\0')) &&
     ((((DAT_a0000038 != 0 && (DAT_a0000034 != '\x01')) ||
       ((DAT_a0000040 != 0 && (DAT_a000003c != 0)))) && (DAT_a0013399 = 1, DAT_a0000030 == 0)))) {
    DAT_a0000030 = 1;
    DAT_a000002c = 6;
  }
  iVar1 = _DAT_a00133a4 + -1;
  if (((_DAT_a00133a4 != 0) && (_DAT_a00133a4 = iVar1, iVar1 == 0)) &&
     ((DAT_a0013398 != '\0' &&
      (((DAT_a0000038 != 0 && (DAT_a0000034 != '\x01')) ||
       ((DAT_a0000040 != 0 && (DAT_a000003c != 0)))))))) {
    DAT_a0013399 = 1;
    DAT_a0000008 = 0;
    if (DAT_a0000030 == 0) {
      DAT_a0000030 = 1;
      DAT_a000002c = 7;
    }
  }
  if ((((((_DAT_a00133b4 != 0) && (_DAT_a00133b4 = _DAT_a00133b4 + -1, _DAT_a00133b4 == 0)) &&
        (DAT_a00133b0 != '\0')) && (DAT_a00133b9 != '\0')) &&
      (((DAT_a0000038 != 0 && (DAT_a0000034 != '\x01')) ||
       ((DAT_a0000040 != 0 && (DAT_a000003c != 0)))))) && (DAT_a00133b1 = 1, DAT_a0000030 == 0)) {
    DAT_a0000030 = 1;
    DAT_a000002c = 10;
  }
  iVar1 = _DAT_a00133bc + -1;
  if ((((_DAT_a00133bc != 0) && (_DAT_a00133bc = iVar1, iVar1 == 0)) && (DAT_a00133b0 != '\0')) &&
     (((DAT_a0000038 != 0 && (DAT_a0000034 != '\x01')) ||
      ((DAT_a0000040 != 0 && (DAT_a000003c != 0)))))) {
    DAT_a00133b1 = 1;
    DAT_a0000008 = 0;
    if (DAT_a0000030 == 0) {
      DAT_a0000030 = 1;
      DAT_a000002c = 0xb;
    }
  }
  if (((((_DATASPEED_MSG_SID != 0) &&
        (_DATASPEED_MSG_SID = _DATASPEED_MSG_SID + -1, _DATASPEED_MSG_SID == 0)) &&
       (DAT_a00133c8 != '\0')) && (DAT_a00133d1 != '\0')) &&
     (((DAT_a0000038 != 0 && (DAT_a0000034 != '\x01')) ||
      ((DAT_a0000040 != 0 && (DAT_a000003c != 0)))))) {
    DAT_a00133c9 = 1;
    DAT_a0000008 = 0;
    if (DAT_a0000030 == 0) {
      DAT_a0000030 = 1;
      DAT_a000002c = 0xe;
    }
  }
  iVar1 = _DAT_a00133d4 + -1;
  if (((_DAT_a00133d4 == 0) || (_DAT_a00133d4 = iVar1, iVar1 != 0)) || (DAT_a00133c8 == '\0')) {
LAB_1d014be8:
    if (DAT_a0000040 == 0) goto LAB_1d014bf8;
  }
  else {
    if ((DAT_a0000038 != 0) && (DAT_a0000034 != '\x01')) {
LAB_1d014ca0:
      DAT_a00133c9 = 1;
      DAT_a0000008 = 0;
      if (DAT_a0000030 == 0) {
        DAT_a0000030 = 1;
        DAT_a000002c = 0xf;
      }
      goto LAB_1d014be8;
    }
    if (DAT_a0000040 == 0) goto LAB_1d014bf8;
    if (DAT_a000003c != 0) goto LAB_1d014ca0;
  }
  DAT_a0000040 = DAT_a0000040 + -1;
LAB_1d014bf8:
  if (DAT_a0000038 == 0) {
    return;
  }
  DAT_a0000038 = DAT_a0000038 + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d014ea0(int *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 7);
  if (cVar1 == '\0') {
    if (DAT_a00133c8 == '\0') {
      _DATASPEED_MSG_SID = 100;
      return;
    }
  }
  else {
    if (DAT_a00133c8 == '\0') {
      DAT_a00133c8 = '\x01';
      goto LAB_1d014f5c;
    }
  }
  if ((2 < (byte)((cVar1 + -1) - DAT_a00133d0)) &&
     (((DAT_a0000038 != 0 && (DAT_a0000034 != '\x01')) ||
      ((DAT_a0000040 != 0 && (DAT_a000003c != 0)))))) {
    if (DAT_a0000030 == 0) {
      DAT_a0000008 = 0;
      DAT_a000002c = 0xc;
      DAT_a0000030 = 1;
      DAT_a00133c9 = 1;
      _DATASPEED_MSG_SID = 100;
      return;
    }
    DAT_a0000008 = 0;
    DAT_a00133c9 = 1;
    _DATASPEED_MSG_SID = 100;
    return;
  }
LAB_1d014f5c:
  _DATASPEED_MSG_SID = 100;
  DAT_a00133d0 = cVar1;
  DAT_a00133d1 = (byte)((uint)(*param_1 << 0xf) >> 0x1f);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d014f8c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (_DAT_a00133a4 != 0) {
    if (((int)(uVar1 << 4) < 0) && (DAT_a00133ab == '\0')) {
      DAT_a0013399 = 1;
      if (DAT_a0000030 == 0) {
        DAT_a0000030 = 1;
        DAT_a000002c = 1;
      }
    }
    else {
      if ((((DAT_a0013398 != '\0') &&
           ((((DAT_a00133a8 != '\0' && (-1 < (int)(uVar1 << 7))) && (-1 < (int)(uVar1 << 6))) &&
            ((DAT_a00133a9 == '\0' && (DAT_a00133c1 == '\0')))))) && (DAT_a00133d9 == '\0')) &&
         ((((DAT_a0000038 != 0 && (DAT_a0000034 != '\x01')) ||
           ((DAT_a0000040 != 0 && (DAT_a000003c != 0)))) &&
          ((iVar2 = FUN_1d019754(), iVar2 == 0 && (DAT_a0013399 = 1, DAT_a0000030 == 0)))))) {
        DAT_a0000030 = 1;
        DAT_a000002c = 5;
      }
    }
  }
  if (((int)(uVar1 << 5) < 0) && (DAT_a0000030 == 1)) {
    DAT_a0000030 = 2;
  }
  _DAT_a00133a4 = 100;
  DAT_a00133a8 = (byte)((uVar1 << 7) >> 0x1f);
  DAT_a00133a9 = (byte)((uVar1 << 6) >> 0x1f);
  DAT_a00133aa = (byte)((uVar1 << 5) >> 0x1f);
  DAT_a00133ab = (byte)((uVar1 << 4) >> 0x1f);
  DAT_a00133ac = (uVar1 & 0x70000000) != 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d01513c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (_DAT_a00133bc != 0) {
    if (((int)(uVar1 << 4) < 0) && (DAT_a00133c3 == '\0')) {
      DAT_a00133b1 = 1;
      if (DAT_a0000030 == 0) {
        DAT_a0000030 = 1;
        DAT_a000002c = 2;
      }
    }
    else {
      if ((((DAT_a00133b0 != '\0') &&
           ((((DAT_a00133c0 != '\0' && (-1 < (int)(uVar1 << 7))) && (-1 < (int)(uVar1 << 6))) &&
            ((DAT_a00133a9 == '\0' && (DAT_a00133c1 == '\0')))))) && (DAT_a00133d9 == '\0')) &&
         ((((DAT_a0000038 != 0 && (DAT_a0000034 != '\x01')) ||
           ((DAT_a0000040 != 0 && (DAT_a000003c != 0)))) &&
          ((iVar2 = FUN_1d019754(), iVar2 == 0 && (DAT_a00133b1 = 1, DAT_a0000030 == 0)))))) {
        DAT_a0000030 = 1;
        DAT_a000002c = 9;
      }
    }
  }
  if (((int)(uVar1 << 5) < 0) && (DAT_a0000030 == 1)) {
    DAT_a0000030 = 2;
  }
  _DAT_a00133bc = 100;
  DAT_a00133c0 = (byte)((uVar1 << 7) >> 0x1f);
  DAT_a00133c1 = (byte)((uVar1 << 6) >> 0x1f);
  DAT_a00133c2 = (byte)((uVar1 << 5) >> 0x1f);
  DAT_a00133c3 = (byte)((uVar1 << 4) >> 0x1f);
  DAT_a00133c4 = (uVar1 & 0x70000000) != 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d0152f0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  DAT_a000003c = (uint)*(ushort *)(param_1 + 4);
  DAT_a0000040 = 100;
  uVar1 = *(uint *)(param_1 + 4);
  if (_DAT_a00133d4 != 0) {
    if (((int)(uVar1 << 4) < 0) && (DAT_a00133db == '\0')) {
      DAT_a00133c9 = 1;
      if (DAT_a0000030 == 0) {
        DAT_a0000030 = 1;
        DAT_a000002c = 3;
      }
    }
    else {
      if ((((DAT_a00133c8 != '\0') &&
           ((((DAT_a00133d8 != '\0' && (-1 < (int)(uVar1 << 7))) && (-1 < (int)(uVar1 << 6))) &&
            ((DAT_a00133a9 == '\0' && (DAT_a00133c1 == '\0')))))) &&
          ((DAT_a00133d9 == '\0' &&
           (((DAT_a0000038 != 0 && (DAT_a0000034 != '\x01')) || (*(ushort *)(param_1 + 4) != 0))))))
         && (iVar2 = FUN_1d019754(), iVar2 == 0)) {
        DAT_a00133c9 = 1;
        DAT_a0000008 = 0;
        if (DAT_a0000030 == 0) {
          DAT_a0000030 = 1;
          DAT_a000002c = 0xd;
        }
      }
    }
  }
  _DAT_a00133d4 = 100;
  DAT_a00133d8 = (byte)((uVar1 << 7) >> 0x1f);
  DAT_a00133d9 = (byte)((uVar1 << 6) >> 0x1f);
  DAT_a00133da = 0;
  DAT_a00133db = (byte)((uVar1 << 4) >> 0x1f);
  DAT_a00133dc = (uVar1 & 0x74000000) != 0;
  return;
}



void FUN_1d015488(ushort *param_1)

{
  DAT_a0000034 = (byte)(((uint)*param_1 << 0x1d) >> 0x1d);
  DAT_a0000038 = 100;
  return;
}



void FUN_1d0154a0(int param_1)

{
  if (((*(byte *)(param_1 + 4) & 4) != 0) && (DAT_a0000030 != 0)) {
    FUN_1d0148b4();
  }
  return;
}



undefined4 FUN_1d0154e0(void)

{
  return DAT_a0000030;
}



undefined4 FUN_1d0154e8(void)

{
  return DAT_a000002c;
}



uint FUN_1d0154f0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_a0000030 != 0) {
    uVar1 = (uint)(DAT_a0000028 == 0);
  }
  DAT_a0000028 = DAT_a0000030;
  return uVar1;
}



uint FUN_1d01550c(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_a0000008;
  if (DAT_a0000030 != 1) {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_1d015d7c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = FUN_1d0141dc();
  }
  else {
    if (param_1 == 0) {
      uVar1 = FUN_1d013d2c();
    }
    else {
      if (param_1 == 2) {
        uVar1 = FUN_1d0144b8();
      }
      else {
        if (param_1 == 3) {
          uVar1 = FUN_1d014814();
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



void init_peripherals(void)

{
  init_usb();
  init_external_interrupt();
  init_interrupts();
  return;
}



void do_something_before_rx_tx_loop(void)

{
  uint uVar1;
  
  if (DAT_a0000104 == 0x20) {
    if ((DAT_a0000088 == (byte *)0x0) || ((*DAT_a0000088 & 0x80) == 0)) {
      FUN_1d00d5b0(0xa00132c0,0xa0013280);
      FUN_1d00dca0(1,1,0xa0013280,0x40);
      DAT_a0000088 = (byte *)FUN_1d00dca0(1,0,0xa00132c0,0x40);
    }
    if (((DAT_a0000084 == (byte *)0x0) || ((*DAT_a0000084 & 0x80) == 0)) &&
       ((DAT_a0000080 == (byte *)0x0 || ((*DAT_a0000080 & 0x80) == 0)))) {
      uVar1 = FUN_1d013510(0xa0013240,0xa0013200);
      if (uVar1 != 0) {
        DAT_a0000080 = (byte *)FUN_1d00dca0(2,1,0xa0013200,uVar1 & 0xff);
      }
      DAT_a0000084 = (byte *)FUN_1d00dca0(2,0,0xa0013240,0x40);
    }
    if ((DAT_a000007c == (byte *)0x0) || ((*DAT_a000007c & 0x80) == 0)) {
      FUN_1d0135b4(0xa00131c0);
      DAT_a000007c = (byte *)FUN_1d00dca0(3,0,0xa00131c0,0x40);
    }
    if (((DAT_a0000078 == (byte *)0x0) || ((*DAT_a0000078 & 0x80) == 0)) &&
       (uVar1 = FUN_1d0135d0(0xa0013180), uVar1 != 0)) {
      DAT_a0000078 = (byte *)FUN_1d00dca0(3,1,0xa0013180,uVar1 & 0xff);
    }
  }
  return;
}



void FUN_1d015ff4(void)

{
  FUN_1d00dbcc(1,0x1d);
  DAT_a0000088 = FUN_1d00dca0(1,0,0xa00132c0,0x40);
  FUN_1d00dbcc(2,0x1d);
  DAT_a0000084 = FUN_1d00dca0(2,0,0xa0013240,0x40);
  FUN_1d00dbcc(3,0x1d);
  DAT_a000007c = FUN_1d00dca0(3,0,0xa00131c0,0x40);
  return;
}



void FUN_1d0160a0(void)

{
  FUN_1d017a20();
  return;
}



undefined4 FUN_1d0160c4(int param_1)

{
  if (param_1 == 1) {
    FUN_1d015ff4();
  }
  else {
    if (param_1 == 3) {
      FUN_1d017a20();
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void reset_interrupts(void)

{
  DAT_a0000027 = 0;
  _DAT_bf881064 = 0x100000;
  _DAT_bf800e04 = 0x8000;
  _DAT_bf881074 = 2;
  _DAT_bf809004 = 0x8000;
  DAT_a0000026 = 0;
  FUN_1d0187d4(1);
  DAT_a0000027 = 1;
  _DAT_bf800e00 = 0x30;
  _DAT_bf800e08 = 0x8000;
  _DAT_bf800e10 = 0;
  _DAT_bf800e20 = 0x4e2;
  _DAT_bf881034 = 0x100000;
  _DAT_bf881044 = 2;
  _DAT_bf881064 = 0x100000;
  _DAT_bf881068 = 0x100000;
  _DAT_bf881074 = 2;
  _DAT_bf881078 = 2;
  _DAT_bf8810e4 = 3;
  _DAT_bf8810e8 = 0;
  _DAT_bf8810f4 = 0x3000000;
  _DAT_bf8810f8 = 0;
  return;
}



void rx_tx_loop_init(void)

{
  if (DAT_a0000027 == '\0') {
    reset_interrupts();
  }
  if (DAT_a0000024 != '\0') {
    DAT_a0000024 = '\0';
    can1_send_936_0();
  }
  return;
}



uint FUN_1d016270(void)

{
  return (uint)DAT_a0000025;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d016630(void)

{
  uint local_10;
  uint local_c;
  
  DAT_a000004c = (uint)(Cause << 0x19) >> 0x1b;
  DAT_a0000048 = EPC;
  setCopReg(0,Status,Status & 0xffffffe,0);
  if (9 < DAT_a000004c - 4) {
    do {
      local_10 = 0;
      if (true) {
        do {
          local_c = 0;
          if (true) {
            do {
              local_c = local_c + 1;
            } while (local_c < 800000);
          }
          local_c = 0;
          if (true) {
            do {
              local_c = local_c + 1;
            } while (local_c < 800000);
          }
          local_10 = local_10 + 1;
        } while (local_10 < 2);
      }
      local_10 = 0;
      if (true) {
        do {
          local_c = 0;
          if (true) {
            do {
              local_c = local_c + 1;
            } while (local_c < 800000);
          }
          local_10 = local_10 + 1;
        } while (local_10 < 10);
      }
    } while( true );
  }
                    // WARNING: Could not emulate address calculation at 0x1d016684
                    // WARNING: Treating indirect jump as call
  (**(code **)((DAT_a000004c - 4) * 4 + -0x62fe9970))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1d01685c(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (0xf < (byte)(*param_1 + 0x40)) {
    return 0;
  }
  FUN_1d018b2c(param_2,0,0x40);
  bVar2 = *param_1;
  if (bVar2 == 0xc0) {
    *param_2 = 0xc0;
    *(undefined2 *)(param_2 + 2) = 2;
    *(undefined2 *)(param_2 + 4) = 0;
    *(undefined2 *)(param_2 + 6) = 7;
    return 1;
  }
  if (bVar2 == 0xc1) {
    *param_2 = 0xc1;
    uVar6 = _DAT_9d019828;
    uVar9 = _DAT_9d019824;
    pbVar5 = param_2 + 1;
    pbVar1 = param_2 + 4;
    uVar8 = (uint)pbVar1 & 3;
    *(uint *)(pbVar1 + -uVar8) =
         *(uint *)(pbVar1 + -uVar8) & -1 << (uVar8 + 1) * 8 | _DAT_9d019824 >> (3 - uVar8) * 8;
    uVar8 = (uint)pbVar5 & 3;
    *(uint *)(pbVar5 + -uVar8) =
         *(uint *)(pbVar5 + -uVar8) & 0xffffffffU >> (4 - uVar8) * 8 | uVar9 << uVar8 * 8;
    *(undefined4 *)(param_2 + 5) = uVar6;
    param_2[9] = DAT_9d01982c;
    param_2[10] = DAT_9d01982d;
    param_2[0xb] = DAT_9d01982e;
    FUN_1d018f60(param_2 + 0xc,0x9d019830,0x10);
    uVar6 = FUN_1d011950();
    FUN_1d018f60(param_2 + 0x1c,uVar6,0x12);
    uVar6 = FUN_1d011b88();
    FUN_1d018f60(param_2 + 0x2e,uVar6,0x12);
    return 1;
  }
  if (bVar2 != 0xc2) {
    if (bVar2 == 0xc3) {
      *param_2 = 0xc3;
      if (*(short *)(param_1 + 2) == 0) {
        FUN_1d018b2c(0xa0011d7c,0,0x1000);
        uVar3 = *(ushort *)(param_1 + 2);
      }
      else {
        uVar3 = *(ushort *)(param_1 + 2);
      }
      iVar7 = 0x1004 - (uint)uVar3;
      if (0x3c < iVar7) {
        iVar7 = 0x3c;
      }
      if (iVar7 < 1) {
        return 1;
      }
      FUN_1d017ea0((uint)uVar3 + 0xa0011d7c,param_1 + 4,iVar7);
      _DAT_a0012d7c = (uint)*(ushort *)(param_1 + 2) + iVar7;
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 2);
      return 1;
    }
    if (bVar2 == 0xc4) {
      *param_2 = 0xc4;
      FUN_1d0122dc(0xa0011d7c,_DAT_a0012d7c);
      reset_some_global_vars();
      return 1;
    }
    if (7 < (byte)(bVar2 + 0x38)) {
      return 0;
    }
    *param_2 = bVar2;
    iVar10 = (uint)*param_1 - 200;
    iVar7 = FUN_1d01184c(iVar10);
    if (iVar7 == 0) {
      return 1;
    }
    param_2[1] = 1;
    uVar8 = FUN_1d011854(iVar10);
    param_2[1] = param_2[1] & 1 | (byte)((uVar8 & 0x1fffffff) << 1);
    uVar8 = FUN_1d01186c(iVar10);
    param_2[1] = param_2[1] & 3 | (byte)((uVar8 & 0x1fffffff) << 2);
    uVar4 = FUN_1d011884(iVar10);
    *(undefined2 *)(param_2 + 2) = uVar4;
    uVar4 = FUN_1d01189c(iVar10);
    *(undefined2 *)(param_2 + 4) = uVar4;
    uVar6 = FUN_1d0118b4(iVar10);
    FUN_1d018f60(param_2 + 6,uVar6,0x10);
    uVar6 = FUN_1d0118cc(iVar10);
    FUN_1d018f60(param_2 + 0x16,uVar6,0x2a);
    return iVar7;
  }
  *param_2 = 0xc2;
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 2);
  iVar7 = FUN_1d011b94();
  uVar8 = FUN_1d018008(iVar7);
  uVar9 = (uint)*(ushort *)(param_1 + 2);
  if (uVar8 < 0x1000) {
    if (0x3b < (int)(uVar8 - uVar9)) {
LAB_1d016b68:
      iVar10 = 0x3c;
      goto LAB_1d0169cc;
    }
    iVar10 = uVar8 - uVar9;
  }
  else {
    if (0x3b < (int)(0x1000 - uVar9)) goto LAB_1d016b68;
    iVar10 = 0x1000 - uVar9;
  }
  if (iVar10 < 1) {
    return 1;
  }
LAB_1d0169cc:
  FUN_1d017ea0(param_2 + 4,iVar7 + uVar9,iVar10);
  return 1;
}



undefined4 FUN_1d016b90(undefined *param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  pcVar4 = (char *)FUN_1d011b88();
  if (DAT_a000001c == '\0') {
    if (*pcVar4 != '\0') {
      DAT_a000001c = '\x01';
      DAT_a0000000 = -1;
      cVar1 = *pcVar4;
      goto LAB_1d016bf4;
    }
  }
  else {
    cVar1 = *pcVar4;
LAB_1d016bf4:
    bVar2 = 1;
    if (cVar1 != '\0') goto LAB_1d016c0c;
  }
  bVar2 = FUN_1d011844();
  bVar2 = bVar2 ^ 1;
LAB_1d016c0c:
  param_1[1] = bVar2;
  uVar5 = FUN_1d011834();
  param_1[1] = param_1[1] & 1 | (byte)((uVar5 & 0x1fffffff) << 1);
  uVar5 = FUN_1d01183c();
  param_1[1] = param_1[1] & 3 | (byte)((uVar5 & 0x1fffffff) << 2);
  DAT_a0000000 = DAT_a0000000 + 1;
  if (DAT_a0000000 < 7) {
    if (DAT_a0000000 < 7) {
                    // WARNING: Could not emulate address calculation at 0x1d016c68
                    // WARNING: Treating indirect jump as call
      uVar6 = (**(code **)(&DAT_9d016c74 + DAT_a0000000 * 4))();
      return uVar6;
    }
    uVar6 = 0;
  }
  else {
    DAT_a0000000 = 0;
    *param_1 = 0;
    uVar3 = FUN_1d011854(0);
    *(undefined2 *)(param_1 + 2) = uVar3;
    uVar5 = FUN_1d01186c(0);
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 1 | (ushort)((uVar5 & 0x1fffffff) << 1);
    uVar3 = FUN_1d011884(0);
    *(undefined2 *)(param_1 + 4) = uVar3;
    uVar3 = FUN_1d01189c(0);
    *(undefined2 *)(param_1 + 6) = uVar3;
    uVar6 = 1;
  }
  return uVar6;
}



undefined4 FUN_1d016e7c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = FUN_1d0141bc();
  }
  else {
    if (param_1 == 0) {
      uVar1 = FUN_1d013d0c();
    }
    else {
      if (param_1 == 2) {
        uVar1 = FUN_1d01449c();
      }
      else {
        if (param_1 == 3) {
          uVar1 = FUN_1d014774();
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



undefined4 FUN_1d016f00(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = FUN_1d0141dc();
  }
  else {
    if (param_1 == 0) {
      uVar1 = FUN_1d013d2c();
    }
    else {
      if (param_1 == 2) {
        uVar1 = FUN_1d0144b8();
      }
      else {
        if (param_1 == 3) {
          uVar1 = FUN_1d014814();
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d016f84(void)

{
  _DAT_bf809060 = 0xffffffff;
  _DAT_bf886044 = 0x10;
  _DAT_bf886064 = 0x10;
  _DAT_bf8860c4 = 0x30;
  _DAT_bf8860e4 = 0x30;
  _DAT_bf886104 = 1;
  _DAT_bf886128 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void main_loop(void)

{
  uint uVar1;
  
  FUN_1d0176d8();
  FUN_1d016f84();
  _DAT_bf800008 = 1;
  reset_something();
  init_timers(0x271);
  _DAT_bf800008 = 1;
  init_peripherals();
  _DAT_bf800008 = 1;
  uVar1 = 0;
  do {
    while( true ) {
      do {
        do_something_before_rx_tx_loop();
        rx_tx_loop();
      } while (DAT_a0000070 == '\0');
      DAT_a0000070 = '\0';
      _DAT_bf800008 = 1;
      finalize_rx_tx_loop(DAT_a0000074);
      uVar1 = (uVar1 + 1) % 10000;
      _DAT_bf8860e4 = 0x20;
      if (199 < uVar1 + (((uint)((ulonglong)uVar1 * 0x10624dd3 >> 0x20) & 0xffffff80) +
                        (uVar1 / 2000) * -3) * -0x10) break;
      _DAT_bf8860e8 = 0x10;
    }
    _DAT_bf8860e4 = 0x10;
  } while( true );
}



uint FUN_1d017338(char *param_1,char **param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  DAT_a00001ec = 0;
  if (param_2 != (char **)0x0) {
    *param_2 = param_1;
  }
  do {
    pcVar5 = param_1;
    param_1 = pcVar5 + 1;
    uVar8 = SEXT14(*pcVar5);
  } while (((int)*(char *)(uVar8 + 0x9d0185dd) & 0x88U) != 0);
  if (uVar8 == 0x2d) {
    param_1 = pcVar5 + 2;
    uVar8 = SEXT14(pcVar5[1]);
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if (uVar8 == 0x2b) {
      uVar8 = SEXT14(pcVar5[1]);
      param_1 = pcVar5 + 2;
    }
  }
  pcVar5 = param_1 + 1;
  if (uVar8 == 0x30) {
    uVar8 = SEXT14(*param_1);
    if ((param_3 & 0xffffffef) == 0) {
      if ((uVar8 & 0xffffffdf) == 0x58) {
        pcVar5 = param_1 + 2;
        uVar8 = SEXT14(param_1[1]);
        param_3 = 0x10;
        bVar1 = true;
        goto LAB_1d0173cc;
      }
      if (param_3 == 0) {
        param_3 = 8;
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
    pcVar5 = param_1;
    if (param_3 == 0) {
      param_3 = 10;
    }
  }
LAB_1d0173cc:
  uVar9 = 0;
  do {
    iVar7 = (int)(char)((char)uVar8 + -0x30);
    if ((*(byte *)(uVar8 + 0x9d0185dd) & 3) == 0) {
      if ((*(byte *)(uVar8 + 0x9d0185dd) & 4) == 0) goto LAB_1d017440;
      bVar2 = false;
      if ((int)param_3 <= iVar7) goto LAB_1d017444;
    }
    else {
      cVar4 = FUN_1d019784();
      iVar7 = (int)(char)(cVar4 + -0x37);
      if ((int)param_3 <= iVar7) {
LAB_1d017440:
        bVar2 = false;
        goto LAB_1d017444;
      }
    }
    uVar6 = uVar9 * param_3 + iVar7;
    if (uVar6 < uVar9) {
      DAT_a00001ec = 0x22;
      pcVar5 = pcVar5 + 1;
      bVar2 = true;
LAB_1d017444:
      if ((bVar1) && (param_2 != (char **)0x0)) {
        *param_2 = pcVar5 + -1;
      }
      uVar8 = 0xffffffff;
      if ((!bVar2) && (uVar8 = -uVar9, !bVar3)) {
        uVar8 = uVar9;
      }
      return uVar8;
    }
    uVar8 = SEXT14(*pcVar5);
    bVar1 = true;
    pcVar5 = pcVar5 + 1;
    uVar9 = uVar6;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d0176d8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  DAT_bf80f200 = DAT_bf80f200 & 7;
  uVar1 = FUN_1d0198a4();
  _DAT_bf882004 = 0x40;
  uVar2 = FUN_1d0198a4();
  _DAT_bf884000 = 1;
  FUN_1d019808(uVar2);
  uVar2 = FUN_1d0198a4();
  if ((int)(_DAT_bf883000 << 0x13) < 0) {
    if (-1 < (int)(_DAT_bf883000 << 0x13)) {
      _DAT_bf883008 = 0x1000;
      do {
      } while ((_DAT_bf883000 & 0x800) != 0);
    }
  }
  else {
    _DAT_bf883008 = 0x1000;
    do {
    } while ((_DAT_bf883000 & 0x800) != 0);
    _DAT_bf883004 = 0x1000;
  }
  _DAT_bf80f000 = _DAT_bf80f000 & 0x7ffff;
  _DAT_bf80f230 = 0x33333333;
  FUN_1d019808(uVar2);
  _DAT_bf884000 = _DAT_bf884000 | 0x30;
  FUN_1d01983c();
  FUN_1d019808(uVar1);
  FUN_1d019608(0);
  FUN_1d01989c();
  return;
}



uint FUN_1d017884(char *param_1,char **param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  
  DAT_a00001ec = 0;
  iVar3 = (int)*param_1;
  pcVar2 = param_1;
  if (((int)*(char *)(iVar3 + -0x62fe7a23) & 0x88U) != 0) {
    pcVar2 = param_1 + 1;
    while (iVar3 = (int)*pcVar2, ((int)*(char *)(iVar3 + -0x62fe7a23) & 0x88U) != 0) {
      pcVar2 = pcVar2 + 1;
    }
  }
  if (iVar3 == 0x2d) {
    pcVar2 = pcVar2 + 1;
  }
  else {
    if (iVar3 == 0x2b) {
      pcVar2 = pcVar2 + 1;
    }
    else {
      iVar3 = 0x2b;
    }
  }
  uVar1 = FUN_1d017338(pcVar2,param_2);
  if (param_2 != (char **)0x0) {
    if (*param_2 == pcVar2) {
      *param_2 = param_1;
    }
    else {
      if (param_1 != *param_2) goto LAB_1d01792c;
    }
    if (uVar1 != 0) {
      if (iVar3 == 0x2d) {
        DAT_a00001ec = 0x22;
        return 0x80000000;
      }
      DAT_a00001ec = 0x22;
      return 0x7fffffff;
    }
  }
LAB_1d01792c:
  if (iVar3 == 0x2b) {
    if ((int)uVar1 < 0) {
      DAT_a00001ec = 0x22;
      return 0x7fffffff;
    }
  }
  else {
    if (iVar3 == 0x2d) {
      if (0x80000000 < uVar1) {
        DAT_a00001ec = 0x22;
        return 0x80000000;
      }
      return -uVar1;
    }
  }
  return uVar1;
}



void FUN_1d017a20(void)

{
  if (((DAT_a00000d8 & 0x1f) == 1) && (DAT_a00000dc == '\0')) {
    if (DAT_a00000d9 == 6) {
      if (DAT_a00000db == '!') {
        if (DAT_a00000c8 == '\x01') {
          DAT_a0000480 = (undefined1 *)0x9d018746;
          DAT_a0000488 = 9;
          DAT_a0000484 = 0xc0;
        }
      }
      else {
        if (DAT_a00000db == '\"') {
          DAT_a0000480 = (undefined1 *)0x9d0186f0;
          DAT_a0000488 = 0x1d;
          DAT_a0000484 = 0xc0;
        }
      }
    }
    if ((DAT_a00000d8 & 0x60) == 0x20) {
      if (DAT_a00000d9 == 3) {
        DAT_a0000480 = &DAT_a0000119;
        DAT_a0000484 = 0x81;
        DAT_a0000488 = 1;
        return;
      }
      if (DAT_a00000d9 < 4) {
        if (DAT_a00000d9 == 2) {
          DAT_a0000480 = &DAT_a0000118;
          DAT_a0000484 = 0xc1;
          DAT_a0000488 = 1;
          return;
        }
        return;
      }
      if (DAT_a00000d9 == 10) {
        DAT_a0000118 = DAT_a00000db;
        DAT_a0000484 = 0x80;
        return;
      }
      if (DAT_a00000d9 != 0xb) {
        return;
      }
      DAT_a0000484 = 0x80;
      DAT_a0000119 = DAT_a00000da;
    }
  }
  return;
}



int * FUN_1d017ea0(int *param_1,int *param_2,uint param_3)

{
  undefined uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  
  piVar5 = param_1;
  if (param_3 != 0) {
    if (0xb < param_3) {
      uVar9 = -(int)param_1 & 3;
      if ((((uint)param_2 ^ (uint)param_1) & 3) == 0) {
        uVar8 = param_3 - uVar9;
        if (uVar9 != 0) {
          uVar3 = (uint)param_2 & 3;
          puVar2 = (uint *)((int)param_2 - uVar3);
          param_2 = (int *)((int)param_2 + uVar9);
          uVar4 = (uint)param_1 & 3;
          *(uint *)((int)param_1 - uVar4) =
               *(uint *)((int)param_1 - uVar4) & 0xffffffffU >> (4 - uVar4) * 8 |
               (*puVar2 >> uVar3 * 8) << uVar4 * 8;
          param_1 = (int *)((int)param_1 + uVar9);
        }
        iVar6 = uVar8 - (uVar8 & 0xf);
        if (iVar6 != 0) {
          piVar10 = (int *)(iVar6 + (int)param_2);
          piVar7 = param_1;
          do {
            iVar6 = param_2[1];
            iVar11 = param_2[2];
            iVar12 = param_2[3];
            *piVar7 = *param_2;
            piVar7[1] = iVar6;
            piVar7[2] = iVar11;
            param_2 = param_2 + 4;
            param_1 = piVar7 + 4;
            piVar7[3] = iVar12;
            piVar7 = param_1;
          } while (param_2 != piVar10);
        }
        param_3 = uVar8 & 3;
        iVar6 = (uVar8 & 0xf) - param_3;
        if (iVar6 != 0) {
          piVar10 = (int *)(iVar6 + (int)param_2);
          piVar7 = param_1;
          do {
            iVar6 = *param_2;
            param_2 = param_2 + 1;
            param_1 = piVar7 + 1;
            *piVar7 = iVar6;
            piVar7 = param_1;
          } while (param_2 != piVar10);
        }
      }
      else {
        uVar8 = param_3 - uVar9;
        if (uVar9 != 0) {
          iVar6 = *param_2;
          param_2 = (int *)((int)param_2 + uVar9);
          uVar3 = (uint)param_1 & 3;
          *(uint *)((int)param_1 - uVar3) =
               *(uint *)((int)param_1 - uVar3) & 0xffffffffU >> (4 - uVar3) * 8 | iVar6 << uVar3 * 8
          ;
          param_1 = (int *)((int)param_1 + uVar9);
        }
        iVar6 = uVar8 - (uVar8 & 0xf);
        if (iVar6 != 0) {
          piVar10 = (int *)(iVar6 + (int)param_2);
          piVar7 = param_1;
          do {
            iVar6 = param_2[1];
            iVar11 = param_2[2];
            iVar12 = param_2[3];
            *piVar7 = *param_2;
            piVar7[1] = iVar6;
            piVar7[2] = iVar11;
            param_2 = param_2 + 4;
            param_1 = piVar7 + 4;
            piVar7[3] = iVar12;
            piVar7 = param_1;
          } while (param_2 != piVar10);
        }
        param_3 = uVar8 & 3;
        iVar6 = (uVar8 & 0xf) - param_3;
        if (iVar6 != 0) {
          piVar10 = (int *)(iVar6 + (int)param_2);
          piVar7 = param_1;
          do {
            iVar6 = *param_2;
            param_2 = param_2 + 1;
            param_1 = piVar7 + 1;
            *piVar7 = iVar6;
            piVar7 = param_1;
          } while (param_2 != piVar10);
        }
      }
    }
    piVar7 = (int *)(param_3 + (int)param_2);
    if (param_3 != 0) {
      do {
        uVar1 = *(undefined *)param_2;
        param_2 = (int *)((int)param_2 + 1);
        *(undefined *)param_1 = uVar1;
        param_1 = (int *)((int)param_1 + 1);
      } while (param_2 != piVar7);
    }
  }
  return piVar5;
}



uint * FUN_1d018008(char *param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  if (*param_1 == '\0') {
    return (uint *)0;
  }
  if (param_1[1] == '\0') {
    return (uint *)1;
  }
  if (param_1[2] == '\0') {
    return (uint *)2;
  }
  if (param_1[3] == '\0') {
    return (uint *)3;
  }
  puVar1 = (uint *)((((uint)param_1 >> 2) + 1) * 4);
  uVar4 = *puVar1;
  while( true ) {
    uVar2 = uVar4 + 0xfefefeff & 0x80808080;
    if ((uVar2 != 0) && ((uVar2 & uVar4) != uVar2)) {
      cVar3 = *(char *)puVar1;
      goto LAB_1d01811c;
    }
    uVar4 = puVar1[1] + 0xfefefeff & 0x80808080;
    if ((uVar4 != 0) && ((uVar4 & puVar1[1]) != uVar4)) {
      cVar3 = *(char *)(puVar1 + 1);
      puVar1 = puVar1 + 1;
      goto LAB_1d01811c;
    }
    uVar4 = puVar1[2] + 0xfefefeff & 0x80808080;
    if ((uVar4 != 0) && ((uVar4 & puVar1[2]) != uVar4)) {
      cVar3 = *(char *)(puVar1 + 2);
      puVar1 = puVar1 + 2;
      goto LAB_1d01811c;
    }
    uVar4 = puVar1[3] + 0xfefefeff & 0x80808080;
    if ((uVar4 != 0) && ((uVar4 & puVar1[3]) != uVar4)) break;
    uVar4 = puVar1[4];
    puVar1 = puVar1 + 4;
  }
  cVar3 = *(char *)(puVar1 + 3);
  puVar1 = puVar1 + 3;
LAB_1d01811c:
  if (cVar3 == '\0') {
    return (uint *)((int)puVar1 - (int)param_1);
  }
  if (*(char *)((int)puVar1 + 1) == '\0') {
    return (uint *)((int)puVar1 + (1 - (int)param_1));
  }
  if (*(char *)((int)puVar1 + 2) == '\0') {
    return (uint *)((int)puVar1 + (2 - (int)param_1));
  }
  return (uint *)((int)puVar1 + (3 - (int)param_1));
}



void FUN_1d018170(int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar2 = param_1 * 0x20;
  puVar5 = *(uint **)(param_1 * 4 + -0x62fe6794);
  FUN_1d01952c(param_1 + 0x1c,0);
  uVar3 = *(undefined4 *)(iVar2 + -0x62fe72d8);
  uVar4 = *(undefined4 *)(iVar2 + -0x62fe72d4);
  puVar5[1] = 0x8000;
  uVar6 = param_2 | 0x8000;
  FUN_1d0194b0(uVar3,uVar4);
  FUN_1d019470(*(undefined4 *)(iVar2 + -0x62fe72d0),*(undefined4 *)(iVar2 + -0x62fe72cc));
  if ((param_2 & 0x20) == 0) {
    pcVar1 = (code *)&SUB_9d019470;
  }
  else {
    pcVar1 = (code *)&SUB_9d0194b0;
  }
  (*pcVar1)(*(undefined4 *)(iVar2 + -0x62fe72e0),*(undefined4 *)(iVar2 + -0x62fe72dc));
  if ((param_2 & 0x80000080) == 0) goto LAB_1d018248;
  if ((int)uVar6 < 0) {
    if (-1 < (int)(uVar6 << 1)) goto LAB_1d0182a4;
LAB_1d018238:
    pcVar1 = (code *)&SUB_9d019470;
  }
  else {
    if ((param_2 & 0x20) == 0) goto LAB_1d018238;
LAB_1d0182a4:
    pcVar1 = (code *)&SUB_9d0194b0;
  }
  (*pcVar1)(*(undefined4 *)(iVar2 + -0x62fe72c8),*(undefined4 *)(iVar2 + -0x62fe72c4));
LAB_1d018248:
  FUN_1d019690(param_1 + 0x1c);
  puVar5[0xc] = (param_3 >> 1) - 1;
  puVar5[5] = 0x40;
  *puVar5 = uVar6;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1d0183c0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1d0198a4();
  if (-1 < (int)(_DAT_bf883000 << 0x13)) {
    _DAT_bf883008 = 0x1000;
    do {
    } while ((_DAT_bf883000 & 0x800) != 0);
  }
  _DAT_bf80f400 = param_1 | 0x4000;
  do {
  } while (true);
  _DAT_bf80f410 = 0x556699aa;
  _DAT_bf80f408 = 0x8000;
  do {
  } while ((param_1 & 0x8000) != 0);
  _DAT_bf80f404 = 0x4000;
  if ((int)(_DAT_bf883000 << 0x13) < 0) {
    if (-1 < (int)(_DAT_bf883000 << 0x13)) {
      _DAT_bf883008 = 0x1000;
      do {
      } while ((_DAT_bf883000 & 0x800) != 0);
    }
    FUN_1d019808(uVar1);
    return _DAT_bf80f400 & 0x3000;
  }
  _DAT_bf883004 = 0x1000;
  FUN_1d019808(uVar1);
  return _DAT_bf80f400 & 0x3000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void init_timers(undefined4 param_1)

{
  _DAT_bf800600 = 0x20;
  _DAT_bf800608 = 0x8000;
  _DAT_bf800610 = 0;
  _DAT_bf800620 = param_1;
  _DAT_bf881034 = 0x10;
  _DAT_bf881064 = 0x10;
  _DAT_bf881068 = 0x10;
  _DAT_bf8810a4 = 3;
  _DAT_bf8810a8 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d0187d4(uint param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  sVar1 = 0;
  uVar4 = param_1;
  if (param_1 != 0) {
    do {
      uVar3 = uVar4 & 1;
      uVar4 = uVar4 >> 1;
      iVar2 = iVar2 + uVar3;
      sVar1 = (short)iVar2;
    } while (uVar4 != 0);
  }
  _DAT_bf809010 = (uint)(ushort)((sVar1 + -1) * 4);
  _DAT_bf809000 = 0x10;
  _DAT_bf809008 = 0x8000;
  _DAT_bf809020 = 0x801f;
  _DAT_bf809050 = param_1;
  _DAT_bf809060 = ~param_1;
  _DAT_bf886050 = param_1 | _DAT_bf886050;
  return;
}



void FUN_1d0188b8(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2[1];
  iVar1 = *(int *)(&DAT_a00001e4 + param_1 * 4);
  if ((iVar2 + *param_2 + 4 + param_2[2]) * 2 * param_4 == 0) {
    trap(7);
  }
  if (param_2[3] == 1) {
    *(undefined4 *)(iVar1 + 0x18) = 0x8000;
    iVar3 = param_2[4];
  }
  else {
    *(undefined4 *)(iVar1 + 0x14) = 0x8000;
    iVar3 = param_2[4];
  }
  if (iVar3 == 1) {
    *(undefined4 *)(iVar1 + 0x18) = 0x4000;
  }
  else {
    *(undefined4 *)(iVar1 + 0x14) = 0x4000;
  }
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0x7ff | iVar2 << 0xb;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffff | *param_2 << 0x10;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xff | param_2[2] << 8;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0x3f | param_2[5] << 6;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
  return;
}



void FUN_1d018a74(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_a00001e4 + param_1 * 4);
  if (param_4 == 0) {
    puVar1 = (undefined4 *)(iVar2 + (param_2 + 8) * 0x10);
    *puVar1 = *puVar1;
    *puVar1 = *puVar1;
  }
  else {
    if (param_4 == 1) {
      puVar1 = (undefined4 *)(iVar2 + (param_2 + 8) * 0x10);
      *puVar1 = *puVar1;
    }
  }
  if (param_5 != 0) {
    if (param_5 == 1) {
      *(undefined4 *)(iVar2 + (param_2 + 8) * 0x10 + 4) = 0x80000;
      return;
    }
    return;
  }
  *(undefined4 *)(iVar2 + param_2 * 0x10 + 0x88) = 0x80000;
  return;
}



uint * FUN_1d018b2c(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  puVar1 = param_1;
  if (param_3 != 0) {
    param_2 = param_2 & 0xff;
    if (0xf < param_3) {
      uVar4 = param_2 | param_2 << 8;
      uVar4 = uVar4 | uVar4 << 0x10;
      if (((uint)param_1 & 3) != 0) {
        iVar5 = 4 - ((uint)param_1 & 3);
        param_3 = param_3 - iVar5;
        uVar2 = (uint)param_1 & 3;
        *(uint *)((int)param_1 - uVar2) =
             *(uint *)((int)param_1 - uVar2) & 0xffffffffU >> (4 - uVar2) * 8 | uVar4 << uVar2 * 8;
        param_1 = (uint *)((int)param_1 + iVar5);
      }
      uVar2 = param_3 & 0xf;
      iVar5 = param_3 - uVar2;
      if (iVar5 != 0) {
        puVar6 = (uint *)(iVar5 + (int)param_1);
        puVar3 = param_1;
        do {
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          puVar3[2] = uVar4;
          param_1 = puVar3 + 4;
          puVar3[3] = uVar4;
          puVar3 = param_1;
        } while (param_1 != puVar6);
      }
      param_3 = param_3 & 3;
      iVar5 = uVar2 - param_3;
      if (iVar5 != 0) {
        puVar6 = (uint *)(iVar5 + (int)param_1);
        puVar3 = param_1;
        do {
          param_1 = puVar3 + 1;
          *puVar3 = uVar4;
          puVar3 = param_1;
        } while (param_1 != puVar6);
      }
    }
    puVar3 = param_1;
    if (param_3 != 0) {
      do {
        puVar6 = (uint *)((int)puVar3 + 1);
        *(char *)puVar3 = (char)param_2;
        puVar3 = puVar6;
      } while (puVar6 != (uint *)(param_3 + (int)param_1));
    }
  }
  return puVar1;
}



int FUN_1d018bd4(char *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  while( true ) {
    while (iVar3 = (int)*param_1, iVar3 == 0x20) {
      param_1 = param_1 + 1;
    }
    if (iVar3 != 9) break;
    param_1 = param_1 + 1;
  }
  if (iVar3 == 0x2d) {
    pcVar5 = param_1 + 1;
    iVar3 = (int)param_1[1];
    bVar2 = true;
  }
  else {
    bVar2 = false;
    pcVar5 = param_1;
    if (iVar3 == 0x2b) {
      pcVar5 = param_1 + 1;
      iVar3 = (int)param_1[1];
    }
  }
  bVar1 = *(byte *)(iVar3 + -0x62fe7a23);
  iVar4 = 0;
  while ((bVar1 & 4) != 0) {
    pcVar5 = pcVar5 + 1;
    iVar6 = iVar3 + -0x30;
    iVar3 = (int)*pcVar5;
    bVar1 = *(byte *)(iVar3 + -0x62fe7a23);
    iVar4 = iVar4 * 10 + iVar6;
  }
  iVar3 = -iVar4;
  if (!bVar2) {
    iVar3 = iVar4;
  }
  return iVar3;
}



void FUN_1d018c7c(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_a00001e4 + param_1 * 4);
  param_2 = param_2 * 0x40;
  iVar1 = iVar2 + param_2;
  *(undefined4 *)(iVar1 + 0x358) = 0x80;
  *(undefined4 *)(iVar1 + 0x350) = *(undefined4 *)(iVar1 + 0x350);
  if (param_4 == 0) {
    *(undefined4 *)(iVar1 + 0x358) = 4;
    *(uint *)(iVar2 + param_2 + 0x350) =
         *(uint *)(iVar2 + param_2 + 0x350) & 0xc0000000 | param_5 & 0x3fffffff;
    return;
  }
  if (param_4 != 1) {
    *(uint *)(iVar2 + param_2 + 0x350) =
         *(uint *)(iVar2 + param_2 + 0x350) & 0xc0000000 | param_5 & 0x3fffffff;
    return;
  }
  *(undefined4 *)(iVar1 + 0x354) = 4;
  *(uint *)(iVar2 + param_2 + 0x350) =
       *(uint *)(iVar2 + param_2 + 0x350) & 0xc0000000 | param_5 & 0x3fffffff;
  return;
}



char * FUN_1d018dc0(char *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (char *)0x0) {
    do {
      if (*param_1 == '\0') {
        return (char *)0;
      }
      uVar1 = FUN_1d018008(param_2);
      iVar2 = FUN_1d0190e8(param_1,param_2,uVar1);
      if (iVar2 == 0) {
        return param_1;
      }
      param_1 = (char *)FUN_1d0196e8(param_1 + 1,(int)*param_2);
    } while (param_1 != (char *)0x0);
  }
  return (char *)0;
}



uint FUN_1d018e50(void)

{
  DAT_a0000004 = (DAT_a0000004 + 1) % 1000;
  return (uint)(DAT_a0000004 == 300);
}



void FUN_1d018e94(byte *param_1)

{
  DAT_a0000004 = (uint)*param_1 * 100;
  return;
}



void FUN_1d018eb4(undefined *param_1)

{
  *param_1 = 3;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 2;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 7;
  return;
}



void FUN_1d018ed8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(&DAT_a00001e4 + param_1 * 4);
  if (param_4 != 0) {
    if (param_4 == 1) {
      puVar2 = (undefined4 *)(iVar1 + (param_2 + 0x14) * 0x10);
      *puVar2 = *puVar2;
      puVar2[1] = 0x80000;
    }
    return;
  }
  puVar2 = (undefined4 *)(iVar1 + (param_2 + 0x14) * 0x10);
  *puVar2 = *puVar2;
  *puVar2 = *puVar2;
  *(undefined4 *)(iVar1 + param_2 * 0x10 + 0x148) = 0x80000;
  return;
}



char * FUN_1d018f60(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_3 != 0) {
    cVar1 = *param_2;
    param_3 = param_3 + -1;
    *param_1 = cVar1;
    pcVar2 = param_1 + 1;
    pcVar3 = param_2 + 1;
    while (cVar1 != '\0') {
      if (param_3 == 0) {
        return param_1;
      }
      cVar1 = *pcVar3;
      param_3 = param_3 + -1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    if (param_3 != 0) {
      FUN_1d018b2c(pcVar2,0);
      return param_1;
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d01906c(void)

{
  FUN_1d0198a4();
  if (-1 < (int)(_DAT_bf883000 << 0x13)) {
    do {
    } while ((_DAT_bf883000 & 0x800) != 0);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



int FUN_1d0190e8(char *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar2 = SEXT14(*param_1);
  uVar3 = SEXT14(*param_2);
  uVar1 = 0;
  if (uVar2 != 0) {
    if (uVar2 == uVar3) {
      do {
        param_1 = param_1 + 1;
        if (param_3 - 1U == uVar1) {
          return 0;
        }
        uVar2 = SEXT14(*param_1);
        uVar1 = uVar1 + 1;
        if (uVar2 == 0) {
          return -((int)param_2[1] & 0xffU);
        }
        uVar3 = SEXT14(param_2[1]);
        param_2 = param_2 + 1;
      } while (uVar2 == uVar3);
      uVar1 = uVar2 & 0xff;
    }
    else {
      uVar1 = uVar2 & 0xff;
    }
  }
  return uVar1 - (uVar3 & 0xff);
}



void FUN_1d019158(int param_1,int param_2,int param_3)

{
  if (param_3 != 1) {
    *(undefined4 *)
     (*(int *)(&DAT_a00001e4 + param_1 * 4) + (*(int *)(&DAT_9d017bb8 + param_2 * 0xc) + 0xc) * 0x10
     + 4) = *(undefined4 *)(&DAT_9d017bc0 + param_2 * 0xc);
    return;
  }
  *(undefined4 *)
   (*(int *)(&DAT_a00001e4 + param_1 * 4) + *(int *)(&DAT_9d017bb8 + param_2 * 0xc) * 0x10 + 200) =
       *(undefined4 *)(&DAT_9d017bc0 + param_2 * 0xc);
  return;
}



void FUN_1d0191c0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_a00001e4 + param_1 * 4) + param_2 * 0x40;
  *(undefined4 *)(iVar1 + 0x354) = 0x80;
  *(undefined4 *)(iVar1 + 0x350) = *(undefined4 *)(iVar1 + 0x350);
  if (param_4 != 0) {
    if (param_4 == 1) {
      *(undefined4 *)(iVar1 + 0x354) = 0x1000;
    }
    return;
  }
  *(undefined4 *)(iVar1 + 0x358) = 0x1000;
  return;
}



void FUN_1d019220(int param_1,int param_2,int param_3,byte param_4)

{
  *(byte *)(*(int *)(&DAT_a00001e4 + param_1 * 4) + *(int *)(&DAT_9d017bb8 + param_2 * 0xc) * 0x10 +
            *(int *)(&DAT_9d017bbc + param_2 * 0xc) + 0xc0) = (byte)(param_3 << 5) | param_4;
  return;
}



void FUN_1d019278(void)

{
  if (false) {
    (*(code *)0x0)();
  }
  (*(code *)&SUB_9d016fd4)(0,0);
  do {
    do {
    } while (true);
    (*(code *)0x0)();
  } while( true );
}



uint can_rx_fifo_ua(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_a00001e4 + param_1 * 4) + param_2 * 0x40;
  if ((*(uint *)(iVar1 + 0x360) & 1) != 0) {
    return *(uint *)(iVar1 + 0x370) | 0xa0000000;
  }
  return 0;
}



uint can_tx_fifo_ua(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_a00001e4 + param_1 * 4) + param_2 * 0x40;
  if (*(int *)(iVar1 + 0x360) << 0x15 < 0) {
    return *(uint *)(iVar1 + 0x370) | 0xa0000000;
  }
  return 0;
}



void FUN_1d019470(int param_1,uint param_2)

{
  int iVar1;
  
  param_1 = param_1 * 0xc;
  iVar1 = *(int *)(&DAT_9d0192d4 + param_1);
  *(uint *)(*(int *)(&DAT_9d0192cc + param_1) + 8) = param_2;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 8) = param_2 & *(uint *)(&DAT_9d0192d0 + param_1);
  }
  return;
}



void FUN_1d0194b0(int param_1,uint param_2)

{
  int iVar1;
  
  param_1 = param_1 * 0xc;
  iVar1 = *(int *)(&DAT_9d0192d4 + param_1);
  *(uint *)(*(int *)(&DAT_9d0192cc + param_1) + 4) = param_2;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 8) = param_2 & *(uint *)(&DAT_9d0192d0 + param_1);
  }
  return;
}



void FUN_1d0194f0(int param_1,int param_2)

{
  if (param_2 != 1) {
    *(undefined4 *)(*(int *)(&DAT_a00001e4 + param_1 * 4) + 4) = 0x8000;
    return;
  }
  *(undefined4 *)(*(int *)(&DAT_a00001e4 + param_1 * 4) + 8) = 0x8000;
  return;
}



void FUN_1d01952c(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(*(int *)(&DAT_9d015528 + param_1 * 0xc) + 4) =
         *(undefined4 *)(&DAT_9d01552c + param_1 * 0xc);
    return;
  }
  *(undefined4 *)(*(int *)(&DAT_9d015528 + param_1 * 0xc) + 8) =
       *(undefined4 *)(&DAT_9d01552c + param_1 * 0xc);
  return;
}



void FUN_1d019568(int param_1,int param_2,int param_3)

{
  if (param_3 != 1) {
    *(int *)(*(int *)(&DAT_a00001e4 + param_1 * 4) + 0x24) = param_2 << 0x10;
    return;
  }
  *(int *)(*(int *)(&DAT_a00001e4 + param_1 * 4) + 0x28) = param_2 << 0x10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void init_external_interrupt(void)

{
  setCopReg(0,Cause,Cause | 0x800000,0);
  _DAT_bf881008 = 0x1000;
  FUN_1d01989c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d0195d4(uint param_1,undefined4 param_2)

{
  _DAT_bf80f420 = param_1 & 0x1fffffff;
  _DAT_bf80f430 = param_2;
  FUN_1d0183c0(0x4001);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d019608(int param_1)

{
  setCopReg(0,Cause,Cause | 0x800000,0);
  if (param_1 != 0) {
    _DAT_bf881004 = 0x1000;
    return;
  }
  _DAT_bf881008 = 0x1000;
  return;
}



void can_fifo_uinc(int param_1,int param_2)

{
  *(undefined4 *)(*(int *)(&DAT_a00001e4 + param_1 * 4) + param_2 * 0x40 + 0x358) = 0x2000;
  return;
}



void can_tx_req(int param_1,int param_2)

{
  *(undefined4 *)(*(int *)(&DAT_a00001e4 + param_1 * 4) + param_2 * 0x40 + 0x358) = 8;
  return;
}



void FUN_1d019690(int param_1)

{
  *(undefined4 *)(*(int *)(&DAT_9d015524 + param_1 * 0xc) + 4) =
       *(undefined4 *)(&DAT_9d01552c + param_1 * 0xc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1d0196bc(uint param_1)

{
  _DAT_bf80f420 = param_1 & 0x1fffffff;
  FUN_1d0183c0(0x4004);
  return;
}



char * FUN_1d0196e8(char *param_1,char param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      return param_1;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return (char *)0;
}



void FUN_1d019714(int param_1,int param_2)

{
  **(uint **)(&DAT_a00001e4 + param_1 * 4) =
       **(uint **)(&DAT_a00001e4 + param_1 * 4) & 0xffffff | param_2 << 0x18;
  return;
}



uint FUN_1d01973c(void)

{
  return (uint)DAT_9d017e4c;
}



uint FUN_1d019748(void)

{
  return (uint)DAT_9d017e74;
}



uint FUN_1d019754(void)

{
  return (uint)DAT_9d017e9c;
}



void FUN_1d019760(int param_1,uint param_2)

{
  *(uint *)(*(int *)(&DAT_a00001e4 + param_1 * 4) + 0x340) = param_2 & 0x1fffffff;
  return;
}



int FUN_1d019784(int param_1)

{
  if ((*(byte *)(param_1 + -0x62fe7a23) & 2) != 0) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}



uint FUN_1d0197a8(int param_1)

{
  return (uint)(**(int **)(&DAT_a00001e4 + param_1 * 4) << 8) >> 0x1d;
}



uint FUN_1d0197c8(int param_1)

{
  return *(uint *)(*(int *)(&DAT_a00001e4 + param_1 * 4) + 0x40) & 0xff;
}



uint FUN_1d0197e8(int param_1)

{
  return (uint)(*(int *)(*(int *)(&DAT_a00001e4 + param_1 * 4) + 0x40) << 0x10) >> 0x18;
}



void FUN_1d019808(uint param_1)

{
  if ((param_1 & 1) == 0) {
    Status = Status & 0xfffffffe;
    return;
  }
  Status = Status | 1;
  return;
}



uint FUN_1d01983c(void)

{
  uint uVar1;
  
  uVar1 = Config & 0xfffffff8 | 3;
  setCopReg(0,Config,uVar1,0);
  return uVar1;
}



uint FUN_1d01989c(void)

{
  uint uVar1;
  
  uVar1 = Status;
  Status = Status | 1;
  return uVar1;
}



uint FUN_1d0198a4(void)

{
  uint uVar1;
  
  uVar1 = Status;
  Status = Status & 0xfffffffe;
  return uVar1;
}


