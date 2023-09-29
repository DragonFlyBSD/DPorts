diff --git services/device/hid/hid_service_freebsd.cc services/device/hid/hid_service_freebsd.cc
index 0b6bf3b4ce3..88cfbd95e2b 100644
--- services/device/hid/hid_service_freebsd.cc
+++ services/device/hid/hid_service_freebsd.cc
@@ -4,7 +4,12 @@
 
 #include "services/device/hid/hid_service_freebsd.h"
 
+#if defined(OS_FREEBSD)
 #include <dev/usb/usb_ioctl.h>
+#else
+#include <bus/u4b/usb_ioctl.h>
+#endif
+
 #include <stdint.h>
 #include <sys/socket.h>
 #include <sys/un.h>
