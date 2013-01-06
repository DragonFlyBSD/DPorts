--- lib/Resource.cc.orig	2005-04-06 23:16:50.000000000 +0200
+++ lib/Resource.cc	2013-01-06 11:10:51.233927000 +0100
@@ -28,6 +28,7 @@
 #include <X11/Xlib.h>
 #include <X11/Xresource.h>
 
+#include <cstring>
 #include <stdio.h>
 
 
