diff --git base/process/process_handle_freebsd.cc base/process/process_handle_freebsd.cc
index ae67c8855e3..3ba94ee0b54 100644
--- base/process/process_handle_freebsd.cc
+++ base/process/process_handle_freebsd.cc
@@ -25,7 +25,11 @@ ProcessId GetParentProcessId(ProcessHandle process) {
   if (length < sizeof(struct kinfo_proc))
     return -1;
 
+#if defined(OS_DRAGONFLY)
+  return info.kp_ppid;
+#else
   return info.ki_ppid;
+#endif
 }
 
 FilePath GetProcessExecutablePath(ProcessHandle process) {
