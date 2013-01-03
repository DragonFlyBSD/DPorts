--- mono/utils/mono-proclib.c.orig	2013-01-03 20:27:38.888535000 +0100
+++ mono/utils/mono-proclib.c	2013-01-03 20:32:53.898975000 +0100
@@ -22,7 +22,9 @@
 #include <sys/param.h>
 #include <sys/types.h>
 #include <sys/sysctl.h>
+#ifndef __DragonFly__
 #include <sys/proc.h>
+#endif
 #if defined(__APPLE__)
 #include <mach/mach.h>
 #endif
@@ -35,6 +37,9 @@
 #elif defined(__OpenBSD__)
 #    define kinfo_pid_member p_pid
 #    define kinfo_name_member p_comm
+#elif defined(__DragonFly__)
+#define kinfo_pid_member kp_pid
+#define kinfo_name_member kp_comm
 #else
 #define kinfo_pid_member ki_pid
 #define kinfo_name_member ki_comm
