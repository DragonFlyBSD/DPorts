--- libs/audiographer/private/gdither/gdither.cc.orig	2017-09-15 20:56:23 UTC
+++ libs/audiographer/private/gdither/gdither.cc
@@ -27,8 +27,10 @@
    their natural lives. or longer. <paul@linuxaudiosystems.com>
 */
 
+#ifndef __DragonFly__
 #define	_ISOC9X_SOURCE	1
 #define _ISOC99_SOURCE	1
+#endif
 #ifdef __cplusplus
 #include <cmath>
 #else
