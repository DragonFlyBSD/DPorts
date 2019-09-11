--- src/proctree.h.orig	2018-04-11 06:10:50 UTC
+++ src/proctree.h
@@ -46,6 +46,15 @@ extern int num_proc;
 		#define kinfo_tdev kp_eproc.e_tdev
 	#endif
 #else
+#  if defined __DragonFly__
+	#define kinfo_pid kp_pid
+	#define kinfo_ppid kp_ppid
+	#define kinfo_tpgid kp_tpgid
+	#define kinfo_svuid kp_svuid
+	#define kinfo_stat kp_stat
+	#define kinfo_comm kp_comm
+	#define kinfo_tdev kp_tdev
+#  else
 	#define kinfo_pid ki_pid
 	#define kinfo_ppid ki_ppid
 	#define kinfo_tpgid ki_tpgid
@@ -53,4 +62,5 @@ extern int num_proc;
 	#define kinfo_stat ki_stat
 	#define kinfo_comm ki_comm
 	#define kinfo_tdev ki_tdev
+#  endif
 #endif
