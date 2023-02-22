--- xbmc/windowing/X11/GLContextEGL.h.orig	2023-02-09 11:29:17.744231000 +0100
+++ xbmc/windowing/X11/GLContextEGL.h	2023-02-09 11:32:22.616589000 +0100
@@ -13,7 +13,7 @@
 #include "threads/CriticalSection.h"
 
 #include <EGL/eglext.h>
-#include <EGL/eglext_angle.h>
+#include <EGL/eglextchromium.h>
 #include <X11/Xutil.h>
 
 class CGLContextEGL : public CGLContext
