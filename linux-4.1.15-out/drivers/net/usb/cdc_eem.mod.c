#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x876437a0, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4d9168d2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xd257fd72, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xff3e4652, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x8777a43f, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xfca4e469, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf811f05d, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd052f542, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x16fd45b, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x71221286, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x3c719320, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd89f7f90, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe3fb475b, __VMLINUX_SYMBOL_STR(usbnet_device_suggests_idle) },
	{ 0x20e864b5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4103d6f0, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x715545ff, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1cf675e5, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x9b760714, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa718d6a3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x3b0ea9b5, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe1c6b00f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x821ec443, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8cae1c26, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "07A97BE75F2F8E124A49096");
