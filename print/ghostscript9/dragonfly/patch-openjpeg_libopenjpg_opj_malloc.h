--- openjpeg/libopenjpeg/opj_malloc.h.intermediate	2012-12-19 13:26:20.521833000 +0100
+++ openjpeg/libopenjpeg/opj_malloc.h	2012-12-19 13:26:49.100792000 +0100
@@ -85,6 +85,8 @@
 		#define HAVE_MEMALIGN
 	#elif defined(__FreeBSD__)
 		#undef HAVE_MEMALIGN
+	#elif defined(__DragonFly__)
+		#undef HAVE_MEMALIGN
 	/* Linux x86_64 and OSX always align allocations to 16 bytes */
 	#elif !defined(__amd64__) && !defined(__APPLE__) && !defined(_AIX) && !defined(__FreeBSD__)
 		#define HAVE_MEMALIGN
