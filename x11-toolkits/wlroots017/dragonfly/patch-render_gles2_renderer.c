--- render/gles2/renderer.c.orig	2025-11-16 14:57:27.572097000 +0100
+++ render/gles2/renderer.c	2025-11-16 14:59:19.993056000 +0100
@@ -1,4 +1,6 @@
+#if !defined(__DragonFly__)
 #define _POSIX_C_SOURCE 199309L
+#endif
 #include <assert.h>
 #include <drm_fourcc.h>
 #include <GLES2/gl2.h>
