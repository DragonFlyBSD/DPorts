--- src/gallium/include/pipe/p_config.h.orig	2013-11-13 00:44:49.000000000 +0000
+++ src/gallium/include/pipe/p_config.h
@@ -186,7 +186,7 @@
 #define PIPE_OS_ANDROID
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define PIPE_OS_FREEBSD
 #define PIPE_OS_BSD
 #define PIPE_OS_UNIX
