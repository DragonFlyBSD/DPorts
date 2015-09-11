--- src/iconv_tools.c.orig	2012-05-04 00:08:27.000000000 +0300
+++ src/iconv_tools.c
@@ -81,7 +81,7 @@ void iconv_convert(size_t *a, char *buff
 			&& (iconv_cd[iconv_selected - 1] != (iconv_t) (-1))) {
 		int bytes;
 		size_t dummy1, dummy2;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		const char *ptr = buff_in;
 #else
 		char *ptr = buff_in;
