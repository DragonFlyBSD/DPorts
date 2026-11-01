--- src/main.cpp.orig
+++ src/main.cpp
@@ -17,9 +17,10 @@
  * 
  */
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__DragonFly__)
 #include <unistd.h>
 #include <defaults.h>
+#include <limits.h> // for PATH_MAX
 #endif
 
 #include "fx.h"
