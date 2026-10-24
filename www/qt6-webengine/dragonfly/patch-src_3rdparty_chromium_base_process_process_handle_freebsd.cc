--- src/3rdparty/chromium/base/process/process_handle_freebsd.cc.orig	2026-10-23 12:00:00 UTC
+++ src/3rdparty/chromium/base/process/process_handle_freebsd.cc
@@ -31,7 +31,11 @@ ProcessId GetParentProcessId(ProcessHandle process) {
     return -1;
   }
 
+#if defined(OS_DRAGONFLY)
+  return info.kp_ppid;
+#else
   return info.ki_ppid;
+#endif
 }
 
 FilePath GetProcessExecutablePath(ProcessHandle process) {
