--- src/tools/singlejar/mapped_file.h.orig	1979-12-31 23:00:00 UTC
+++ src/tools/singlejar/mapped_file.h
@@ -35,8 +35,8 @@
  *
  * The implementation is 64-bit Linux or OSX specific.
  */
-#if !((defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__)) && \
-      __SIZEOF_POINTER__ == 8)
+#if !((defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
+       defined(__DragonFly__)) && __SIZEOF_POINTER__ == 8)
 #error This code for 64 bit Unix.
 #endif
 
