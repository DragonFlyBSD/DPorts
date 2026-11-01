--- vendor/adb/client/transport_usb.cpp.orig
+++ vendor/adb/client/transport_usb.cpp
@@ -180,7 +180,7 @@
     bool enable = false;
 #if defined(__APPLE__)
     enable = true;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     enable = true;
 #endif
     char* env = getenv("ADB_LIBUSB");
