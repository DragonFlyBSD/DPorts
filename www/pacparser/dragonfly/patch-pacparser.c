--- pacparser.c.orig
+++ pacparser.c
@@ -25,7 +25,7 @@
 #include <string.h>
 #include <stdlib.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <arpa/inet.h>
 #endif
 
