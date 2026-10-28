--- src/zmalloc.h.orig	2026-10-26 06:08:51 UTC
+++ src/zmalloc.h
@@ -57,7 +57,7 @@
      defined(USE_MALLOC_USABLE_SIZE))
 
 /* Includes for malloc_usable_size() */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <malloc_np.h>
 #else
 #ifndef _GNU_SOURCE
