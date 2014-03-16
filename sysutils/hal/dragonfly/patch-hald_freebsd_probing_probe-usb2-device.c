--- hald/freebsd/probing/probe-usb2-device.c.intermediate	2014-03-16 09:55:09.236097000 +0000
+++ hald/freebsd/probing/probe-usb2-device.c
@@ -34,12 +34,16 @@
 
 #include <libusb20_desc.h>
 #include <libusb20.h>
+#ifdef __DragonFly__
+#include <bus/u4b/usb_ioctl.h>
+#else
 #if __FreeBSD_version >= 800064
 #include <dev/usb/usb_ioctl.h>
 #else
 #include <dev/usb2/include/usb2_standard.h>
 #include <dev/usb2/include/usb2_ioctl.h>
 #endif
+#endif /* __DragonFly__ */
 
 #include "../libprobe/hfp.h"
 
@@ -73,11 +77,15 @@ main(int argc, char **argv)
     {
       struct LIBUSB20_DEVICE_DESC_DECODED *ddesc;
       struct LIBUSB20_CONFIG_DESC_DECODED *cdesc;
+#ifdef __DragonFly__
+      struct usb_device_info di;
+#else
 #if __FreeBSD_version >= 800092
       struct usb_device_info di;
 #else
       struct usb2_device_info di;
 #endif
+#endif /* __DragonFly__ */
       struct libusb20_config *pcfg = NULL;
       int curr_config;
       int bcdspeed = 0;
