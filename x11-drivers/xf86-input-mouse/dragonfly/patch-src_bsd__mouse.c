--- src/bsd_mouse.c.intermediate	2013-10-16 12:47:20.514634000 +0000
+++ src/bsd_mouse.c
@@ -78,7 +78,16 @@
 #include "usb.h"
 #endif
 
+#if defined(__DragonFly__)
+#include <sys/param.h>
+#  if __DragonFly_version < 300703
+#include <bus/usb/usb.h>
+#  else
+#include <bus/u4b/usb.h>
+#  endif
+#else
 #include <dev/usb/usb.h>
+#endif
 
 #define HUP_GENERIC_DESKTOP     0x0001
 #define HUP_BUTTON              0x0009
