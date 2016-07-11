--- src/global.h.orig	2003-02-24 00:44:19.000000000 +0200
+++ src/global.h
@@ -19,6 +19,7 @@ using namespace std;
 #include <stdlib.h>
 #include <X11/Xlib.h>
 #include <X11/Xutil.h>
+#include <cstring>
 
 #ifdef SHAPE
 #include <X11/extensions/shape.h>
