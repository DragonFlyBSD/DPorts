--- src/3rdparty/chromium/base/process/process_metrics_freebsd.cc.orig	2020-04-21 16:56:35 UTC
+++ src/3rdparty/chromium/base/process/process_metrics_freebsd.cc
@@ -53,7 +53,11 @@ double ProcessMetrics::GetPlatformIndepe
   if (sysctl(mib, base::size(mib), &info, &length, NULL, 0) < 0)
     return 0;
 
+#ifdef __DragonFly__
+  return (info.kp_lwp.kl_pctcpu / FSCALE) * 100.0;
+#else
   return (info.ki_pctcpu / FSCALE) * 100.0;
+#endif
 }
 
 TimeDelta ProcessMetrics::GetCumulativeCPUUsage() {
@@ -143,6 +147,9 @@ bool GetSystemMemoryInfo(SystemMemoryInf
 }
 
 int ProcessMetrics::GetOpenFdCount() const {
+#if defined(__DragonFly__)
+  return -1;
+#else
   struct kinfo_file * kif;
   int cnt;
 
@@ -152,6 +159,7 @@ int ProcessMetrics::GetOpenFdCount() con
   free(kif);
 
   return cnt;
+#endif
 }
 
 int ProcessMetrics::GetOpenFdSoftLimit() const {
@@ -185,7 +193,11 @@ size_t ProcessMetrics::GetResidentSetSiz
   size_t rss;
 
   if (nproc > 0) {
+#ifdef __DragonFly__
+    rss = pp->kp_vm_rssize << GetPageShift();
+#else
     rss = pp->ki_rssize << GetPageShift();
+#endif
   } else {
     rss = 0;
   }
@@ -211,9 +223,15 @@ uint64_t ProcessMetrics::GetVmSwapBytes(
   size_t swrss;
 
   if (nproc > 0) {
+#ifdef __DragonFly__
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
