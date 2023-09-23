diff --git base/process/process_metrics_freebsd.cc base/process/process_metrics_freebsd.cc
index 946063d3cc9..b1fe0e9b156 100644
--- base/process/process_metrics_freebsd.cc
+++ base/process/process_metrics_freebsd.cc
@@ -19,6 +19,8 @@
 #include "base/process/process_metrics_iocounters.h"
 #include "base/values.h"
 
+static int fscale_;
+
 namespace base {
 namespace {
 int GetPageShift() {
@@ -35,7 +37,19 @@ int GetPageShift() {
 }
 
 ProcessMetrics::ProcessMetrics(ProcessHandle process)
-    : process_(process) {}
+    : process_(process) {
+#if defined(OS_DRAGONFLY)
+  size_t len = sizeof(int);
+  int val;
+
+  if (sysctlbyname("kern.fscale", &val, &len, NULL, 0) == 0) {
+    fscale_ = val;
+    return;
+  }
+#else
+  fscale_ = FSCALE;
+#endif
+}
 
 // static
 std::unique_ptr<ProcessMetrics> ProcessMetrics::CreateProcessMetrics(
@@ -53,7 +67,9 @@ TimeDelta ProcessMetrics::GetCumulativeCPUUsage() {
   if (sysctl(mib, std::size(mib), &info, &length, NULL, 0) < 0)
     return TimeDelta();
 
-  return Microseconds(info.ki_runtime);
+  return Microseconds(TimeValToMicroseconds(info.kp_ru.ru_utime) +
+		      TimeValToMicroseconds(info.kp_ru.ru_stime));
+
 }
 
 bool ProcessMetrics::GetIOCounters(IoCounters* io_counters) const {
@@ -61,26 +77,30 @@ bool ProcessMetrics::GetIOCounters(IoCounters* io_counters) const {
 }
 
 size_t GetSystemCommitCharge() {
-  int mib[2], pagesize;
+  int pagesize;
+#if defined(OS_DRAGONFLY)
+  unsigned int mem_total, mem_free, mem_inactive;
+#else
   unsigned long mem_total, mem_free, mem_inactive;
+#endif
   size_t length = sizeof(mem_total);
 
-  if (sysctl(mib, std::size(mib), &mem_total, &length, NULL, 0) < 0)
+  if (sysctlbyname("vm.stats.vm.v_page_count", &mem_total, &length, NULL, 0) != 0)
     return 0;
 
   length = sizeof(mem_free);
-  if (sysctlbyname("vm.stats.vm.v_free_count", &mem_free, &length, NULL, 0) < 0)
+  if (sysctlbyname("vm.stats.vm.v_free_count", &mem_free, &length, NULL, 0) != 0)
     return 0;
 
   length = sizeof(mem_inactive);
   if (sysctlbyname("vm.stats.vm.v_inactive_count", &mem_inactive, &length,
-      NULL, 0) < 0) {
+      NULL, 0) != 0) {
     return 0;
   }
 
   pagesize = getpagesize();
 
-  return mem_total - (mem_free*pagesize) - (mem_inactive*pagesize);
+  return (mem_total - mem_free - mem_inactive) * pagesize;
 }
 
 int64_t GetNumberOfThreads(ProcessHandle process) {
@@ -138,15 +158,20 @@ bool GetSystemMemoryInfo(SystemMemoryInfoKB *meminfo) {
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
@@ -180,7 +205,11 @@ size_t ProcessMetrics::GetResidentSetSize() const {
   size_t rss;
 
   if (nproc > 0) {
+#if defined(__DragonFly__)
+    rss = pp->kp_vm_rssize << GetPageShift();
+#else
     rss = pp->ki_rssize << GetPageShift();
+#endif
   } else {
     rss = 0;
   }
@@ -206,9 +235,15 @@ uint64_t ProcessMetrics::GetVmSwapBytes() const {
   size_t swrss;
 
   if (nproc > 0) {
+#if defined(__DragonFly__)
+    swrss = pp->kp_vm_swrss > pp->kp_vm_rssize
+      ? (pp->kp_vm_swrss - pp->kp_vm_rssize) << GetPageShift()
+      : 0;
+#else
     swrss = pp->ki_swrss > pp->ki_rssize
       ? (pp->ki_swrss - pp->ki_rssize) << GetPageShift()
       : 0;
+#endif
   } else {
     swrss = 0;
   }
