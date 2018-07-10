--- src/nvim/os/process.c.orig	2018-06-10 22:46:49 UTC
+++ src/nvim/os/process.c
@@ -12,13 +12,13 @@
 # include <tlhelp32.h>  // for CreateToolhelp32Snapshot
 #endif
 
-#if defined(__FreeBSD__)  // XXX: OpenBSD ?
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <string.h>
 # include <sys/types.h>
 # include <sys/user.h>
 #endif
 
-#if defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 # include <sys/param.h>
 #endif
 
@@ -155,6 +155,9 @@ int os_proc_children(int ppid, int **pro
 # elif defined(__FreeBSD__)
 #  define KP_PID(o) o.ki_pid
 #  define KP_PPID(o) o.ki_ppid
+# elif defined(__DragonFly__)
+#  define KP_PID(o)  o.kp_pid
+#  define KP_PPID(o) o.kp_ppid
 # else
 #  define KP_PID(o) o.p_pid
 #  define KP_PPID(o) o.p_ppid
