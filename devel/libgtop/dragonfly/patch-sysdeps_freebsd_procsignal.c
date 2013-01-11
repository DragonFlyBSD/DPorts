--- sysdeps/freebsd/procsignal.c.orig	2011-03-14 23:08:03.000000000 +0100
+++ sysdeps/freebsd/procsignal.c	2013-01-11 17:12:00.000000000 +0100
@@ -66,10 +66,17 @@
 		return;
 	}
 
+#ifdef __DragonFly__
+#define	PROC_SIGLIST	kp_siglist
+#define	PROC_SIGMASK	kp_lwp.kl_sigmask
+#define	PROC_SIGIGNORE	kp_sigignore
+#define	PROC_SIGCATCH	kp_sigcatch
+#else
 #define	PROC_SIGLIST	ki_siglist
 #define	PROC_SIGMASK	ki_sigmask
 #define	PROC_SIGIGNORE	ki_sigignore
 #define	PROC_SIGCATCH	ki_sigcatch
+#endif
 
 	/* signal: mask of pending signals.
 	 *         pinfo [0].kp_proc.p_siglist
