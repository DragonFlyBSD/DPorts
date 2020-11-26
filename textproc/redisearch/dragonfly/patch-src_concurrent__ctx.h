--- src/concurrent_ctx.h.orig	2020-08-30 13:41:03 UTC
+++ src/concurrent_ctx.h
@@ -7,7 +7,7 @@
 #include <time.h>
 #include <dep/thpool/thpool.h>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC
 #endif
 
