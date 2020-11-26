--- src/modules/sysinfo/cpuclock/cpuclock.h.orig	2020-07-26 16:39:12 UTC
+++ src/modules/sysinfo/cpuclock/cpuclock.h
@@ -26,7 +26,7 @@ EINTERN void _cpuclock_config_updated(In
 EINTERN void _cpuclock_set_governor(const char *governor);
 EINTERN void _cpuclock_set_frequency(int frequency);
 EINTERN void _cpuclock_set_pstate(int min, int max, int turbo);
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 EINTERN int _cpuclock_sysctl_frequency(int new_perf);
 #endif
 
