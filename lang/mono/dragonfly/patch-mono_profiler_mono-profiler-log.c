--- mono/profiler/mono-profiler-log.c.orig	2017-07-20 18:10:59 UTC
+++ mono/profiler/mono-profiler-log.c
@@ -55,6 +55,10 @@
 #include <zlib.h>
 #endif
 
+#ifdef __DragonFly__
+#define GLIBC_HAS_CPU_COUNT
+#endif
+
 #ifdef HAVE_SCHED_GETAFFINITY
 #  ifndef GLIBC_HAS_CPU_COUNT
 static int
