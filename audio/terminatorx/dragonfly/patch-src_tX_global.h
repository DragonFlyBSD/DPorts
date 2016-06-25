--- src/tX_global.h.orig	2011-01-30 23:01:31.000000000 +0200
+++ src/tX_global.h
@@ -53,6 +53,10 @@ extern "C" {
 #include <config.h>
 #endif
 
+#ifdef __cplusplus
+#include <cstring>
+#endif
+
 #include <zlib.h>
 	
 #ifdef ENABLE_DEBUG_OUTPUT	
