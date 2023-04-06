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
	{ 0x9ac93217, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xb45f236, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x56c8cb0d, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x7bd8ef6f, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x98a86301, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0xda9860b7, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xda81fad, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4f4aaa17, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x1d2cdae8, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0x6c730674, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0x43870cfc, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0x79e77f28, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0x14b8f2be, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0x4eadd797, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0xb08f1418, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf77193b9, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x56d51bdf, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xa426a7fe, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xe22bcf72, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0x5a912f60, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x94687b0e, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x7eedc4eb, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x3ebbcdd6, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x9fbb08a0, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0xb988d9c6, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x25b0a30c, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0xb910ecb1, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0x24f64557, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0x89a2d219, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdbb19c0e, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x85cbd93c, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0x1784e80e, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x2995f83d, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "31B1E1BF3B95D7E923DE732");
