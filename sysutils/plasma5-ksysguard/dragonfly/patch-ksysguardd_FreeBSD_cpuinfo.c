--- ksysguardd/FreeBSD/cpuinfo.c.orig	2018-05-01 12:50:42 UTC
+++ ksysguardd/FreeBSD/cpuinfo.c
@@ -38,6 +38,15 @@
 #define FREQ_LEVEL_BUFFER 256
 #define SYSCTL_ID_LEN 35
 
+#if defined(__DragonFly__) && !defined(CPUSTATES)
+#define CP_USER 	0
+#define CP_NICE 	1
+#define CP_SYS		2
+#define CP_INTR 	3
+#define CP_IDLE 	4
+#define CPUSTATES	5
+#endif
+
 static void get_mmfreq(int, int*, int*);
 
 static long percentages(int cnt, long *out, long *new, long *old, long *diffs);
