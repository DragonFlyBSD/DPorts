--- render/vulkan/vulkan.c.orig	2025-11-16 14:50:25.988535000 +0100
+++ render/vulkan/vulkan.c	2025-11-16 14:50:16.688453000 +0100
@@ -1,4 +1,4 @@
-#if defined(__FreeBSD__)
+#if defined(__DragonFly__) || defined(__FreeBSD__)
 #undef _POSIX_C_SOURCE
 #endif
 #include <assert.h>
