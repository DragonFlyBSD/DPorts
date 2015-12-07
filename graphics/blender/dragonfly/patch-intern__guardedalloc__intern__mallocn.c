--- intern/guardedalloc/intern/mallocn.c.orig	2015-06-30 04:04:45.000000000 +0300
+++ intern/guardedalloc/intern/mallocn.c
@@ -75,7 +75,7 @@ void *aligned_malloc(size_t size, size_t
 	assert(alignment == 16);
 	(void)alignment;
 	return malloc(size);
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	void *result;
 
 	if (posix_memalign(&result, alignment, size)) {
