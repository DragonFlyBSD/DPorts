--- kcms/usbview/usbdevices.cpp.orig
+++ kcms/usbview/usbdevices.cpp
@@ -21,10 +21,15 @@
 // FreeBSD has its own libusb implementation that does not provide
 // libusb_get_parent(), even if the advertised LIBUSB_API_VERSION
 // is the same as when libusb upstream introduced libusb_get_parent().
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 
 #define libusb_get_parent(device) nullptr
 
+#endif
+
+// DragonFly's libusb.h has no LIBUSB_CLASS_PHYSICAL.
+#ifdef Q_OS_DRAGONFLY
+#define LIBUSB_CLASS_PHYSICAL 0x05
 #endif
 
 QList<USBDevice *> USBDevice::_devices;
