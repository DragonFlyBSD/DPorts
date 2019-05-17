--- src/3rdparty/chromium/base/process/process_handle_freebsd.cc.intermediate	2019-05-06 09:08:08.000000000 +0000
+++ src/3rdparty/chromium/base/process/process_handle_freebsd.cc
@@ -25,7 +25,11 @@ ProcessId GetParentProcessId(ProcessHand
   if (length < sizeof(struct kinfo_proc))
     return -1;
 
+#ifdef __DragonFly__
+  return info.kp_ppid;
+#else
   return info.ki_ppid;
+#endif
 }
 
 FilePath GetProcessExecutablePath(ProcessHandle process) {
