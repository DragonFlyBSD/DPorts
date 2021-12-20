--- wvdecrypter/cdm/build/build_config.h.orig	2021-08-06 12:32:58 UTC
+++ wvdecrypter/cdm/build/build_config.h
@@ -49,7 +49,7 @@
 #elif defined(_WIN32)
 #define OS_WIN 1
 #define TOOLKIT_VIEWS 1
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define OS_FREEBSD 1
 #elif defined(__OpenBSD__)
 #define OS_OPENBSD 1
