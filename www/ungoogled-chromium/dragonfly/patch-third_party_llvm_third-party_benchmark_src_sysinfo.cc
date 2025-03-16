diff --git third_party/llvm/third-party/benchmark/src/sysinfo.cc third_party/llvm/third-party/benchmark/src/sysinfo.cc
index 46df973b069a..882f4b356a8a 100644
--- third_party/llvm/third-party/benchmark/src/sysinfo.cc
+++ third_party/llvm/third-party/benchmark/src/sysinfo.cc
@@ -733,6 +733,8 @@ double GetCPUCyclesPerSecond(CPUInfo::Scaling scaling) {
   constexpr auto* freqStr =
 #if defined(BENCHMARK_OS_FREEBSD) || defined(BENCHMARK_OS_NETBSD)
       "machdep.tsc_freq";
+#elif defined BENCHMARK_OS_DRAGONFLY
+      "hw.tsc_frequency";
 #elif defined BENCHMARK_OS_OPENBSD
       "hw.cpuspeed";
 #elif defined BENCHMARK_OS_DRAGONFLY
