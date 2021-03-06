#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6681337c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7f6811d6, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x93191bdd, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x11a2db14, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xf949bdd9, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x615f6e08, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf1504265, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x34b95e85, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x24d6b135, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0xb5e38baa, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xe3f90a9e, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xcbf2d812, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0x6088ce6a, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xde102425, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xf3645594, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xca6e631d, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xaa43766f, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1adaf3b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2a02b281, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xac9657d8, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x82a54ef4, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xf2c2d2a3, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x181c8ea4, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0xd4bc2d3c, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xba63ee8, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x1d45d018, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
	{ 0x377934ed, __VMLINUX_SYMBOL_STR(ieee80211_get_channel) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x1dc54eb6, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xc2c5b2b6, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x85740833, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb8e9f335, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x78d3d857, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x49674c3b, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0xb81edb68, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x3d8a573a, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xb64634ff, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0xee4ca559, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x65e69ba4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x5054c285, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xbbb0e87b, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0xaf3c4fa4, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3ecf2108, __VMLINUX_SYMBOL_STR(cfg80211_connect_done) },
	{ 0xefa966f7, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0x558f4e5e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x40aa5ab0, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x8297dbe1, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0x8b4f93e9, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1ec7f1d0, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x4036f172, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x6bba3e43, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x116a8a5c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x579ad968, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xc984e88b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x3649d8b5, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5f7ba631, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x8a058b2d, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xee94b392, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xaebf3a6d, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xee07faa3, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xc2a8b58c, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x5ceb3818, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1f9e731f, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x8bdbd6b6, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0xec3c5240, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xd4acb92, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x78ca661a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xa55f6029, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x90ec3f93, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x551a3ece, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0xcb82d698, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0xe0b5abcb, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xaef80388, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0xf52acce4, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x49be6290, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xaee68c68, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xbb2242fc, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x495106c1, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0xcbe76a9e, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x21184b49, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x45163e50, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe527a04c, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x4fe38dbd, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x690b3bd7, __VMLINUX_SYMBOL_STR(proc_get_parent_data) },
	{ 0x103118d4, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x10ebb306, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x46197dc9, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xbbccc6ea, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe672dcef, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xfec4b40b, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd1b56684, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x8653a238, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x78782a33, __VMLINUX_SYMBOL_STR(napi_schedule_prep) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcf33bd2c, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x53a9f1da, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x66fbe565, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb4c6f96b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xbaf571ef, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x58780d14, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8c880a72, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x109fb8a6, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xd19c1eee, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0xed98d421, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x4cba441d, __VMLINUX_SYMBOL_STR(iwe_stream_add_event) },
	{ 0xfaf58211, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x32193a39, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3dd5d31, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x8249512, __VMLINUX_SYMBOL_STR(iwe_stream_add_point) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x869508e6, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x84c3fd82, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x18650c66, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x102b38e, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xf97999ce, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe8228377, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x33b6984a, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xafbc4b89, __VMLINUX_SYMBOL_STR(skb_pull) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v0BDApB82Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC821d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC82Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC82Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8811d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "A4959C2AF5E78B0B24F1AC6");
