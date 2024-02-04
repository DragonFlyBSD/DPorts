--- src/zmalloc.h.orig	2023-11-01 12:38:13 UTC
+++ src/zmalloc.h
@@ -78,7 +78,7 @@
      defined(USE_MALLOC_USABLE_SIZE))
 
 /* Includes for malloc_usable_size() */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <malloc_np.h>
 #else
 #ifndef _GNU_SOURCE
