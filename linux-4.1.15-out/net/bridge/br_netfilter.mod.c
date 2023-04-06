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
	{ 0x327d936b, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x52d33cf1, __VMLINUX_SYMBOL_STR(ip_fragment) },
	{ 0x7d8071c0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x159e401e, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0x5bd8835, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xb7af1f5e, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x4ddcdf78, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x69b287d9, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x3b0ea9b5, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x20e864b5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x1f8f62a9, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x43b8dcb3, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x85f1f2e, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x5ad97a5e, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x6fde5db3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc2f2ed2c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xaa6df11d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xdf924b2c, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x7bbe114e, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdb9871b3, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x5dcf7979, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0xabfefd7a, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x4ee2bf79, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x5915f22d, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6BC922039142366461A2D0F");
