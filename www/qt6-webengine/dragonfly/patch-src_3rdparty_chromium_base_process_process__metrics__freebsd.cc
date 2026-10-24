--- src/3rdparty/chromium/base/process/process_metrics_freebsd.cc.intermediate	2026-09-17 07:06:56 UTC
+++ src/3rdparty/chromium/base/process/process_metrics_freebsd.cc
@@ -58,7 +58,11 @@ ProcessMetrics::GetMemoryInfo() const {
   }
 
   if (nproc > 0) {
+#if defined(OS_DRAGONFLY)
+    memory_info.resident_set_bytes = pp->kp_vm_rssize << GetPageShift();
+#else
     memory_info.resident_set_bytes = pp->ki_rssize << GetPageShift();
+#endif
   } else {
     kvm_close(kd);
     return base::unexpected(ProcessUsageError::kProcessNotFound);
@@ -88,7 +92,13 @@ ProcessMetrics::GetCumulativeCPUUsage() {
     return base::unexpected(ProcessCPUUsageError::kProcessNotFound);
   }
 
-  return base::ok(Microseconds(info.ki_runtime));
+  return base::ok(Microseconds(
+#if defined(OS_DRAGONFLY)
+      TimeValToMicroseconds(info.kp_ru.ru_utime) +
+      TimeValToMicroseconds(info.kp_ru.ru_stime)));
+#else
+      info.ki_runtime));
+#endif
 }
 
 size_t GetSystemCommitCharge() {
@@ -172,6 +182,9 @@ bool GetSystemMemoryInfo(SystemMemoryInfoKB *meminfo) 
 }
 
 int ProcessMetrics::GetOpenFdCount() const {
+#if defined(__DragonFly__)
+  return -1;
+#else
   struct kinfo_file * kif;
   int cnt;
 
@@ -181,6 +194,7 @@ int ProcessMetrics::GetOpenFdCount() const {
   free(kif);
 
   return cnt;
+#endif
 }
 
 int ProcessMetrics::GetOpenFdSoftLimit() const {
