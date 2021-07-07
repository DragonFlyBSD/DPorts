--- libopenjpeg/opj_malloc.h.orig	2021-07-07 14:32:23.831388000 +0200
+++ libopenjpeg/opj_malloc.h	2021-07-07 14:32:40.291009000 +0200
@@ -83,7 +83,7 @@
 #else /* Not _WIN32 */
 	#if defined(__sun)
 		#define HAVE_MEMALIGN
-  #elif defined(__FreeBSD__)
+  #elif defined(__FreeBSD__) || defined(__DragonFly__)
     #define HAVE_POSIX_MEMALIGN
 	/* Linux x86_64 and OSX always align allocations to 16 bytes */
 	#elif !defined(__amd64__) && !defined(__APPLE__) && !defined(_AIX)
