--- src/ispc.h.orig	2020-12-19 00:48:42 UTC
+++ src/ispc.h
@@ -51,6 +51,8 @@
 #define ISPC_HOST_IS_LINUX
 #elif defined(__FreeBSD__)
 #define ISPC_HOST_IS_FREEBSD
+#elif defined(__DragonFly__)
+#define ISPC_HOST_IS_DRAGONFLY
 #elif defined(__APPLE__)
 #define ISPC_HOST_IS_APPLE
 #endif
