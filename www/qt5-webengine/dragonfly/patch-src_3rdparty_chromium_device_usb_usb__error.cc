--- src/3rdparty/chromium/device/usb/usb_error.cc.intermediate	2018-05-26 13:48:33.000000000 +0000
+++ src/3rdparty/chromium/device/usb/usb_error.cc
@@ -4,7 +4,7 @@
 
 #include "device/usb/usb_error.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include "libusb.h"
 #else
 #include "third_party/libusb/src/libusb/libusb.h"
