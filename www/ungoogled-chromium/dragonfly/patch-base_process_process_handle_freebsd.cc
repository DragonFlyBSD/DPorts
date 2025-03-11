diff --git base/process/process_handle_freebsd.cc base/process/process_handle_freebsd.cc
index f5b1c5b006c4..2bc34444d907 100644
--- base/process/process_handle_freebsd.cc
+++ base/process/process_handle_freebsd.cc
@@ -30,7 +30,11 @@ ProcessId GetParentProcessId(ProcessHandle process) {
   if (length < sizeof(struct kinfo_proc))
     return -1;
 
+#if defined(OS_DRAGONFLY)
+  return info.kp_ppid;
+#else
   return info.ki_ppid;
+#endif
 }
 
 FilePath GetProcessExecutablePath(ProcessHandle process) {
