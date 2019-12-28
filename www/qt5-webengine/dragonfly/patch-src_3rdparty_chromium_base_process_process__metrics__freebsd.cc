--- src/3rdparty/chromium/base/process/process_metrics_freebsd.cc.orig	2019-12-20 18:22:01 UTC
+++ src/3rdparty/chromium/base/process/process_metrics_freebsd.cc
@@ -39,7 +39,11 @@ double ProcessMetrics::GetPlatformIndepe
   if (sysctl(mib, base::size(mib), &info, &length, NULL, 0) < 0)
     return 0;
 
+#ifdef __DragonFly__
+  return (info.kp_lwp.kl_pctcpu / FSCALE) * 100.0;
+#else
   return (info.ki_pctcpu / FSCALE) * 100.0;
+#endif
 }
 
 TimeDelta ProcessMetrics::GetCumulativeCPUUsage() {
@@ -129,6 +133,9 @@ bool GetSystemMemoryInfo(SystemMemoryInf
 }
 
 int ProcessMetrics::GetOpenFdCount() const {
+#if defined(__DragonFly__)
+  return -1;
+#else
   struct kinfo_file * kif;
   int cnt;
 
@@ -138,6 +145,7 @@ int ProcessMetrics::GetOpenFdCount() con
   free(kif);
 
   return cnt;
+#endif
 }
 
 int ProcessMetrics::GetOpenFdSoftLimit() const {
