cmd_drivers/net/wireless/rtl8723bu/hal/hal_mcc.o := arm-poky-linux-gnueabi-gcc -Wp,-MD,drivers/net/wireless/rtl8723bu/hal/.hal_mcc.o.d  -nostdinc -isystem /opt/fsl-imx-x11/4.1.15-2.1.0/sysroots/x86_64-pokysdk-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/5.3.0/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -DCC_HAVE_ASM_GOTO --sysroot=/opt/fsl-imx-x11/4.1.15-2.1.0/sysroots/cortexa9hf-neon-poky-linux-gnueabi -O1 -Wno-unused-variable -Wno-unused-value -Wno-unused-label -Wno-unused-parameter -Wno-unused-function -Wno-unused -Wno-date-time -Idrivers/net/wireless/rtl8723bu/include -Idrivers/net/wireless/rtl8723bu/platform -Idrivers/net/wireless/rtl8723bu/hal/btc -Idrivers/net/wireless/rtl8723bu/hal/phydm -DCONFIG_RTL8723B -DCONFIG_MP_INCLUDED -DCONFIG_POWER_SAVING -DCONFIG_BT_COEXIST -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8723bu.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_LOAD_PHY_PARA_FROM_FILE -DREALTEK_CONFIG_PATH=\"/lib/firmware/\" -DCONFIG_TXPWR_BY_RATE_EN=0 -DCONFIG_TXPWR_LIMIT_EN=0 -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_RTW_NAPI -DCONFIG_RTW_GRO -DCONFIG_RTW_WIFI_HAL -DCONFIG_RTW_CFGVEDNOR_LLSTATS -DDM_ODM_SUPPORT_TYPE=0x04 -DCONFIG_PLATFORM_ANDROID -DCONFIG_LITTLE_ENDIAN -DCONFIG_CONCURRENT_MODE -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT -DCONFIG_P2P_IPS -DCONFIG_RADIO_WORK  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(hal_mcc)"  -D"KBUILD_MODNAME=KBUILD_STR(wlan)" -c -o drivers/net/wireless/rtl8723bu/hal/.tmp_hal_mcc.o drivers/net/wireless/rtl8723bu/hal/hal_mcc.c

source_drivers/net/wireless/rtl8723bu/hal/hal_mcc.o := drivers/net/wireless/rtl8723bu/hal/hal_mcc.c

deps_drivers/net/wireless/rtl8723bu/hal/hal_mcc.o := \
    $(wildcard include/config/mcc/mode.h) \
    $(wildcard include/config/mcc/mode/debug.h) \

drivers/net/wireless/rtl8723bu/hal/hal_mcc.o: $(deps_drivers/net/wireless/rtl8723bu/hal/hal_mcc.o)

$(deps_drivers/net/wireless/rtl8723bu/hal/hal_mcc.o):
