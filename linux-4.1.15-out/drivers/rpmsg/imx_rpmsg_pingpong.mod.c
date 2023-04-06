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
	{ 0x63f92c32, __VMLINUX_SYMBOL_STR(unregister_rpmsg_driver) },
	{ 0xd7746736, __VMLINUX_SYMBOL_STR(register_rpmsg_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2502af4c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x12a88862, __VMLINUX_SYMBOL_STR(rpmsg_send_offchannel_raw) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa2bce166, __VMLINUX_SYMBOL_STR(_dev_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F38793A3D6A4B920FCD41A9");
