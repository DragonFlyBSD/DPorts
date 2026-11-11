--- lib/https.c.orig
+++ lib/https.c
@@ -9,7 +9,7 @@
 
 #include "config.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
