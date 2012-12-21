--- hald/freebsd/probing/probe-hiddev.c.orig	2009-09-17 15:47:14.000000000 +0200
+++ hald/freebsd/probing/probe-hiddev.c	2012-12-21 19:06:24.661349000 +0100
@@ -31,8 +31,13 @@
 #include <fcntl.h>
 #ifndef HAVE_LIBUSB20
 #include <sys/ioctl.h>
+#ifdef __DragonFly__
+#include <bus/usb/usb.h>
+#include <bus/usb/usbhid.h>
+#else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
+#endif
 #else
 #if __FreeBSD_version >= 800064
 #include <dev/usb/usbhid.h>
