--- biewlib/sysdep/generic/__config.h.intermediate	2020-11-22 06:22:13.000000000 +0000
+++ biewlib/sysdep/generic/__config.h
@@ -86,6 +86,10 @@
     which fortunately should be fine for non-16bit platforms.
 */
 
+#ifdef __DragonFly__
+#include <sys/endian.h>
+#endif
+
 #ifndef	__LITTLE_ENDIAN
 #define	__LITTLE_ENDIAN LITTLE_ENDIAN
 #endif
