--- mono/utils/mono-proclib.c.orig	2017-05-06 16:30:40 UTC
+++ mono/utils/mono-proclib.c
@@ -36,7 +36,7 @@
 #endif
 #include <sys/resource.h>
 #endif
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || (defined(__FreeBSD__) && !defined(__DragonFly__)) || defined(__OpenBSD__) || defined(__NetBSD__)
 #include <sys/proc.h>
 #if defined(__APPLE__)
 #include <mach/mach.h>
@@ -48,6 +48,10 @@
 #    define kinfo_starttime_member kp_proc.p_starttime
 #    define kinfo_pid_member kp_proc.p_pid
 #    define kinfo_name_member kp_proc.p_comm
+#elif defined(__DragonFly__)
+#    define kinfo_starttime_member kp_start
+#    define kinfo_pid_member kp_pid
+#    define kinfo_name_member kp_comm
 #elif defined(__NetBSD__)
 #    define kinfo_starttime_member p_ustart_sec
 #    define kinfo_pid_member p_pid
