--- kcontrol/usbview/usbdevices.h.orig	2013-01-06 17:59:45.788198000 +0100
+++ kcontrol/usbview/usbdevices.h	2013-01-06 18:00:42.008276000 +0100
@@ -17,8 +17,12 @@
 #include <qptrlist.h>
 
 #ifdef Q_OS_FREEBSD
+#ifdef __DragonFly__
+#include <bus/usb/usb.h>
+#else
 #include <dev/usb/usb.h>
 #endif
+#endif
 
 class USBDB;
 
