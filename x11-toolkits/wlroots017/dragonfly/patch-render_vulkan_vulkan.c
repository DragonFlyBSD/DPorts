--- render/vulkan/vulkan.c.orig	2025-11-16 14:54:34.560635000 +0100
+++ render/vulkan/vulkan.c	2025-11-16 14:55:08.640924000 +0100
@@ -1,4 +1,4 @@
-#if !defined(__FreeBSD__)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #define _POSIX_C_SOURCE 200809L
 #endif
 #include <assert.h>
