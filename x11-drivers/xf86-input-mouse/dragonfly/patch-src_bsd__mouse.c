--- src/bsd_mouse.c.intermediate	2013-10-16 12:47:20.514634000 +0000
+++ src/bsd_mouse.c
@@ -78,7 +78,11 @@
 #include "usb.h"
 #endif
 
+#if defined(__DragonFly__)
+#include <bus/usb/usb.h>
+#else
 #include <dev/usb/usb.h>
+#endif
 
 #define HUP_GENERIC_DESKTOP     0x0001
 #define HUP_BUTTON              0x0009
