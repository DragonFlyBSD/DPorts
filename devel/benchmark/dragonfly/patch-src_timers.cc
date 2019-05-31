--- src/timers.cc.orig	2019-05-13 19:42:18 UTC
+++ src/timers.cc
@@ -28,7 +28,7 @@
 #include <sys/time.h>
 #include <sys/types.h>  // this header must be included before 'sys/sysctl.h' to avoid compilation error on FreeBSD
 #include <unistd.h>
-#if defined BENCHMARK_OS_FREEBSD || defined BENCHMARK_OS_MACOSX
+#if defined BENCHMARK_OS_FREEBSD || defined BENCHMARK_OS_MACOSX || defined BENCHMARK_OS_DRAGONFLY
 #include <sys/sysctl.h>
 #endif
 #if defined(BENCHMARK_OS_MACOSX)
