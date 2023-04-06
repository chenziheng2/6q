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
	{ 0x3c111b9d, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x89b0570a, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf098d4f3, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x4612d022, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x13fe9ee6, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x93963b53, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x821ec443, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xda81fad, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x954fef3f, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd2c926e9, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x2fc7b1af, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x715545ff, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd73afff1, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x84e78b4b, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa23a1a9b, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x730899aa, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xb6a1a89e, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x2502af4c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0xeb74cc90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2bdeae59, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x4d471a32, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc8b87cb6, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3b0ea9b5, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf77193b9, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4b4cac00, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x8f1d669d, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xb02809dc, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xa71a6bb1, __VMLINUX_SYMBOL_STR(gether_get_host_addr_u8) },
	{ 0x20e864b5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x684ff63f, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xe7d9cdc0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x71db203f, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0x6fde5db3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc268124c, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x678ecb5, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x78689590, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa3937053, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x5b11b450, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xa718d6a3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf0d6d9a3, __VMLINUX_SYMBOL_STR(usb_os_desc_prepare_interf_dir) },
	{ 0x935ecbad, __VMLINUX_SYMBOL_STR(dev_get_stats) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "43C8DA9B582C10BBA9F7B2D");
