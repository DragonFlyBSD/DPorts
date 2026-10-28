--- src/backend_bsd.c.orig
+++ src/backend_bsd.c
@@ -42,14 +42,29 @@
 #include <xf86_OSproc.h>
 
 #include <usbhid.h>
+#ifdef __DragonFly__
+#include <sys/param.h>
+#  if __DragonFly_version < 300703
+#include <bus/usb/usb.h>
+#include <bus/usb/usbhid.h>
+#  else
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usbhid.h>
+#include <bus/u4b/usb_ioctl.h>
+#  endif
+#else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
+#endif
 #ifdef HAVE_DEV_HID_HID_H
     #include <dev/hid/hid.h>
 #endif
 #ifdef HAVE_DEV_USB_USB_IOCTL_H
     #include <dev/usb/usb_ioctl.h>
 #endif
+#ifdef HAVE_BUS_USB_USB_IOCTL_H
+    #include <bus/usb/usb_ioctl.h>
+#endif
 
 #include "jstk.h"
 #include "backend_bsd.h"
