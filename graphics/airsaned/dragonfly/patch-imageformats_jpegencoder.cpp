--- imageformats/jpegencoder.cpp.orig
+++ imageformats/jpegencoder.cpp
@@ -25,7 +25,7 @@
 
 #if __APPLE__
 #include <machine/endian.h>
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
