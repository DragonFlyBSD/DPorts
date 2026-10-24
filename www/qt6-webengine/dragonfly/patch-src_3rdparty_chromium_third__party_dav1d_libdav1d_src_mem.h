--- src/3rdparty/chromium/third_party/dav1d/libdav1d/src/mem.h.orig	2026-05-08 07:54:08 UTC
+++ src/3rdparty/chromium/third_party/dav1d/libdav1d/src/mem.h
@@ -32,7 +32,7 @@
 
 #include <stdlib.h>
 
-#if defined(_WIN32) || HAVE_MEMALIGN
+#if (defined(_WIN32) || HAVE_MEMALIGN) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
