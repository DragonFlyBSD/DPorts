--- src/calibre/devices/libusb/libusb.c.orig	2025-12-06 03:52:49 UTC
+++ src/calibre/devices/libusb/libusb.c
@@ -9,7 +9,7 @@
 #define PY_SSIZE_T_CLEAN
 
 #include <Python.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
