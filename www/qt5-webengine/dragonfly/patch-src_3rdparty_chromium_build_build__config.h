--- src/3rdparty/chromium/build/build_config.h.orig	2018-04-10 14:05:55.000000000 +0000
+++ src/3rdparty/chromium/build/build_config.h
@@ -50,6 +50,9 @@
 #define OS_WIN 1
 #elif defined(__FreeBSD__)
 #define OS_FREEBSD 1
+#elif defined(__DragonFly__)
+#define OS_FREEBSD 1
+#define OS_DRAGONFLY 1
 #elif defined(__NetBSD__)
 #define OS_NETBSD 1
 #elif defined(__OpenBSD__)
