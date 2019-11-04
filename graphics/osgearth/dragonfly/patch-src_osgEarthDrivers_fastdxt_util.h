--- src/osgEarthDrivers/fastdxt/util.h.intermediate 2019-11-04 13:57:31.000000000 +0000
+++ src/osgEarthDrivers/fastdxt/util.h
@@ -64,7 +64,7 @@ void aFree(void* const p);
 float drand48(void);
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define memalign(x,y) malloc((y))
 #else
 #include <malloc.h>
