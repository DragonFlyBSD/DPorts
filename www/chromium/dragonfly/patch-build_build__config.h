--- build/build_config.h.orig	2016-11-10 22:02:09.000000000 +0200
+++ build/build_config.h
@@ -49,7 +49,7 @@
 #elif defined(_WIN32)
 #define OS_WIN 1
 #define TOOLKIT_VIEWS 1
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define OS_FREEBSD 1
 #elif defined(__NetBSD__)
 #define OS_NETBSD 1
