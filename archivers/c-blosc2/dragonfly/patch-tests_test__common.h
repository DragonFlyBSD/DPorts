--- tests/test_common.h.orig	2021-10-02 12:17:56 UTC
+++ tests/test_common.h
@@ -63,13 +63,13 @@ inline static void* blosc_test_malloc(co
   void* block = NULL;
   int32_t res = 0;
 
-#if defined(_ISOC11_SOURCE) || (defined(__FreeBSD__) && __STDC_VERSION__ >= 201112L)
+#if defined(_ISOC11_SOURCE) || ((defined(__DragonFly__) || defined(__FreeBSD__)) && __STDC_VERSION__ >= 201112L)
   /* C11 aligned allocation. 'size' must be a multiple of the alignment. */
   block = aligned_alloc(alignment, size);
 #elif defined(_WIN32)
   /* A (void *) cast needed for avoiding a warning with MINGW :-/ */
   block = (void *)_aligned_malloc(size, alignment);
-#elif _POSIX_C_SOURCE >= 200112L || _XOPEN_SOURCE >= 600
+#elif _POSIX_C_SOURCE >= 200112L || _XOPEN_SOURCE >= 600 || defined(__DragonFly__)
   /* Platform does have an implementation of posix_memalign */
   res = posix_memalign(&block, alignment, size);
 #elif defined(__APPLE__)
