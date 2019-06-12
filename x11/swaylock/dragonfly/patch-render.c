--- render.c.orig	2019-04-29 14:37:47 UTC
+++ render.c
@@ -5,6 +5,9 @@
 #include "background-image.h"
 #include "swaylock.h"
 
+#ifdef __DragonFly__
+#undef M_PI
+#endif
 #define M_PI 3.14159265358979323846
 const float TYPE_INDICATOR_RANGE = M_PI / 3.0f;
 const float TYPE_INDICATOR_BORDER_THICKNESS = M_PI / 128.0f;
