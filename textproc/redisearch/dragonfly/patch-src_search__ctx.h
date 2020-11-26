--- src/search_ctx.h.orig	2020-08-30 13:41:03 UTC
+++ src/search_ctx.h
@@ -13,7 +13,7 @@
 extern "C" {
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC
 #endif
 
