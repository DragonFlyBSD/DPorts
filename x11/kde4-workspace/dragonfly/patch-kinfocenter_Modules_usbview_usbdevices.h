--- kinfocenter/Modules/usbview/usbdevices.h.orig	2014-03-27 20:10:07.000000000 +0000
+++ kinfocenter/Modules/usbview/usbdevices.h
@@ -15,7 +15,13 @@
 #include <QString>
 
 #if defined(__DragonFly__)
+#include <sys/param.h>
+#  if __DragonFly_version < 300703
 #include <bus/usb/usb.h>
+#  else
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usb_ioctl.h>
+#  endif
 #include <QStringList>
 #elif defined(Q_OS_FREEBSD) || defined(Q_OS_NETBSD)
 #include <sys/param.h>
