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
	{ 0xff3e4652, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x8777a43f, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xb7423543, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x9de80eb8, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xb08b764, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xa3c8c98e, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x3cbbc606, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x6094bc2e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xe7f65d8f, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x92cf480d, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x9991112e, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xfca4e469, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf811f05d, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd257fd72, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x4d9168d2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x16fd45b, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x13fe9ee6, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5a6ff08d, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb5f5e36d, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0xfd959b97, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0xd72b73be, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x269c4817, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x41aa65da, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x731b64c0, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x71221286, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x8ac5556, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0xa6a7d102, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xaa41b018, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x37de6046, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xfe2725af, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x20e864b5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4103d6f0, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x1cf675e5, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x715545ff, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x821ec443, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x3b0ea9b5, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaa6df11d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4C676DD260D26D648107038");
