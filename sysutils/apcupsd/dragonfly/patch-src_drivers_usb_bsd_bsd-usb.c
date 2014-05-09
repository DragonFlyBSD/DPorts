--- src/drivers/usb/bsd/bsd-usb.c.orig	2011-09-02 15:44:13.000000000 +0000
+++ src/drivers/usb/bsd/bsd-usb.c
@@ -27,8 +27,19 @@
 #include "apc.h"
 #include "hidutils.h"
 #include "../usb_common.h"
+#ifdef __DragonFly__
+#include <sys/param.h>
+#  if __DragonFly_version < 300703
+#include <bus/usb/usb.h>
+#include <bus/usb/usbhid.h>
+#  else
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usbhid.h>
+#  endif
+#else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
+#endif
 
 /* Compatibility cruft for FreeBSD <= 4.7 */
 #ifndef USB_MAX_DEVNAMES
@@ -97,6 +108,9 @@ static void reinitialize_private_structu
  */
 static int init_device(UPSINFO *ups, const char *devname)
 {
+#if defined(__DragonFly__) && __DragonFly_version >= 300703
+   return 0;
+#else
    int fd, rc, rdesclen;
    struct usb_device_info devinfo;
    USB_DATA *my_data = (USB_DATA *)ups->driver_internal_data;
@@ -182,6 +196,7 @@ static int init_device(UPSINFO *ups, con
    my_data->intfd = fd;
 
    return 1;
+#endif
 }
 
 /*
@@ -192,6 +207,9 @@ static int init_device(UPSINFO *ups, con
  */
 static int open_usb_device(UPSINFO *ups)
 {
+#if defined(__DragonFly__) && __DragonFly_version >= 300703
+   return 0;
+#else
    int i, j, k, fd, rc;
    char busname[] = "/dev/usbN";
    char devname[USB_MAX_DEVNAMELEN + 5 + 1];
@@ -284,6 +302,7 @@ static int open_usb_device(UPSINFO *ups)
 
    ups->device[0] = 0;
    return 0;
+#endif
 }
 
 /* 
