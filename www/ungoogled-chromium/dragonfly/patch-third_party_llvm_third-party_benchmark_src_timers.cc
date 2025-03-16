diff --git third_party/llvm/third-party/benchmark/src/timers.cc third_party/llvm/third-party/benchmark/src/timers.cc
index 667e7b2eef3c..ddd66d74e4b2 100644
--- third_party/llvm/third-party/benchmark/src/timers.cc
+++ third_party/llvm/third-party/benchmark/src/timers.cc
@@ -31,6 +31,7 @@
 #include <unistd.h>
 #if defined BENCHMARK_OS_FREEBSD || defined BENCHMARK_OS_DRAGONFLY || \
     defined BENCHMARK_OS_MACOSX
+s.cc
 #include <sys/sysctl.h>
 #endif
 #if defined(BENCHMARK_OS_MACOSX)
