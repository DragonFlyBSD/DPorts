--- dart/gui/glut/LoadGlut.hpp.orig	2022-10-24 18:49:54 UTC
+++ dart/gui/glut/LoadGlut.hpp
@@ -39,7 +39,7 @@
   #include <GL/glut.h>
 #elif defined(__linux__)
   #include <GL/glut.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   #include <GL/glut.h>
 #elif defined(__APPLE__)
   #include <GLUT/glut.h>
