--- src/ChezScheme/c/version.h.orig	2021-10-24 04:17:58 UTC
+++ src/ChezScheme/c/version.h
@@ -79,7 +79,7 @@ typedef int tputsputcchar;
 #define UNUSED __attribute__((__unused__))
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #define NOBLOCK O_NONBLOCK
 #define LOAD_SHARED_OBJECT
 #define USE_MMAP
