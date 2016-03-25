--- mono/utils/mono-proclib.c.orig	2015-11-12 11:00:29.000000000 +0200
+++ mono/utils/mono-proclib.c
@@ -31,7 +31,7 @@
 #endif
 #include <sys/resource.h>
 #endif
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || (defined(__FreeBSD__) && !defined(__DragonFly__)) || defined(__OpenBSD__) || defined(__NetBSD__)
 #include <sys/proc.h>
 #if defined(__APPLE__)
 #include <mach/mach.h>
@@ -43,6 +43,10 @@
 #    define kinfo_starttime_member kp_proc.p_starttime
 #    define kinfo_pid_member kp_proc.p_pid
 #    define kinfo_name_member kp_proc.p_comm
+#elif defined(__DragonFly__)
+#    define kinfo_starttime_member kp_start
+#    define kinfo_pid_member kp_pid
+#    define kinfo_name_member kp_comm
 #elif defined(__OpenBSD__)
 // Can not figure out how to get the proc's start time on OpenBSD
 #    undef kinfo_starttime_member 
