--- intern/cycles/util/util_aligned_malloc.cpp.orig	2020-02-11 13:35:06 UTC
+++ intern/cycles/util/util_aligned_malloc.cpp
@@ -21,7 +21,7 @@
 
 /* Adopted from Libmv. */
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 /* Needed for memalign on Linux and _aligned_alloc on Windows. */
 #  ifdef FREE_WINDOWS
 /* Make sure _aligned_malloc is included. */
@@ -46,7 +46,8 @@ void *util_aligned_malloc(size_t size, i
   return MEM_mallocN_aligned(size, alignment, "Cycles Aligned Alloc");
 #elif defined(_WIN32)
   return _aligned_malloc(size, alignment);
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) ||
+  defined(__DragonFly__)
   void *result;
   if (posix_memalign(&result, alignment, size)) {
     /* Non-zero means allocation error
