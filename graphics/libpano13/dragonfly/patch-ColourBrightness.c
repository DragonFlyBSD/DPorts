--- ColourBrightness.c.orig	2014-02-17 22:04:42 UTC
+++ ColourBrightness.c
@@ -73,7 +73,10 @@
 
 #endif  //def WIN32
 
-
+#if defined(__DragonFly__)
+#include <sys/endian.h>
+#include <arpa/inet.h>
+#endif
 
 FILE *debugFile = 0;
 
