--- src/graphics/screenshot.cpp.intermediate	2018-04-27 14:01:02 UTC
+++ src/graphics/screenshot.cpp
@@ -1,7 +1,7 @@
 #include "pngfuncs.h"
 #include "graphics.h"
 #include "../common/stat.h"
-#if defined(__MACH__) || defined (__FreeBSD__)
+#if defined(__MACH__) || defined (__FreeBSD__) || defined(__DragonFly__)
 #include <cstdlib>
 #else
 #include <malloc.h>
