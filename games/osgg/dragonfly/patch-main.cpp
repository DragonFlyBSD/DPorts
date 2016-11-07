--- main.cpp.orig	2016-09-12 23:52:56.000000000 +0300
+++ main.cpp
@@ -34,7 +34,7 @@
     typedef unsigned int uint;
     #include <windows.h>
     #include <GL/glext.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     #include <sys/endian.h>
 #else
     #include <endian.h>
