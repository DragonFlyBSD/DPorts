--- src/search_ctx.h.orig
+++ src/search_ctx.h
@@ -21,7 +21,7 @@
 extern "C" {
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC
 #endif
 
