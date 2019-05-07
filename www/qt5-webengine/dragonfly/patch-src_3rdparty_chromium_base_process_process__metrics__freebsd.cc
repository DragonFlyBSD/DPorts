--- src/3rdparty/chromium/base/process/process_metrics_freebsd.cc.intermediate	2019-05-06 09:08:08.000000000 +0000
+++ src/3rdparty/chromium/base/process/process_metrics_freebsd.cc
@@ -37,7 +37,11 @@ double ProcessMetrics::GetPlatformIndepe
   if (sysctl(mib, base::size(mib), &info, &length, NULL, 0) < 0)
     return 0;
 
+#ifdef __DragonFly__
+  return (info.kp_lwp.kl_pctcpu / FSCALE) * 100.0;
+#else
   return (info.ki_pctcpu / FSCALE) * 100.0;
+#endif
 }
 
 TimeDelta ProcessMetrics::GetCumulativeCPUUsage() {
