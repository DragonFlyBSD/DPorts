--- src/3rdparty/chromium/base/process/process_iterator_freebsd.cc.intermediate	2026-09-17 07:06:56 UTC
+++ src/3rdparty/chromium/base/process/process_iterator_freebsd.cc
@@ -23,6 +23,7 @@ ProcessIterator::ProcessIterator(const ProcessFilter* 
   bool done = false;
   int try_num = 1;
   const int max_tries = 10;
+  size_t num_of_kinfo_proc;
 
   do {
     size_t len = 0;
@@ -31,7 +32,7 @@ ProcessIterator::ProcessIterator(const ProcessFilter* 
       kinfo_procs_.resize(0);
       done = true;
     } else {
-      size_t num_of_kinfo_proc = len / sizeof(struct kinfo_proc);
+      num_of_kinfo_proc = len / sizeof(struct kinfo_proc);
       // Leave some spare room for process table growth (more could show up
       // between when we check and now)
       num_of_kinfo_proc += 16;
@@ -68,9 +69,15 @@ bool ProcessIterator::CheckForNextProcess() {
   for (; index_of_kinfo_proc_ < kinfo_procs_.size(); ++index_of_kinfo_proc_) {
     size_t length;
     struct kinfo_proc kinfo = kinfo_procs_[index_of_kinfo_proc_];
+#if defined(OS_DRAGONFLY)
+    int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_ARGS, kinfo.kp_pid };
+
+    if ((kinfo.kp_pid > 0) && (kinfo.kp_stat == SZOMB)) {
+#else
     int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_ARGS, kinfo.ki_pid };
 
     if ((kinfo.ki_pid > 0) && (kinfo.ki_stat == SZOMB)) {
+#endif
       continue;
     }
 
@@ -93,9 +100,15 @@ bool ProcessIterator::CheckForNextProcess() {
       continue;
     }
 
+#if defined(OS_DRAGONFLY)
+    entry_.pid_ = kinfo.kp_pid;
+    entry_.ppid_ = kinfo.kp_ppid;
+    entry_.gid_ = kinfo.kp_pgid;
+#else
     entry_.pid_ = kinfo.ki_pid;
     entry_.ppid_ = kinfo.ki_ppid;
     entry_.gid_ = kinfo.ki_pgid;
+#endif
 
     size_t last_slash = data.rfind('/', exec_name_end);
     if (last_slash == std::string::npos) {
