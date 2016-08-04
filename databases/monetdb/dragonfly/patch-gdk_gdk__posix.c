--- gdk/gdk_posix.c.orig	2013-11-20 13:26:19.000000000 +0200
+++ gdk/gdk_posix.c
@@ -302,7 +302,7 @@ MT_getrss(void)
 	if (task_info(task, TASK_BASIC_INFO_64, (task_info_t)&t_info, &t_info_count) != KERN_INVALID_POLICY)
 		return t_info.resident_size;  /* bytes */
 #elif defined(HAVE_KVM_H) && defined(HAVE_SYS_SYSCTL_H)
-	/* get RSS on FreeBSD and NetBSD */
+	/* get RSS on DragonFly, FreeBSD and NetBSD */
 	struct kinfo_proc *ki;
 	int ski = 1;
 	kvm_t *kd;
@@ -321,6 +321,8 @@ MT_getrss(void)
 #ifdef __NetBSD__		/* should we use configure for this? */
 	/* see bug 3217 */
 	rss = ki->kp_eproc.e_vm.vm_rssize;
+#elif defined(__DragonFly__)
+	rss = ki->kp_vm_rssize;
 #else
 	rss = ki->ki_rssize;
 #endif
