--- camlibs/st2205/st2205.c.intermediate	2020-11-22 17:24:57.000000000 +0000
+++ camlibs/st2205/st2205.c
@@ -37,6 +37,15 @@
 #include <gphoto2/gphoto2-result.h>
 #include "st2205.h"
 
+#ifdef __DragonFly__
+#ifndef LE32TOH
+#define LE32TOH(x)	(void) (x)
+#endif
+#ifndef BE16TOH
+#define BE16TOH(x)	(x) = be16toh(x)
+#endif
+#endif
+
 struct image_table_entry {
 	uint8_t present;  /* 1 when this image is present, 0 when deleted */
 	uint32_t address; /* memory address where this image is stored */
