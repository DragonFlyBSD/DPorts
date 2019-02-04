--- xbmc/system_gl.h.orig	2018-08-04 15:18:36.018352000 +0200
+++ xbmc/system_gl.h	2018-08-04 15:18:52.758715000 +0200
@@ -34,7 +34,7 @@
     #include <GL/gl.h>
     #include <GL/glu.h>
     #include <GL/glext.h>
-  #elif defined(TARGET_FREEBSD)
+  #elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
     #include <GL/gl.h>
   #elif defined(TARGET_DARWIN)
     #include <OpenGL/gl.h>
