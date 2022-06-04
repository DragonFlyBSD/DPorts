--- src/ck.h.orig	2022-01-19 17:53:51 UTC
+++ src/ck.h
@@ -18,6 +18,9 @@
 #endif
 #endif
 #include "first.h"
+#ifdef __DragonFly__
+#include <string.h>
+#endif
 #if defined(__FreeBSD__) || defined(__sun)
 #ifndef _RSIZE_T_DEFINED /* expecting __EXT1_VISIBLE 1 and _RSIZE_T_DEFINED */
 #define _RSIZE_T_DEFINED
