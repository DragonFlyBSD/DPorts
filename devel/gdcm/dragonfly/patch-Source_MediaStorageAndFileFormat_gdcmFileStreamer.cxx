--- Source/MediaStorageAndFileFormat/gdcmFileStreamer.cxx.orig	2024-05-03 12:14:30 UTC
+++ Source/MediaStorageAndFileFormat/gdcmFileStreamer.cxx
@@ -35,7 +35,7 @@
 #include <io.h>
 typedef int64_t off64_t;
 #else
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__EMSCRIPTEN__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__) || defined(__EMSCRIPTEN__)
 #  define off64_t off_t
 #endif
 #include <unistd.h> // ftruncate
