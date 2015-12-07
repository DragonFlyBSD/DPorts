--- intern/guardedalloc/intern/mallocn_intern.h.orig	2015-06-30 16:07:35.000000000 +0300
+++ intern/guardedalloc/intern/mallocn_intern.h
@@ -87,7 +87,7 @@
 #  define UNLIKELY(x)     (x)
 #endif
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 // Needed for memalign on Linux and _aligned_alloc on Windows.
 #  ifdef FREE_WINDOWS
 /* make sure _aligned_malloc is included */
