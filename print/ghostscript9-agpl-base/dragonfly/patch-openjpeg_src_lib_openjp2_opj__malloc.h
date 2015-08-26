--- openjpeg/src/lib/openjp2/opj_malloc.h.orig	2015-03-30 08:21:24 UTC
+++ openjpeg/src/lib/openjp2/opj_malloc.h
@@ -98,7 +98,7 @@ Allocate memory aligned to a 16 byte bou
 #else /* Not _WIN32 */
 	#if defined(__sun)
 		#define HAVE_MEMALIGN
-  #elif defined(__FreeBSD__)
+  #elif defined(__FreeBSD__) || defined __DragonFly__
     #define HAVE_POSIX_MEMALIGN
 	/* Linux x86_64 and OSX always align allocations to 16 bytes */
 	#elif !defined(__amd64__) && !defined(__APPLE__) && !defined(_AIX)
