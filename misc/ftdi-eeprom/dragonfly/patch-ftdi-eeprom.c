--- ftdi-eeprom.c.intermediate	2016-07-15 15:10:17 UTC
+++ ftdi-eeprom.c
@@ -44,8 +44,11 @@
 #include <stdio.h>
 #include <string.h>
 #include <limits.h>
+#ifdef __DragonFly__
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usb_ioctl.h>
+#else
 #include <dev/usb/usb.h>
-#if __FreeBSD_version >= 800069
 #include <dev/usb/usb_ioctl.h>
 #endif
 
