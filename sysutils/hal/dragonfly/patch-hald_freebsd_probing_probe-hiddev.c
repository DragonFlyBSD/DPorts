--- hald/freebsd/probing/probe-hiddev.c.orig	2009-09-17 13:47:14.000000000 +0000
+++ hald/freebsd/probing/probe-hiddev.c
@@ -31,14 +31,23 @@
 #include <fcntl.h>
 #ifndef HAVE_LIBUSB20
 #include <sys/ioctl.h>
+#  ifdef __DragonFly__
+#include <bus/usb/usb.h>
+#include <bus/usb/usbhid.h>
+#  else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
+#  endif
 #else
+#  ifdef __DragonFly__
+#include <bus/u4b/usbhid.h>
+#  else
 #if __FreeBSD_version >= 800064
 #include <dev/usb/usbhid.h>
 #else
 #include <dev/usb2/include/usb2_hid.h>
 #endif
+#  endif
 #endif
 #include <usbhid.h>
 
