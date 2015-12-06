--- src/io/network.cpp.bak	2015-12-06 20:20:13.000000000 +0200
+++ src/io/network.cpp
@@ -26,6 +26,9 @@
  */
 
 
+#ifdef __DragonFly__
+#include <sys/select.h>
+#endif
 #include "controls.h"
 #include "gfx/font.h"
 #include "gfx/video.h"
