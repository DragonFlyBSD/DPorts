--- src/libfaketime.c.orig
+++ src/libfaketime.c
@@ -25,6 +25,12 @@
 
 #define _LARGEFILE64_SOURCE 1   /* required for stat64 on musl */
 
+#ifdef __DragonFly__
+/* Other headers pull in <sys/time.h>; rename its gettimeofday() first. */
+#define gettimeofday bsd_gettimeofday
+#include <sys/time.h>
+#undef gettimeofday
+#endif
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdint.h>
@@ -41,13 +47,13 @@
 #endif
 #endif
 #include <time.h>
-#if defined (MACOS_DYLD_INTERPOSE) || defined (__FreeBSD__)
+#if defined (MACOS_DYLD_INTERPOSE) || defined (__FreeBSD__) || defined (__DragonFly__)
 #include <pthread.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define gettimeofday bsd_gettimeofday
 #endif
 #include <sys/time.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #undef gettimeofday
 #endif
 #include <utime.h>
@@ -155,6 +161,10 @@
 /* some systems lack raw clock */
 #ifndef CLOCK_MONOTONIC_RAW
 #define CLOCK_MONOTONIC_RAW (CLOCK_MONOTONIC + 1)
+#endif
+
+#ifdef __DragonFly__
+#define stat64 stat
 #endif
 
 /* On some platforms (e.g. FreeBSD 15) CLOCK_BOOTTIME is an alias of another clock.
