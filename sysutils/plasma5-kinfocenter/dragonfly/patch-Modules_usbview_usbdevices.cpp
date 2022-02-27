--- Modules/usbview/usbdevices.cpp.orig	2022-01-04 08:54:48 UTC
+++ Modules/usbview/usbdevices.cpp
@@ -70,8 +70,10 @@ static QString prettyLibusbClassName(int
         return i18nc("USB device class", "Communications");
     case LIBUSB_CLASS_HID:
         return i18nc("USB device class", "Human Interface Device");
+#ifndef __DragonFly__
     case LIBUSB_CLASS_PHYSICAL:
         return i18nc("USB device class", "Physical Interface Device");
+#endif
     case LIBUSB_CLASS_PRINTER:
         return i18nc("USB device class", "Printer");
     case LIBUSB_CLASS_IMAGE:
@@ -110,7 +112,11 @@ USBDevice::USBDevice(libusb_device *dev,
     : _bus(libusb_get_bus_number(dev))
     , _level(0)
     , _parent(0)
+#ifdef __DragonFly__
+    , _port(0) // libusb_get_port_number() is not exposed in libusb, but here only needed of Q_OS_LINUX
+#else
     , _port(libusb_get_port_number(dev))
+#endif
     , _device(libusb_get_device_address(dev))
     , _channels(0)
     , _speed(convertLibusbSpeed(libusb_get_device_speed(dev)))
