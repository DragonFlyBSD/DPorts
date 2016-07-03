--- aird.c.orig	2011-04-23 16:43:00.000000000 +0300
+++ aird.c
@@ -72,8 +72,13 @@ __FBSDID("$FreeBSD$");
 #include <sys/stat.h>
 
 #include <libutil.h>
+#ifdef __DragonFly__
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usbhid.h>
+#else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
+#endif
 
 static struct pidfh *pfh;
 
