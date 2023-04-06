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
	{ 0xb7423543, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x6094bc2e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xfca4e469, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf811f05d, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x813f8e2e, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x13fe9ee6, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xda76e31b, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x6fde5db3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5210281a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd89f7f90, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x38a1446e, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x93963b53, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfe2725af, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x730899aa, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x6d16d822, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xb4568a1e, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xaa6df11d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x4ddcdf78, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x821ec443, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x803d23e0, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x211f7d5a, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0x618a5c28, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x6fa51bb2, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x40bce334, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x2d87bb9f, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xe1c6b00f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5654230e, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x632780, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2502af4c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8dfe7537, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x161533c6, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x87b56d99, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xeb74cc90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x37e08eb8, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x877569a6, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2b66e5, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x9b760714, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbbb4e032, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe7d9cdc0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x41aa65da, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xde668463, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xa253953e, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x3c719320, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x55c524dc, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x1026495f, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5a6ff08d, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xaa5f3ef, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xda81fad, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf77193b9, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x857112ba, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x71221286, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x2cd76cc9, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x2bb77802, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4d471a32, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc2cf1641, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xd2b8987f, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xa718d6a3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfdd7f860, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe87d61f2, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x30242084, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "EEBA2E436A39010FE684EFD");
