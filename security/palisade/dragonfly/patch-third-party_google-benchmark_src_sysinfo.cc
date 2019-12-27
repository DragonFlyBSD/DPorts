--- third-party/google-benchmark/src/sysinfo.cc.orig	2019-11-05 19:46:13 UTC
+++ third-party/google-benchmark/src/sysinfo.cc
@@ -29,7 +29,7 @@
 #include <sys/types.h>  // this header must be included before 'sys/sysctl.h' to avoid compilation error on FreeBSD
 #include <unistd.h>
 #if defined BENCHMARK_OS_FREEBSD || defined BENCHMARK_OS_MACOSX || \
-    defined BENCHMARK_OS_NETBSD || defined BENCHMARK_OS_OPENBSD
+    defined BENCHMARK_OS_NETBSD || defined BENCHMARK_OS_OPENBSD || defined __DragonFly__
 #define BENCHMARK_HAS_SYSCTL
 #include <sys/sysctl.h>
 #endif
