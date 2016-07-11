--- gamepad.h.orig	2012-12-19 18:35:39.000000000 +0200
+++ gamepad.h
@@ -1,4 +1,4 @@
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include "gamepad_analog.h"
 #include "gamepad_usbhid.h"
 #else
@@ -19,7 +19,7 @@ typedef struct
     /* Which interface */
     gamepad_interface_t interface;
     
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
     gamepad_usbhid_t    *usbhid;
     gamepad_analog_t    *analog;
 #else
