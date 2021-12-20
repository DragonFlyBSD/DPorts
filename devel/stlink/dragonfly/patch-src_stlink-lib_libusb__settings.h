--- src/stlink-lib/libusb_settings.h.orig	2021-04-24 22:24:02 UTC
+++ src/stlink-lib/libusb_settings.h
@@ -39,8 +39,14 @@
     #define MINIMAL_API_VERSION 0x01000104 // v1.0.20
 #endif
 
+#if !defined(LIBUSB_API_VERSION) && defined(__DragonFly__)
+#define LIBUSB_API_VERSION 0x01000102
+#endif
+
+#ifndef __DragonFly__
 #if (LIBUSB_API_VERSION < MINIMAL_API_VERSION)
     #error unsupported libusb version
 #endif
+#endif
 
 #endif // LIBUSB_SETTINGS_H
