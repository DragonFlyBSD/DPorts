--- hotspot/src/os/bsd/vm/vmError_bsd.cpp.orig	2021-01-20 00:41:17 UTC
+++ hotspot/src/os/bsd/vm/vmError_bsd.cpp
@@ -33,7 +33,7 @@
 #include <sys/syscall.h>
 #include <unistd.h>
 #include <signal.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <limits.h>
 #include <sys/sysctl.h>
 #endif
@@ -42,7 +42,7 @@
 
 static void set_debugger(char *buf, int buflen) {
   int pid = os::current_process_id();
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   char cmd[PATH_MAX+1];
   int name[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, pid };
   size_t len = sizeof(cmd);
