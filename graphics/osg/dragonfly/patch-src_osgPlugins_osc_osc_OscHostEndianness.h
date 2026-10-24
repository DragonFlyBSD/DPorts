--- src/osgPlugins/osc/osc/OscHostEndianness.h.orig
+++ src/osgPlugins/osc/osc/OscHostEndianness.h
@@ -64,7 +64,7 @@
         #else
             #error Unknown machine endianness detected.
         #endif
-    #elif defined(__FreeBSD__)
+    #elif defined(__FreeBSD__) || defined(__DragonFly__)
         #include <sys/endian.h>
         #if (_BYTE_ORDER == _LITTLE_ENDIAN)
             #ifndef __LITTLE_ENDIAN__
