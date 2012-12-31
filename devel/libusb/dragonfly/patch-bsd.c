--- bsd.c.intermediate	2012-12-31 13:58:31.100237000 +0100
+++ bsd.c	2012-12-31 13:57:48.980178000 +0100
@@ -29,6 +29,10 @@
 #define __FreeBSD_kernel__ __FreeBSD__
 #endif
 
+#if defined(__DragonFly__)
+#define __FreeBSD_kernel__ 1
+#endif
+
 #include <stdlib.h>
 #include <unistd.h>
 #include <string.h>
@@ -39,14 +43,18 @@
 #include <sys/time.h>
 #include <sys/ioctl.h>
 
+#if defined(__DragonFly__)
+#include <bus/usb/usb.h>
+#else
 #include <dev/usb/usb.h>
+#endif
 
 #include "usbi.h"
 #ifdef HAVE_CONFIG_H
 #include "config.h"
 #endif
 
-#ifdef HAVE_OLD_DEV_USB_USB_H
+#if defined(HAVE_OLD_DEV_USB_USB_H) && !defined(__DragonFly__)
 /*
  * It appears some of the BSD's (OpenBSD atleast) have switched over to a
  * new naming convention, so we setup some macro's for backward
