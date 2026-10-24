--- psutil/arch/bsd/proc_utils.c.intermediate	2025-11-02 21:47:52 UTC
+++ psutil/arch/bsd/proc_utils.c
@@ -11,10 +11,12 @@
 #include <stdint.h>
 #include <sys/types.h>
 #include <sys/sysctl.h>
+#ifndef PSUTIL_DRAGONFLY
 #include <sys/proc.h>
+#endif
 #include <limits.h>
 #include <unistd.h>
-#ifdef PSUTIL_FREEBSD
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
 #include <sys/user.h>
 #endif
 
@@ -24,7 +26,7 @@
 // Fills a kinfo_proc or kinfo_proc2 struct based on process PID.
 int
 psutil_kinfo_proc(pid_t pid, void *proc) {
-#if defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     size_t size = sizeof(struct kinfo_proc);
     int mib[] = {CTL_KERN, KERN_PROC, KERN_PROC_PID, pid};
     int len = 4;
@@ -113,6 +115,8 @@ is_zombie(size_t pid) {
 
 #if defined(PSUTIL_FREEBSD)
     return kp.ki_stat == SZOMB;
+#elif defined(PSUTIL_DRAGONFLY)
+    return kp.kp_stat == SZOMB;
 #elif defined(PSUTIL_OPENBSD)
     // According to /usr/include/sys/proc.h SZOMB is unused.
     // test_zombie_process() shows that SDEAD is the right
