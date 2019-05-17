--- sysdeps/freebsd/procuid.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/procuid.c
@@ -62,6 +62,17 @@ glibtop_get_proc_uid_p (glibtop *server,
 		return;
 	}
 
+#ifdef __DragonFly__
+#define	PROC_RUID	kp_ruid
+#define	PROC_EUID	kp_uid
+#define	PROC_RGID	kp_rgid
+#define	PROC_SVGID	kp_svgid
+#define	PROC_PPID	kp_ppid
+#define	PROC_PGID	kp_pgid
+#define	PROC_TPGID	kp_tpgid
+#define	PROC_NICE	kp_nice
+#define	PROC_PRIORITY	kp_lwp.kl_tdprio
+#else
 #define	PROC_RUID	ki_ruid
 #define	PROC_EUID	ki_uid
 #define	PROC_RGID	ki_rgid
@@ -71,6 +82,7 @@ glibtop_get_proc_uid_p (glibtop *server,
 #define	PROC_TPGID	ki_tpgid
 #define	PROC_NICE	ki_nice
 #define	PROC_PRIORITY	ki_pri.pri_user
+#endif
 
 	buf->uid  = pinfo [0].PROC_RUID;
 	buf->euid = pinfo [0].PROC_EUID;
