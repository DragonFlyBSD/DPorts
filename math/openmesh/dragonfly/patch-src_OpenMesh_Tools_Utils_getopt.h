--- src/OpenMesh/Tools/Utils/getopt.h.orig	2024-02-01 11:05:02 UTC
+++ src/OpenMesh/Tools/Utils/getopt.h
@@ -21,7 +21,7 @@
 
   #endif
 
-#elif defined __APPLE__ || defined(__FreeBSD__)
+#elif defined __APPLE__ || defined(__FreeBSD__) || defined(__DragonFly__)
  #include <unistd.h>
 #else
  #include <getopt.h>
