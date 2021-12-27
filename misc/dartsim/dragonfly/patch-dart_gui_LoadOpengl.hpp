--- dart/gui/LoadOpengl.hpp.intermediate	2021-12-27 18:56:52.000000000 +0000
+++ dart/gui/LoadOpengl.hpp
@@ -46,7 +46,7 @@
 #elif defined(__linux__)
 #  include <GL/gl.h>
 #  include <GL/glu.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <GL/gl.h>
 #  include <GL/glu.h>
 #elif defined(__APPLE__)
