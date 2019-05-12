--- sysdeps/freebsd/prockernel.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/prockernel.c
@@ -89,9 +89,14 @@ glibtop_get_proc_kernel_p (glibtop *serv
 
 	glibtop_suid_leave (server);
 
+#ifdef __DragonFly__
+#define	PROC_WCHAN	kp_lwp.kl_wchan
+#define	PROC_WMESG	kp_lwp.kl_wmesg
+#else
 #define	PROC_WCHAN	ki_wchan
 #define	PROC_WMESG	ki_wmesg
 #define	PROC_WMESG	ki_wmesg
+#endif
 
 	buf->nwchan = (unsigned long) pinfo [0].PROC_WCHAN;
 
@@ -105,6 +110,11 @@ glibtop_get_proc_kernel_p (glibtop *serv
 		buf->wchan [0] = 0;
 	}
 
+#ifdef __DragonFly__
+	buf->k_flags = (unsigned long) pinfo [0].kp_flags;
+	buf->min_flt = (unsigned long) pinfo [0].kp_ru.ru_minflt;
+	buf->maj_flt = (unsigned long) pinfo [0].kp_ru.ru_majflt;
+#else
 	buf->k_flags = (unsigned long) pinfo [0].ki_flag;
 	buf->min_flt = (unsigned long) pinfo [0].ki_rusage.ru_minflt;
 	buf->maj_flt = (unsigned long) pinfo [0].ki_rusage.ru_majflt;
@@ -112,6 +122,7 @@ glibtop_get_proc_kernel_p (glibtop *serv
 	buf->cmin_flt = (unsigned long) buf->min_flt + pinfo [0].ki_rusage_ch.ru_minflt;
 	buf->cmaj_flt = (unsigned long) buf->maj_flt + pinfo [0].ki_rusage_ch.ru_majflt;
 #endif
+#endif
 
 	buf->flags |= _glibtop_sysdeps_proc_kernel_pstats;
 
