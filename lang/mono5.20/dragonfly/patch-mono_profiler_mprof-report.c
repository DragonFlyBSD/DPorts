--- mono/profiler/mprof-report.c.orig	2019-07-16 18:16:12 UTC
+++ mono/profiler/mprof-report.c
@@ -15,7 +15,7 @@
 #include <assert.h>
 #include <stdio.h>
 #include <time.h>
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__) && !defined(__NetBSD__)
 #include <malloc.h>
 #endif
 #include <unistd.h>
