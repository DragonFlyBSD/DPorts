--- base/process/process_handle_freebsd.cc.intermediate	2014-01-05 04:37:27.301008000 +0000
+++ base/process/process_handle_freebsd.cc
@@ -26,6 +26,9 @@ ProcessId GetParentProcessId(ProcessHand
 }
 
 FilePath GetProcessExecutablePath(ProcessHandle process) {
+#ifdef __DragonFly__
+  return FilePath("/usr/local/bin/chrome");
+#else
   char pathname[PATH_MAX];
   size_t length = sizeof(pathname);
   int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, process };
@@ -36,6 +39,7 @@ FilePath GetProcessExecutablePath(Proces
   if (length == 0)
     return FilePath();
   return FilePath(std::string(pathname));
+#endif
 }
 
 }  // namespace base
