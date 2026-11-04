--- vendor/adb/client/usb_libusb_hotplug.h.orig
+++ vendor/adb/client/usb_libusb_hotplug.h
@@ -20,12 +20,18 @@
 
 #ifdef ANDROID_TOOLS_USE_BUNDLED_LIBUSB
 #include <libusb/libusb.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
 #endif
 
+#if defined(__DragonFly__) && !defined(LIBUSB_CAP_HAS_HOTPLUG)
+// DragonFly's libusb has no libusb_has_capability(): use adb's own polling.
+#define LIBUSB_CAP_HAS_HOTPLUG 0x0001
+#define libusb_has_capability(cap) 0
+#endif
+
 namespace libusb {
 
 void usb_init();
