--- imx_usb.c.orig	2016-12-27 15:30:43 UTC
+++ imx_usb.c
@@ -29,7 +29,7 @@
 #include <stdint.h>
 #include <getopt.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
