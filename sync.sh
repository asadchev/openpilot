# add in .ssh/config
# Match User eon
#   User eon
#   Port 8022
#   IdentityFile /home/andrey/.ssh/openpilot_rsa

set -x

rsync -alv ./ eon@$1:/data/openpilot/

# ssh eon@$1 killall launch_chffrplus.sh manager.py
# ssh eon@$1 'cd /data/openpilot/panda/board && make'
ssh eon@$1 reboot
