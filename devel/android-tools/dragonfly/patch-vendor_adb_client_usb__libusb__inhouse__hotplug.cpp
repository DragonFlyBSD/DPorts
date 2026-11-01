--- vendor/adb/client/usb_libusb_inhouse_hotplug.cpp.orig
+++ vendor/adb/client/usb_libusb_inhouse_hotplug.cpp
@@ -25,7 +25,7 @@
 
 #ifdef ANDROID_TOOLS_USE_BUNDLED_LIBUSB
 #include "libusb/libusb.h"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
