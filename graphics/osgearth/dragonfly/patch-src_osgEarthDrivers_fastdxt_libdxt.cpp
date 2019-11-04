--- src/osgEarthDrivers/fastdxt/libdxt.cpp.intermediate	2019-11-04 13:57:31.000000000 +0000
+++ src/osgEarthDrivers/fastdxt/libdxt.cpp
@@ -24,7 +24,7 @@
 
 #include "libdxt.h"
 
-#if defined(__APPLE__) || (__FreeBSD__)
+#if defined(__APPLE__) || (__FreeBSD__) || defined(__DragonFly__)
 #define memalign(x,y) malloc((y))
 #else
 #include <malloc.h>
