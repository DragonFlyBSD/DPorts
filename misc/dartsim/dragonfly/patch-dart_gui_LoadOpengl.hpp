--- dart/gui/LoadOpengl.hpp.orig	2022-10-24 18:48:50 UTC
+++ dart/gui/LoadOpengl.hpp
@@ -40,7 +40,7 @@
 #elif defined(__linux__)
   #include <GL/gl.h>
   #include <GL/glu.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   #include <GL/gl.h>
   #include <GL/glu.h>
 #elif defined(__APPLE__)
