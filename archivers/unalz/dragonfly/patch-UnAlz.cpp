--- UnAlz.cpp.intermediate	2013-06-20 23:42:25.780595000 +0000
+++ UnAlz.cpp
@@ -455,7 +455,7 @@ BOOL CUnAlz::ReadLocalFileheader()
 	size_t size;
 	char inbuf[ICONV_BUF_SIZE];
 	char outbuf[ICONV_BUF_SIZE];
-#if defined(__FreeBSD__) || defined(__CYGWIN__) ||  defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__FreeBSD__) ||  defined(__NetBSD__)
 	const char *inptr = inbuf;
 #else
 	char *inptr = inbuf;
