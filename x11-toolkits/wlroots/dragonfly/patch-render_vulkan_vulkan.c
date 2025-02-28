--- render/vulkan/vulkan.c.ori	Thu Feb 27 20:57:28 2025
+++ render/vulkan/vulkan.c	Thu Feb 27 21:03:58 2025
@@ -1,6 +1,7 @@
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) || !defined(__DragonFly__)
 #define _POSIX_C_SOURCE 200809L
 #endif
+#define __BSD_VISIBLE 1
 #include <assert.h>
 #include <fcntl.h>
 #include <math.h>
