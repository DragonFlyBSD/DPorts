--- openjpeg/libopenjpeg/opj_malloc.h.orig	2012-08-08 08:01:36 UTC
+++ openjpeg/libopenjpeg/opj_malloc.h
@@ -84,7 +84,7 @@ Allocate memory aligned to a 16 byte bou
 	#if defined(__sun)
 		#define HAVE_MEMALIGN
 	/* Linux x86_64 and OSX always align allocations to 16 bytes */
-	#elif !defined(__amd64__) && !defined(__APPLE__) && !defined(_AIX) && !defined(__FreeBSD__)
+	#elif !defined(__amd64__) && !defined(__APPLE__) && !defined(_AIX) && !defined(__FreeBSD__) && !defined __DragonFly__
 		#define HAVE_MEMALIGN
 		#include <malloc.h>			
 	#endif
