--- skelton/svgalib/video.cpp.bak	2015-09-18 12:04:44.000000000 +0300
+++ skelton/svgalib/video.cpp
@@ -23,6 +23,8 @@
 #include <assert.h>
 #ifdef WIN32
 #include <malloc.h>
+#elif defined(__DragonFly__)
+#include <stdlib.h>
 #else
   #if !defined __FreeBSD__ /* alloca is part of stdlib in FreeBSD */
     #include <alloca.h> 
