--- dart/gui/glut/LoadGlut.hpp.intermediate	2021-12-27 18:56:52.000000000 +0000
+++ dart/gui/glut/LoadGlut.hpp
@@ -38,7 +38,7 @@
 #  include <GL/glut.h>
 #elif defined(__linux__)
 #  include <GL/glut.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__)|| defined(__DragonFly__)
 #  include <GL/glut.h>
 #elif defined(__APPLE__)
 #  include <GLUT/glut.h>
