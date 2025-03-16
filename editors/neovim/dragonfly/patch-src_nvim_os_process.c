--- src/nvim/os/process.c.orig	Thu May 16 12:34:32 2024
+++ src/nvim/os/process.c	Mon Sep
@@ -15,13 +15,13 @@
 # include <tlhelp32.h>
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <string.h>
 # include <sys/types.h>
 # include <sys/user.h>
 #endif
 
-#if defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 # include <sys/param.h>
 #endif
 
@@ -156,6 +156,9 @@ int os_proc_children(int ppid, int **proc_list, size_t
 # elif defined(__FreeBSD__)
 #  define KP_PID(o) o.ki_pid
 #  define KP_PPID(o) o.ki_ppid
+# elif defined(__DragonFly__)
+#  define KP_PID(o) o.kp_pid
+#  define KP_PPID(o) o.kp_ppid
 # else
 #  define KP_PID(o) o.p_pid
 #  define KP_PPID(o) o.p_ppid
