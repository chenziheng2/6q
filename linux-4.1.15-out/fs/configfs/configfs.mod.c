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
	{ 0x1b6d02b9, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x5210281a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x11456b74, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x57bd3bd7, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf7c8bdc9, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x8b101177, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x5c75cce0, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x837c643d, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xda9860b7, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xda81fad, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x642dc1f4, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x81e5e6e0, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x33a934c5, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xa93a688e, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f194e30, __VMLINUX_SYMBOL_STR(sysfs_remove_mount_point) },
	{ 0xbda3e957, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xc2b8a264, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x5f62476c, __VMLINUX_SYMBOL_STR(simple_write_begin) },
	{ 0xeb74cc90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x54c2233a, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1c431dc0, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf77193b9, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbfd802e5, __VMLINUX_SYMBOL_STR(simple_readpage) },
	{ 0x69c53bc2, __VMLINUX_SYMBOL_STR(nd_set_link) },
	{ 0x3277162b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x6fde5db3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbf55a3ff, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0x1d75a4a5, __VMLINUX_SYMBOL_STR(simple_setattr) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x8f17ed21, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xa1ccedfd, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdc6ef6d3, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3ebbcdd6, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xddb807c, __VMLINUX_SYMBOL_STR(sysfs_create_mount_point) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x336a0b6b, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x4055f13e, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x717abbd9, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0x272c8d7, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0x91bf6d67, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x7f2c06da, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7fea9187, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xa970ab39, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x89a2d219, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x11466887, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x1784e80e, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xfe0bcc02, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x3f483f94, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0x9fac5a6b, __VMLINUX_SYMBOL_STR(__d_drop) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BAC846119DF7A8FAD803348");
