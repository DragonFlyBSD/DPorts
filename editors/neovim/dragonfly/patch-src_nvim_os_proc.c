--- src/nvim/os/proc.c.orig	2025-06-09 13:54:52.535655000 +0200
+++ src/nvim/os/proc.c	2025-06-09 13:58:46.319745000 +0200
@@ -15,7 +15,7 @@
 # include <tlhelp32.h>
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <string.h>
 # include <sys/types.h>
 # include <sys/user.h>
@@ -153,6 +153,9 @@ int os_proc_children(int ppid, int **pro
 # if defined(__APPLE__)
 #  define KP_PID(o) o.kp_proc.p_pid
 #  define KP_PPID(o) o.kp_eproc.e_ppid
+# elif defined(__DragonFly__)
+#  define KP_PID(o) o.kp_pid
+#  define KP_PPID(o) o.kp_ppid
 # elif defined(__FreeBSD__)
 #  define KP_PID(o) o.ki_pid
 #  define KP_PPID(o) o.ki_ppid
