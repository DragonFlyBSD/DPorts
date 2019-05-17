--- src/3rdparty/chromium/base/process/process_iterator_freebsd.cc.intermediate	2019-05-06 09:08:08.000000000 +0000
+++ src/3rdparty/chromium/base/process/process_iterator_freebsd.cc
@@ -76,9 +76,17 @@ bool ProcessIterator::CheckForNextProces
   for (; index_of_kinfo_proc_ < kinfo_procs_.size(); ++index_of_kinfo_proc_) {
     size_t length;
     struct kinfo_proc kinfo = kinfo_procs_[index_of_kinfo_proc_];
+#ifdef __DragonFly__
+    int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_ARGS, kinfo.kp_pid };
+#else
     int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_ARGS, kinfo.ki_pid };
+#endif
 
+#ifdef __DragonFly__
+    if ((kinfo.kp_pid > 0) && (kinfo.kp_stat == SZOMB))
+#else
     if ((kinfo.ki_pid > 0) && (kinfo.ki_stat == SZOMB))
+#endif
       continue;
 
     data.resize(ARG_MAX);
@@ -99,9 +107,15 @@ bool ProcessIterator::CheckForNextProces
       continue;
     }
 
+#ifdef __DragonFly__
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
