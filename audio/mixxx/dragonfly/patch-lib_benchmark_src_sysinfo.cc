--- lib/benchmark/src/sysinfo.cc.orig	2021-06-28 20:04:59 UTC
+++ lib/benchmark/src/sysinfo.cc
@@ -29,7 +29,7 @@
 #include <sys/types.h>  // this header must be included before 'sys/sysctl.h' to avoid compilation error on FreeBSD
 #include <unistd.h>
 #if defined BENCHMARK_OS_FREEBSD || defined BENCHMARK_OS_MACOSX || \
-    defined BENCHMARK_OS_NETBSD || defined BENCHMARK_OS_OPENBSD
+    defined BENCHMARK_OS_NETBSD || defined BENCHMARK_OS_OPENBSD || defined(__DragonFly__)
 #define BENCHMARK_HAS_SYSCTL
 #include <sys/sysctl.h>
 #endif
@@ -599,6 +599,9 @@ double GetCPUCyclesPerSecond() {
 
 #elif defined BENCHMARK_HAS_SYSCTL
   constexpr auto* FreqStr =
+#if defined(__DragonFly__)
+      "hw.tsc_frequency";
+#else
 #if defined(BENCHMARK_OS_FREEBSD) || defined(BENCHMARK_OS_NETBSD)
       "machdep.tsc_freq";
 #elif defined BENCHMARK_OS_OPENBSD
@@ -606,6 +609,7 @@ double GetCPUCyclesPerSecond() {
 #else
       "hw.cpufrequency";
 #endif
+#endif
   unsigned long long hz = 0;
 #if defined BENCHMARK_OS_OPENBSD
   if (GetSysctl(FreqStr, &hz)) return hz * 1000000;
@@ -667,7 +671,7 @@ double GetCPUCyclesPerSecond() {
 }
 
 std::vector<double> GetLoadAvg() {
-#if (defined BENCHMARK_OS_FREEBSD || defined(BENCHMARK_OS_LINUX) || \
+#if (defined BENCHMARK_OS_FREEBSD || defined(BENCHMARK_OS_LINUX) || defined(__DragonFly__) || \
     defined BENCHMARK_OS_MACOSX || defined BENCHMARK_OS_NETBSD ||  \
     defined BENCHMARK_OS_OPENBSD) && !defined(__ANDROID__)
   constexpr int kMaxSamples = 3;
