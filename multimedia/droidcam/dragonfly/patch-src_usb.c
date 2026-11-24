--- src/usb.c.orig
+++ src/usb.c
@@ -12,7 +12,7 @@
 #include <string.h>
 #include "usbmuxd.h"
 
-#if __FreeBSD__
+#if __FreeBSD__ || __DragonFly__
 #include <sys/wait.h>
 #endif
 
