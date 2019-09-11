--- intern/guardedalloc/intern/mallocn.c.orig	2019-07-24 07:41:39 UTC
+++ intern/guardedalloc/intern/mallocn.c
@@ -79,7 +79,7 @@ void *aligned_malloc(size_t size, size_t
   assert(alignment == 16);
   (void)alignment;
   return malloc(size);
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
   void *result;
 
   if (posix_memalign(&result, alignment, size)) {
