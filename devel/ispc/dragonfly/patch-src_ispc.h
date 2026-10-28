--- src/ispc.h.orig	2026-10-26 01:17:16 UTC
+++ src/ispc.h
@@ -21,6 +21,8 @@
 #define ISPC_HOST_IS_LINUX
 #elif defined(__FreeBSD__)
 #define ISPC_HOST_IS_FREEBSD
+#elif defined(__DragonFly__)
+#define ISPC_HOST_IS_DRAGONFLY
 #elif defined(__APPLE__)
 #define ISPC_HOST_IS_APPLE
 #endif
