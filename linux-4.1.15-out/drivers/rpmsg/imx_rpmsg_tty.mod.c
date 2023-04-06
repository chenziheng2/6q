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
	{ 0x390d56af, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xb6821e34, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xa1032f4c, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xab49c11e, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12a88862, __VMLINUX_SYMBOL_STR(rpmsg_send_offchannel_raw) },
	{ 0x83f7d080, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0x1bb3c726, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x432ab0ad, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xfb9e9286, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x505302dc, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x5f8524e7, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xa2bce166, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2502af4c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9b9515f1, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc148f169, __VMLINUX_SYMBOL_STR(tty_prepare_flip_string) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "07B1503D766ACA66F0F4100");
