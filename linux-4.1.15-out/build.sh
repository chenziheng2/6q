#!/bin/bash 
. /opt/fsl-imx-x11/4.1.15-2.1.0/environment-setup-cortexa9hf-neon-poky-linux-gnueabi
make distclean
make imx_v7_defconfig
make zImage -j16
make dtbs
make modules -j16
