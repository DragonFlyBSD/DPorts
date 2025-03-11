diff --git base/process/process_metrics_freebsd.cc base/process/process_metrics_freebsd.cc
index 49879f5d4c9b..a80cdfcb8c9a 100644
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
@@ -52,30 +54,39 @@ ProcessMetrics::GetCumulativeCPUUsage() {
   if (sysctl(mib, std::size(mib), &info, &length, NULL, 0) < 0)
     return base::ok(TimeDelta());
 
+#ifdef __FreeBSD__
   return base::ok(Microseconds(info.ki_runtime));
+#else
+  return Microseconds(TimeValToMicroseconds(info.kp_ru.ru_utime) +
+		      TimeValToMicroseconds(info.kp_ru.ru_stime));
+#endif
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
@@ -133,15 +144,20 @@ bool GetSystemMemoryInfo(SystemMemoryInfoKB *meminfo) {
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
@@ -175,7 +191,11 @@ size_t ProcessMetrics::GetResidentSetSize() const {
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
@@ -201,9 +221,15 @@ uint64_t ProcessMetrics::GetVmSwapBytes() const {
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
