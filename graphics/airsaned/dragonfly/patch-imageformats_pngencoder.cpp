--- imageformats/pngencoder.cpp.orig
+++ imageformats/pngencoder.cpp
@@ -17,7 +17,7 @@
 */
 
 #include "pngencoder.h"
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <png.h>
 #else
 #include <libpng16/png.h>
@@ -27,7 +27,7 @@
 #include <cstdint>
 #if __APPLE__
 #include <machine/endian.h>
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
