--- SpaceTimeViewer/DrawView+Finding.m.intermediate	2014-02-05 13:37:15.312063000 +0000
+++ SpaceTimeViewer/DrawView+Finding.m
@@ -24,7 +24,7 @@
 #include "DrawView.h"
 
 #include <math.h>
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <values.h>
 #endif
 
