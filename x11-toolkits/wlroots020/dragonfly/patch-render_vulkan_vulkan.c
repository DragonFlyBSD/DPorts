--- render/vulkan/vulkan.c.orig	2026-07-07 21:46:09 UTC
+++ render/vulkan/vulkan.c
@@ -1,4 +1,4 @@
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #undef _POSIX_C_SOURCE
 #endif
 #include <assert.h>
