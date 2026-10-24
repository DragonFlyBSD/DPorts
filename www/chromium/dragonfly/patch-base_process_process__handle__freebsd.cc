diff --git base/process/process_handle_freebsd.cc base/process/process_handle_freebsd.cc
index 93b31e59b0d4..6d617d020a46 100644
--- base/process/process_handle_freebsd.cc
+++ base/process/process_handle_freebsd.cc
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
