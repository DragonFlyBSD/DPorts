diff --git base/process/process_metrics_freebsd.cc base/process/process_metrics_freebsd.cc
index 254fe845aee7..b1226f82b382 100644
--- base/process/process_metrics_freebsd.cc
+++ base/process/process_metrics_freebsd.cc
@@ -18,6 +18,8 @@
 #include "base/memory/ptr_util.h"
 #include "base/values.h"
 
+static int fscale_;
+
 namespace base {
 namespace {
 int GetPageShift() {
@@ -58,7 +60,11 @@ ProcessMetrics::GetMemoryInfo() const {
   }
 
   if (nproc > 0) {
+#ifdef __DragonFly__
+    memory_info.resident_set_bytes = pp->kp_vm_rssize << GetPageShift();
+#else
     memory_info.resident_set_bytes = pp->ki_rssize << GetPageShift();
+#endif
   } else {
     kvm_close(kd);
     return base::unexpected(ProcessUsageError::kProcessNotFound);
@@ -88,12 +94,21 @@ ProcessMetrics::GetCumulativeCPUUsage() {
     return base::unexpected(ProcessCPUUsageError::kProcessNotFound);
   }
 
+#ifdef __FreeBSD__
   return base::ok(Microseconds(info.ki_runtime));
+#else
+  return Microseconds(TimeValToMicroseconds(info.kp_ru.ru_utime) +
+		      TimeValToMicroseconds(info.kp_ru.ru_stime));
+#endif
 }
 
 size_t GetSystemCommitCharge() {
   int mib[2], pagesize;
+#if defined(OS_DRAGONFLY)
+  unsigned int mem_total, mem_free, mem_inactive;
+#else
   unsigned long mem_total, mem_free, mem_inactive;
+#endif
   size_t length = sizeof(mem_total);
 
   if (sysctl(mib, std::size(mib), &mem_total, &length, NULL, 0) < 0) {
@@ -172,15 +187,20 @@ bool GetSystemMemoryInfo(SystemMemoryInfoKB *meminfo) {
 }
 
 int ProcessMetrics::GetOpenFdCount() const {
+#if defined(__DragonFly__)
+  return -1;
+#else
   struct kinfo_file * kif;
   int cnt;
 
+
   if ((kif = kinfo_getfile(process_, &cnt)) == NULL)
     return -1;
 
   free(kif);
 
   return cnt;
+#endif
 }
 
 int ProcessMetrics::GetOpenFdSoftLimit() const {
