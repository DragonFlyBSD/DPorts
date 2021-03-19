--- tests/spec/nv_copy_depth_to_color/nv_copy_depth_to_color.c.intermediate	2021-03-19 12:08:24.000000000 +0000
+++ tests/spec/nv_copy_depth_to_color/nv_copy_depth_to_color.c
@@ -34,7 +34,7 @@
 
 #include "piglit-util-gl.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #endif
 
