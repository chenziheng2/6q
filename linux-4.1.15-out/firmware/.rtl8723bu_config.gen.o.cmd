cmd_firmware/rtl8723bu_config.gen.o := arm-poky-linux-gnueabi-gcc -Wp,-MD,firmware/.rtl8723bu_config.gen.o.d  -nostdinc -isystem /opt/fsl-imx-x11/4.1.15-2.1.0/sysroots/x86_64-pokysdk-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/5.3.0/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian   -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -DCC_HAVE_ASM_GOTO            -c -o firmware/rtl8723bu_config.gen.o firmware/rtl8723bu_config.gen.S

source_firmware/rtl8723bu_config.gen.o := firmware/rtl8723bu_config.gen.S

deps_firmware/rtl8723bu_config.gen.o := \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/rtl8723bu_config.gen.o: $(deps_firmware/rtl8723bu_config.gen.o)

$(deps_firmware/rtl8723bu_config.gen.o):
