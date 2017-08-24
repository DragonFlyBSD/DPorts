--- cmake/sdlchecks.cmake.orig	2017-08-15 20:25:02.785248000 +0200
+++ cmake/sdlchecks.cmake	2017-08-15 20:25:04.895262000 +0200
@@ -970,8 +970,8 @@
         #include <usb.h>
         #endif
         #ifdef __DragonFly__
-        # include <bus/usb/usb.h>
-        # include <bus/usb/usbhid.h>
+        # include <bus/u4b/usb.h>
+        # include <bus/u4b/usbhid.h>
         #else
         # include <dev/usb/usb.h>
         # include <dev/usb/usbhid.h>
@@ -996,8 +996,8 @@
           #include <usb.h>
           #endif
           #ifdef __DragonFly__
-          # include <bus/usb/usb.h>
-          # include <bus/usb/usbhid.h>
+          # include <bus/u4b/usb.h>
+          # include <bus/u4b/usbhid.h>
           #else
           # include <dev/usb/usb.h>
           # include <dev/usb/usbhid.h>
@@ -1024,8 +1024,8 @@
           #include <usb.h>
           #endif
           #ifdef __DragonFly__
-          #include <bus/usb/usb.h>
-          #include <bus/usb/usbhid.h>
+          #include <bus/u4b/usb.h>
+          #include <bus/u4b/usbhid.h>
           #else
           #include <dev/usb/usb.h>
           #include <dev/usb/usbhid.h>
