diff --git base/process/process_handle_freebsd.cc base/process/process_handle_freebsd.cc
index 9a03e146c54..fb4d2f17b13 100644
--- base/process/process_handle_freebsd.cc
+++ base/process/process_handle_freebsd.cc
@@ -29,7 +29,11 @@ ProcessId GetParentProcessId(ProcessHandle process) {
   if (length < sizeof(struct kinfo_proc))
     return -1;
 
+#if defined(OS_DRAGONFLY)
+  return info.kp_ppid;
+#else
   return info.ki_ppid;
+#endif
 }
 
 FilePath GetProcessExecutablePath(ProcessHandle process) {
