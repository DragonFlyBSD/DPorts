--- common/_elftc.h.orig	2015-08-31 19:53:08 UTC
+++ common/_elftc.h
@@ -397,6 +397,7 @@ extern const char *__progname;
 #define	ELFTC_BYTE_ORDER_BIG_ENDIAN		_BIG_ENDIAN
 
 #define	ELFTC_HAVE_MMAP				1
+#define	ELFTC_HAVE_STRMODE			1
 
 #endif
 
