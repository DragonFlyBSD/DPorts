--- xbmc/peripherals/bus/PeripheralBusUSB.h.orig	2018-08-04 15:06:41.672876000 +0200
+++ xbmc/peripherals/bus/PeripheralBusUSB.h	2018-08-04 15:07:00.263280000 +0200
@@ -31,6 +31,9 @@
 #elif defined(TARGET_FREEBSD) && defined(HAVE_LIBUSB)
 #define HAVE_PERIPHERAL_BUS_USB 1
 #include "linux/PeripheralBusUSBLibUSB.h"
+#elif defined(TARGET_DRAGONFLY) && defined(HAVE_LIBUSB)
+#define HAVE_PERIPHERAL_BUS_USB 1
+#include "linux/PeripheralBusUSBLibUSB.h"
 #elif defined(TARGET_DARWIN)
 #define HAVE_PERIPHERAL_BUS_USB 1
 #include "osx/PeripheralBusUSB.h"
