--- src/ck.h.orig	2021-12-04 14:40:24 UTC
+++ src/ck.h
@@ -18,6 +18,9 @@
 #endif
 #endif
 #include "first.h"
+#ifdef __DragonFly__
+#include <string.h>
+#endif
 #ifdef __FreeBSD__
 #ifndef _RSIZE_T_DEFINED /* expecting __EXT1_VISIBLE 1 and _RSIZE_T_DEFINED */
 #define _RSIZE_T_DEFINED
