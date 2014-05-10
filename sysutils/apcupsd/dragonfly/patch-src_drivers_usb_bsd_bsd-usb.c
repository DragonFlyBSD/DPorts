--- src/drivers/usb/bsd/bsd-usb.c.orig	2011-09-02 15:44:13.000000000 +0000
+++ src/drivers/usb/bsd/bsd-usb.c
@@ -27,8 +27,13 @@
 #include "apc.h"
 #include "hidutils.h"
 #include "../usb_common.h"
+#ifdef __DragonFly__
+#include <bus/usb/usb.h>
+#include <bus/usb/usbhid.h>
+#else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
+#endif
 
 /* Compatibility cruft for FreeBSD <= 4.7 */
 #ifndef USB_MAX_DEVNAMES
