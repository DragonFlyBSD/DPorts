--- intern/cycles/util/util_aligned_malloc.cpp.orig	2015-06-30 15:38:37.000000000 +0300
+++ intern/cycles/util/util_aligned_malloc.cpp
@@ -21,7 +21,7 @@
 
 /* Adopted from Libmv. */
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 /* Needed for memalign on Linux and _aligned_alloc on Windows. */
 #  ifdef FREE_WINDOWS
 /* Make sure _aligned_malloc is included. */
@@ -53,7 +53,7 @@ void *util_aligned_malloc(size_t size, i
 	 */
 	assert(alignment == 16);
 	return malloc(size);
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	void *result;
 	if(posix_memalign(&result, alignment, size)) {
 		/* Non-zero means allocation error
