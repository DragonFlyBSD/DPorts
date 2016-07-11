--- gamepad_usbhid.c.orig	2014-05-31 16:50:01.000000000 +0300
+++ gamepad_usbhid.c
@@ -1,10 +1,16 @@
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <stdio.h>
 #include <string.h>
 #include <sys/ioctl.h>
+#if defined(__DragonFly__)
+#include <bus/u4b/usb.h>
+#else
 #include <dev/usb/usb.h>
+#endif
 
-#if defined(__FreeBSD__)
+#if defined(__DragonFly__)
+#include <bus/u4b/usb_ioctl.h>
+#elif defined(__FreeBSD__)
 #include <dev/usb/usb_ioctl.h>
 #endif
 
@@ -349,7 +355,7 @@ int     gamepad_usbhid_get_val_from_usag
 void    gamepad_usbhid_set_nonblock(gamepad_usbhid_t *gp)
 
 {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /*
     const int   one = 1;
 
