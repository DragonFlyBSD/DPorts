--- dart/gui/LoadOpengl.hpp.intermediate	2019-05-07 20:44:03.000000000 +0000
+++ dart/gui/LoadOpengl.hpp
@@ -46,7 +46,7 @@
 #elif defined(__linux__)
   #include <GL/gl.h>
   #include <GL/glu.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   #include <GL/gl.h>
   #include <GL/glu.h>
 #elif defined(__APPLE__)
