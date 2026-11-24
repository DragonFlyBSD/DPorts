--- zeroconf/hotplugnotifier.cpp.orig
+++ zeroconf/hotplugnotifier.cpp
@@ -20,7 +20,7 @@
 
 #include <atomic>
 #include <csignal>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
