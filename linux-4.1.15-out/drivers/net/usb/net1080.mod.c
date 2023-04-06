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
	{ 0x41aa65da, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xd72b73be, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xa6a7d102, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x715545ff, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x20e864b5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x269c4817, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x16fd45b, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe1c6b00f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3b0ea9b5, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x821ec443, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8cae1c26, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFF27B20292EA2953ACFB09");
