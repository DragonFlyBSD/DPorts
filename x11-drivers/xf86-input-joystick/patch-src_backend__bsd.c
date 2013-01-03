--- src/backend_bsd.c.orig	2013-01-03 03:18:21.742271000 +0100
+++ src/backend_bsd.c	2013-01-03 03:20:21.972439000 +0100
@@ -41,8 +41,13 @@
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
