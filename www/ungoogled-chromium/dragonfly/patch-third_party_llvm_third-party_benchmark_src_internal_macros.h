diff --git third_party/llvm/third-party/benchmark/src/internal_macros.h third_party/llvm/third-party/benchmark/src/internal_macros.h
index f4894ba8e65d..e3c48076cb13 100644
--- third_party/llvm/third-party/benchmark/src/internal_macros.h
+++ third_party/llvm/third-party/benchmark/src/internal_macros.h
@@ -63,6 +63,8 @@
       #define BENCHMARK_OS_IOS 1
     #endif
   #endif
+#elif defined(__DragonFly__)
+  #define BENCHMARK_OS_DRAGONFLY 1
 #elif defined(__FreeBSD__)
   #define BENCHMARK_OS_FREEBSD 1
 #elif defined(__NetBSD__)
