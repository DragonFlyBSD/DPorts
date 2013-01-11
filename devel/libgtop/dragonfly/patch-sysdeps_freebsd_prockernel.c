--- sysdeps/freebsd/prockernel.c.orig	2011-03-14 23:08:03.000000000 +0100
+++ sysdeps/freebsd/prockernel.c	2013-01-11 17:20:44.000000000 +0100
@@ -91,9 +91,13 @@
 
 	glibtop_suid_leave (server);
 
+#ifdef __DragonFly__
+#define	PROC_WCHAN	kp_lwp.kl_wchan
+#define	PROC_WMESG	kp_lwp.kl_wmesg
+#else
 #define	PROC_WCHAN	ki_wchan
 #define	PROC_WMESG	ki_wmesg
-#define	PROC_WMESG	ki_wmesg
+#endif
 
 	buf->nwchan = (unsigned long) pinfo [0].PROC_WCHAN;
 
@@ -107,6 +111,11 @@
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
@@ -114,6 +123,7 @@
 	buf->cmin_flt = (unsigned long) buf->min_flt + pinfo [0].ki_rusage_ch.ru_minflt;
 	buf->cmaj_flt = (unsigned long) buf->maj_flt + pinfo [0].ki_rusage_ch.ru_majflt;
 #endif
+#endif
 
 	buf->flags |= _glibtop_sysdeps_proc_kernel_pstats;
 
