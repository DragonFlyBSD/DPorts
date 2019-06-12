--- src/internal_macros.h.orig	2019-05-13 19:42:18 UTC
+++ src/internal_macros.h
@@ -52,6 +52,8 @@
       #define BENCHMARK_OS_IOS 1
     #endif
   #endif
+#elif defined(__DragonFly__)
+  #define BENCHMARK_OS_DRAGONFLY 1
 #elif defined(__FreeBSD__)
   #define BENCHMARK_OS_FREEBSD 1
 #elif defined(__NetBSD__)
