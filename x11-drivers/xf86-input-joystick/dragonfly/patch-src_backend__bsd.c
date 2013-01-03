--- src/backend_bsd.c.orig	2009-09-13 18:12:58.000000000 +0200
+++ src/backend_bsd.c	2013-01-03 03:58:43.465654000 +0100
@@ -41,11 +41,19 @@
 #include <xf86_OSproc.h>
 
 #include <usbhid.h>
+#ifdef __DragonFly__
+#include <bus/usb/usb.h>
+#include <bus/usb/usbhid.h>
+#else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
+#endif
 #ifdef HAVE_DEV_USB_USB_IOCTL_H
     #include <dev/usb/usb_ioctl.h>
 #endif
+#ifdef HAVE_BUS_USB_USB_IOCTL_H
+    #include <bus/usb/usb_ioctl.h>
+#endif
 
 #include "jstk.h"
 #include "backend_bsd.h"
