--- jack_ghero.c.orig	2012-02-18 13:53:38.000000000 +0200
+++ jack_ghero.c
@@ -46,7 +46,11 @@
 
 #include <usbhid.h>
 
+#ifdef __DragonFly__
+#include <bus/u4b/usbhid.h>
+#else
 #include <dev/usb/usbhid.h>
+#endif
 
 #define	PACKAGE_NAME		"jack_ghero"
 #define	PACKAGE_VERSION		"1.0.3"
