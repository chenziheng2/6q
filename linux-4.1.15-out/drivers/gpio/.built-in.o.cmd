cmd_drivers/gpio/built-in.o :=  arm-poky-linux-gnueabi-ld -EL    -r -o drivers/gpio/built-in.o drivers/gpio/devres.o drivers/gpio/gpiolib.o drivers/gpio/gpiolib-legacy.o drivers/gpio/gpiolib-of.o drivers/gpio/gpiolib-sysfs.o drivers/gpio/gpio-generic.o drivers/gpio/gpio-74x164.o drivers/gpio/gpio-max732x.o drivers/gpio/gpio-mxc.o drivers/gpio/gpio-pca953x.o drivers/gpio/gpio-vf610.o 
