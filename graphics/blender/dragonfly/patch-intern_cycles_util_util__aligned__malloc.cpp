--- intern/cycles/util/aligned_malloc.cpp.orig	2022-09-21 21:09:10.066149000 +0200
+++ intern/cycles/util/aligned_malloc.cpp	2022-09-21 21:09:54.805119000 +0200
@@ -8,7 +8,7 @@
 
 /* Adopted from Libmv. */
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 /* Needed for memalign on Linux and _aligned_alloc on Windows. */
 #  ifdef FREE_WINDOWS
 /* Make sure _aligned_malloc is included. */
@@ -33,7 +33,7 @@
   return MEM_mallocN_aligned(size, alignment, "Cycles Aligned Alloc");
 #elif defined(_WIN32)
   return _aligned_malloc(size, alignment);
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
   void *result;
   if (posix_memalign(&result, alignment, size)) {
     /* Non-zero means allocation error
