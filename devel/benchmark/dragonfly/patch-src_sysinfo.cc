--- src/sysinfo.cc.orig	2019-05-13 19:42:18 UTC
+++ src/sysinfo.cc
@@ -28,7 +28,7 @@
 #include <sys/time.h>
 #include <sys/types.h>  // this header must be included before 'sys/sysctl.h' to avoid compilation error on FreeBSD
 #include <unistd.h>
-#if defined BENCHMARK_OS_FREEBSD || defined BENCHMARK_OS_MACOSX || \
+#if defined BENCHMARK_OS_FREEBSD || defined BENCHMARK_OS_MACOSX || defined BENCHMARK_OS_DRAGONFLY || \
     defined BENCHMARK_OS_NETBSD || defined BENCHMARK_OS_OPENBSD
 #define BENCHMARK_HAS_SYSCTL
 #include <sys/sysctl.h>
@@ -592,6 +592,8 @@ double GetCPUCyclesPerSecond() {
   constexpr auto* FreqStr =
 #if defined(BENCHMARK_OS_FREEBSD) || defined(BENCHMARK_OS_NETBSD)
       "machdep.tsc_freq";
+#elif defined BENCHMARK_OS_DRAGONFLY
+      "hw.tsc_frequency";
 #elif defined BENCHMARK_OS_OPENBSD
       "hw.cpuspeed";
 #else
@@ -658,7 +660,7 @@ double GetCPUCyclesPerSecond() {
 }
 
 std::vector<double> GetLoadAvg() {
-#if (defined BENCHMARK_OS_FREEBSD || defined(BENCHMARK_OS_LINUX) || \
+#if (defined BENCHMARK_OS_FREEBSD || defined(BENCHMARK_OS_LINUX) || defined BENCHMARK_OS_DRAGONFLY || \
     defined BENCHMARK_OS_MACOSX || defined BENCHMARK_OS_NETBSD ||  \
     defined BENCHMARK_OS_OPENBSD) && !defined(__ANDROID__)
   constexpr int kMaxSamples = 3;
