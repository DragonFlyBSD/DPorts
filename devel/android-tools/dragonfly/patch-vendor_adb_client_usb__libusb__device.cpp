--- vendor/adb/client/usb_libusb_device.cpp.orig
+++ vendor/adb/client/usb_libusb_device.cpp
@@ -30,7 +30,7 @@
 
 #ifdef ANDROID_TOOLS_USE_BUNDLED_LIBUSB
 #include <libusb/libusb.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
@@ -390,6 +390,7 @@
 }
 
 // libusb gives us a bitfield made of 'enum libusb_supported_speed' values
+#ifndef __DragonFly__
 static uint64_t ExtractMaxSuperSpeed(uint16_t wSpeedSupported) {
     if (wSpeedSupported == 0) {
         return 0;
@@ -428,9 +429,11 @@
     return max_speed;
 }
 #endif
+#endif
 
 void LibUsbDevice::RetrieveSpeeds() {
     negotiated_speed_ = ToConnectionSpeed(libusb_get_device_speed(device_));
+#ifndef __DragonFly__  // no BOS descriptor API in DragonFly's libusb
 
     // To discover the maximum speed supported by an USB device, we walk its capability
     // descriptors.
@@ -464,6 +467,7 @@
         }
     }
     libusb_free_bos_descriptor(bos);
+#endif
 }
 
 bool LibUsbDevice::OpenDeviceHandle() {
