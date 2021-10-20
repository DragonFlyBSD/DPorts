--- src/drivers/usb/bsd/hidutils.c.orig	2009-10-31 14:04:32.000000000 +0000
+++ src/drivers/usb/bsd/hidutils.c
@@ -26,8 +26,13 @@
 #include "apc.h"
 
 #include "hidutils.h"
+#ifdef __DragonFly__
+#include <bus/usb/usb.h>
+#include <bus/usb/usbhid.h>
+#else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
+#endif
 
 #define MAX_SANE_DESCRIPTOR_LEN 4096
 
