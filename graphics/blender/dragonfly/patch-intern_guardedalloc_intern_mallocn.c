--- intern/guardedalloc/intern/mallocn.c.orig	2020-02-13 09:42:10 UTC
+++ intern/guardedalloc/intern/mallocn.c
@@ -72,7 +72,8 @@ void *aligned_malloc(size_t size, size_t
 {
 #ifdef _WIN32
   return _aligned_malloc(size, alignment);
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || \
+  defined(__DragonFly__)
   void *result;
 
   if (posix_memalign(&result, alignment, size)) {
