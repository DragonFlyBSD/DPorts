--- Modules/usbview/usbdevices.h.orig	2019-05-07 09:48:36 UTC
+++ Modules/usbview/usbdevices.h
@@ -15,7 +15,10 @@
 #include <QString>
 
 #if defined(__DragonFly__)
-#include <bus/usb/usb.h>
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usb_ioctl.h>
+#define	DISABLE_USBDEVICES_FREEBSD
+#warning warning "The USB subsystem has changed in 3.7. Disabling. Like bellow."
 #include <QStringList>
 #elif defined(Q_OS_FREEBSD) || defined(Q_OS_NETBSD)
 #include <sys/param.h>
