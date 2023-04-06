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
	{ 0x92f790b, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x8502f866, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x5210281a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x333cac, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x74ef5eb, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0xdfb0f616, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x57bd3bd7, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xc30c9d56, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xdecfe928, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x3c32129d, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xac75bd49, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x943a1fe, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xfb2f8a4, __VMLINUX_SYMBOL_STR(mktime64) },
	{ 0xda81fad, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4f4aaa17, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x23c82cc0, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x81e5e6e0, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x556eeccf, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xafd5105a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x59ec43b6, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x11ddb8e2, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf295522d, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xd627480b, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x4be50b64, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6eb2d93, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x72af602d, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1c431dc0, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x56d51bdf, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xf77193b9, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9e5527f4, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xf985d4a7, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xbd5b600f, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x5a912f60, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x64b7b014, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x8f317c4d, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x6fde5db3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2502a9c3, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x327d017, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x946a620, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xbf8e0af3, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x6367811b, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x94687b0e, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x75994869, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0xdc6ef6d3, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3ebbcdd6, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x4055f13e, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa1ae6569, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0xb988d9c6, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xa34c52ca, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xc087ce60, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xca03e303, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x7f2c06da, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xc874acb4, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0x89a2d219, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xa1b5a41b, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf23804d6, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xd3c78c10, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7D6CAA2BD3F07E1DD424BC0");
