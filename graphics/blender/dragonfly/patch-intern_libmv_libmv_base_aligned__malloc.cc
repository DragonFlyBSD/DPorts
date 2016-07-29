--- intern/libmv/libmv/base/aligned_malloc.cc.orig	2016-03-23 10:49:49.000000000 +0200
+++ intern/libmv/libmv/base/aligned_malloc.cc
@@ -21,7 +21,7 @@
 #include "libmv/base/aligned_malloc.h"
 #include "libmv/logging/logging.h"
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 // Needed for memalign on Linux and _aligned_alloc on Windows.
 #  ifdef FREE_WINDOWS
 /* make sure _aligned_malloc is included */
@@ -49,7 +49,7 @@ void *aligned_malloc(int size, int align
   // they work natively with SSE types with no further work.
   CHECK_EQ(alignment, 16);
   return malloc(size);
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
   void *result;
 
   if (posix_memalign(&result, alignment, size)) {
