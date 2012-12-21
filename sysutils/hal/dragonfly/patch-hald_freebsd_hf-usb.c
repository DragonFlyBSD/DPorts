--- hald/freebsd/hf-usb.c.intermediate	2012-12-21 18:38:23.615084000 +0100
+++ hald/freebsd/hf-usb.c	2012-12-21 19:49:14.558922000 +0100
@@ -36,9 +36,13 @@
 #if __FreeBSD_version >= 800064
 #include <legacy/dev/usb/usb.h>
 #else
+#ifdef __DragonFly__
+#include <bus/usb/usb.h>
+#else
 #include <dev/usb/usb.h>
 #endif
 #endif
+#endif
 
 #include "../logger.h"
 #include "../osspec.h"
@@ -392,7 +396,11 @@
     hf_devtree_device_set_name(device, di->udi_devnames[0]);
 
   if ((devname = hf_usb_get_devname(di, "ukbd")))	/* USB keyboard */
+#ifdef __DragonFly__
+    hf_device_set_input(device, "keyboard", "keys", devname);
+#else
     hf_device_set_input(device, "keyboard", "keys", NULL);
+#endif
   else if ((devname = hf_usb_get_devname(di, "ums")))	/* USB mouse */
     hf_device_set_input(device, "mouse", NULL, devname);
   else if ((devname = hf_usb_get_devname(di, "uhid")))	/* UHID device */
