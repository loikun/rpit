#/bin/sh
sudo sed -i -e 's/^exit 0/# Change governor to performance\nfor gov in \/sys\/devices\/system\/cpu\/cpu[0-9]*\/cpufreq\/scaling_governor; do echo performance | sudo tee $gov >\/dev\/null; done\n\nexit 0/g' /etc/rc.local