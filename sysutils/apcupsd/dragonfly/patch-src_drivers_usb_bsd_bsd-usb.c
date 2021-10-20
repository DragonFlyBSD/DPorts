--- src/drivers/usb/bsd/bsd-usb.c.orig	2015-01-02 21:34:23 UTC
+++ src/drivers/usb/bsd/bsd-usb.c
@@ -27,8 +27,8 @@
 #include "apc.h"
 #include "hidutils.h"
 #include "bsd-usb.h"
-#include <dev/usb/usb.h>
-#include <dev/usb/usbhid.h>
+#include <bus/usb/usb.h>
+#include <bus/usb/usbhid.h>
 
 /* Compatibility cruft for FreeBSD <= 4.7 */
 #ifndef USB_MAX_DEVNAMES
