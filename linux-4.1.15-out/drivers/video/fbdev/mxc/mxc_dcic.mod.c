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
	{ 0xfa94449a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xc115abfd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xfc30d166, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x8498ec7e, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xb915804e, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x2352b16a, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x15ee247b, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x9625f91f, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xd83c3fc8, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x8c7a9173, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xaaecc5cb, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x1ed0bfd3, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0xeb74cc90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5af4a56, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xa6bf284a, __VMLINUX_SYMBOL_STR(syscon_regmap_lookup_by_phandle) },
	{ 0x3db6f08e, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xebdd630a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x6dbab696, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7c83e4e5, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2502af4c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xda81fad, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xf77193b9, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x27e18979, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9e2265da, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x2f0280f9, __VMLINUX_SYMBOL_STR(device_destroy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx6q-dcic*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-dcic*");

MODULE_INFO(srcversion, "A1652BA98651818366A42B3");
