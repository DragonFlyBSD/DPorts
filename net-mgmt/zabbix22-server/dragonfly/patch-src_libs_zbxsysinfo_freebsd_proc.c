--- src/libs/zbxsysinfo/freebsd/proc.c.orig	2013-08-21 13:59:21.000000000 +0000
+++ src/libs/zbxsysinfo/freebsd/proc.c
@@ -39,6 +39,16 @@
 #	define ZBX_PROC_TSIZE	ki_tsize
 #	define ZBX_PROC_DSIZE	ki_dsize
 #	define ZBX_PROC_SSIZE	ki_ssize
+#elif defined(__DragonFly__)
+#	define ZBX_COMMLEN	MAXCOMLEN
+#	define ZBX_PROC_PID	kp_pid
+#	define ZBX_PROC_COMM	kp_comm
+#	define ZBX_PROC_STAT	kp_stat
+#	define ZBX_PROC_TSIZE	kp_vm_tsize
+#	define ZBX_PROC_DSIZE	kp_vm_dsize
+#	define ZBX_PROC_SSIZE	kp_vm_ssize
+#	define SRUN		SACTIVE
+#	define SSLEEP		SIDL
 #else
 #	define ZBX_COMMLEN	MAXCOMLEN
 #	define ZBX_PROC_PID	kp_proc.p_pid
