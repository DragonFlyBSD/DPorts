--- src/stlink-lib/libusb_settings.h.orig
+++ src/stlink-lib/libusb_settings.h
@@ -28,7 +28,7 @@
  *  v1.0.26    | 0x01000110
  */
 
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined (__DragonFly__)
     #if !defined (LIBUSBX_API_VERSION)
         #define LIBUSBX_API_VERSION LIBUSB_API_VERSION
     #elif !defined (LIBUSB_API_VERSION)
@@ -36,7 +36,7 @@
     #endif
 #endif
 
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined (__DragonFly__)
     #define MINIMAL_API_VERSION 0x01000102 // v1.0.16
 #elif defined (__OpenBSD__)
     #define MINIMAL_API_VERSION 0x01000106 // v1.0.22
