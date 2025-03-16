--- render/gles2/renderer.c.ori	Fri Feb 28 09:12:44 2025
+++ render/gles2/renderer.c	Fri Feb 28 09:12:56 2025
@@ -1,4 +1,6 @@
+#if !defined(__DragonFly__)
 #define _POSIX_C_SOURCE 199309L
+#endif
 #include <assert.h>
 #include <drm_fourcc.h>
 #include <GLES2/gl2.h>
