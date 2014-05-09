--- src/arch/unix/joy_usb.c.orig	2009-12-20 17:54:03.000000000 +0000
+++ src/arch/unix/joy_usb.c
@@ -29,6 +29,7 @@
 #include <fcntl.h>
 #include <stdio.h>
 #include <unistd.h>
+#include <sys/param.h>
 
 #include "cmdline.h"
 #include "joy.h"
@@ -53,8 +54,13 @@ extern log_t joystick_log;
 #endif
 
 #ifdef __DragonFly__
+#  if __DragonFly_version < 300703
 #include <bus/usb/usb.h>
 #include <bus/usb/usbhid.h>
+#  else
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usbhid.h>
+#  endif
 #else
 #ifdef __FreeBSD__
 #include <sys/ioccom.h>
