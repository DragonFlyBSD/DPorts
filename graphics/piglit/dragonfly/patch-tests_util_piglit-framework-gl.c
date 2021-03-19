--- tests/util/piglit-framework-gl.c.orig	2020-09-09 08:57:32 UTC
+++ tests/util/piglit-framework-gl.c
@@ -27,6 +27,9 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#include <libgen.h> /* for basename() */
+#endif
 
 #include "piglit-util-gl.h"
 #include "piglit-framework-gl/piglit_gl_framework.h"
