cmd_sound/usb/snd-usb-audio.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o sound/usb/snd-usb-audio.ko sound/usb/snd-usb-audio.o sound/usb/snd-usb-audio.mod.o
