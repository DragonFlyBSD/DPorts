--- src/gallium/include/pipe/p_config.h.orig	2009-12-22 03:31:19.000000000 +0100
+++ src/gallium/include/pipe/p_config.h	2012-12-22 09:21:15.016299000 +0100
@@ -124,7 +124,7 @@
 #define PIPE_OS_LINUX
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define PIPE_OS_BSD
 #endif
 
