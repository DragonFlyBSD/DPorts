--- hald/freebsd/probing/probe-usb2-interface.c.intermediate	2014-03-16 09:55:09.246097000 +0000
+++ hald/freebsd/probing/probe-usb2-interface.c
@@ -34,12 +34,16 @@
 
 #include <libusb20_desc.h>
 #include <libusb20.h>
+#ifdef __DragonFly__
+#include <bus/u4b/usb_ioctl.h>
+#else
 #if __FreeBSD_version >= 800064
 #include <dev/usb/usb_ioctl.h>
 #else
 #include <dev/usb2/include/usb2_standard.h>
 #include <dev/usb2/include/usb2_ioctl.h>
 #endif
+#endif /* __DragonFly__ */
 
 #include "../libprobe/hfp.h"
 
