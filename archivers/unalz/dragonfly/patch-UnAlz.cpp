--- UnAlz.cpp.intermediate	2013-11-20 15:34:49.332875000 +0000
+++ UnAlz.cpp
@@ -37,6 +37,10 @@
 #	include <errno.h>
 #endif
 
+#if defined(__DragonFly__)
+#	include <errno.h>
+#endif
+
 #if defined(__NetBSD__) || defined(__FreeBSD__)
 #	include <sys/param.h>	// __NetBSD_Version__
 #	include <errno.h>		// iconv.h 때문에 필요 
@@ -455,7 +459,7 @@ BOOL CUnAlz::ReadLocalFileheader()
 	size_t size;
 	char inbuf[ICONV_BUF_SIZE];
 	char outbuf[ICONV_BUF_SIZE];
-#if defined(__FreeBSD__) || defined(__CYGWIN__) ||  defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) ||  defined(__NetBSD__)
 	const char *inptr = inbuf;
 #else
 	char *inptr = inbuf;
