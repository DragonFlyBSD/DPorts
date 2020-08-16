--- src/ylocale.h.orig	2020-05-29 16:47:00 UTC
+++ src/ylocale.h
@@ -15,7 +15,7 @@
 #error libiconv in use but included iconv.h not from libiconv
 #endif
 #if !defined(CONFIG_LIBICONV) && defined (_LIBICONV_VERSION)
-#if !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #error libiconv not in use but included iconv.h is from libiconv
 #endif
 #endif
