cmd_drivers/media/built-in.o :=  arm-poky-linux-gnueabi-ld -EL    -r -o drivers/media/built-in.o drivers/media/i2c/built-in.o drivers/media/tuners/built-in.o drivers/media/v4l2-core/built-in.o drivers/media/rc/built-in.o drivers/media/common/built-in.o drivers/media/platform/built-in.o drivers/media/pci/built-in.o drivers/media/usb/built-in.o drivers/media/mmc/built-in.o drivers/media/firewire/built-in.o drivers/media/radio/built-in.o 
