
Needed for C code in CXX

--- avidemux_core/ADM_core/include/ADM_default.h.orig	2015-06-10 08:42:47.000000000 +0300
+++ avidemux_core/ADM_core/include/ADM_default.h
@@ -38,6 +38,10 @@
 #include "ADM_misc.h"
 #endif
 
+#ifdef __DragonFly__
+#include <machine/int_const.h>
+#endif
+
 #ifdef __cplusplus
 extern "C" 
 {
