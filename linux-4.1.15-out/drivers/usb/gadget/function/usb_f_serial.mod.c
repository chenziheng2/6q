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
	{ 0x5210281a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x89b0570a, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x299f7706, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2fc7b1af, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xb6a1a89e, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x2502af4c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2bdeae59, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x121c917b, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0x8f1d669d, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0x684ff63f, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x6fde5db3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x678ecb5, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
	{ 0xa058d640, __VMLINUX_SYMBOL_STR(usb_string_id) },
	{ 0xa3937053, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x5b11b450, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial,configfs";


MODULE_INFO(srcversion, "7F3FCFCAF118477E021B66F");
