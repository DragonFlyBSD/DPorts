--- chromium/build_config.h.orig	2014-03-27 17:49:30.000000000 +0200
+++ chromium/build_config.h
@@ -37,7 +37,7 @@
 #elif defined(_WIN32)
 #define OS_WIN 1
 #define TOOLKIT_VIEWS 1
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define OS_FREEBSD 1
 #define TOOLKIT_GTK
 #elif defined(__OpenBSD__)
