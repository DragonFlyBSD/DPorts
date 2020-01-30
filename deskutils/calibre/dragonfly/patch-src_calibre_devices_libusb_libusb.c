--- src/calibre/devices/libusb/libusb.c.orig	2020-01-03 01:29:53 UTC
+++ src/calibre/devices/libusb/libusb.c
@@ -8,7 +8,7 @@
 #define UNICODE
 
 #include <Python.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
