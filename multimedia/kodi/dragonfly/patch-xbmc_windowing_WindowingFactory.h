--- xbmc/windowing/WindowingFactory.h.orig	2018-08-04 16:06:36.870714000 +0200
+++ xbmc/windowing/WindowingFactory.h	2018-08-04 16:07:17.981603000 +0200
@@ -38,10 +38,10 @@
 #elif defined(TARGET_LINUX)   && defined(HAS_GLES) && defined(HAS_EGL) && !defined(HAVE_X11)
 #include "egl/WinSystemEGL.h"
 
-#elif defined(TARGET_FREEBSD)   && defined(HAVE_X11)   && defined(HAS_GL)
+#elif (defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)) && defined(HAVE_X11)   && defined(HAS_GL)
 #include "X11/WinSystemX11GLContext.h"
 
-#elif defined(TARGET_FREEBSD)   && defined(HAVE_X11)   && defined(HAS_GLES)
+#elif (defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY))  && defined(HAVE_X11)   && defined(HAS_GLES)
 #include "X11/WinSystemX11GLESContext.h"
 
 #elif defined(TARGET_FREEBSD)  && defined(TARGET_RASPBERRY_PI)
