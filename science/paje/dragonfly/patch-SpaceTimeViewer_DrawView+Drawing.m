--- SpaceTimeViewer/DrawView+Drawing.m.intermediate	2014-02-05 13:37:15.312063000 +0000
+++ SpaceTimeViewer/DrawView+Drawing.m
@@ -23,7 +23,7 @@
 
 #include "DrawView.h"
 #ifdef GNUSTEP
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <values.h>
 #else
 #include <math.h>
