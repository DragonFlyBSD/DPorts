--- proctree.h.orig	2000-06-06 09:03:36.000000000 +0000
+++ proctree.h
@@ -1,3 +1,12 @@
+#ifdef __DragonFly__
+#define	ki_pid		kp_pid
+#define	ki_ppid		kp_ppid
+#define	ki_tpgid	kp_tpgid
+#define	ki_svuid	kp_svuid
+#define	ki_stat		kp_stat
+#define	ki_comm		kp_comm
+#define	ki_tdev		kp_tdev
+#endif
 
 #define TREE_DEPTH 32
 #define TREE_STRING_SZ (2 + 2*TREE_DEPTH)
