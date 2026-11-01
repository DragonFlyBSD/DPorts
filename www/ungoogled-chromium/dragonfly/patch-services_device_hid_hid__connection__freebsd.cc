diff --git services/device/hid/hid_connection_freebsd.cc services/device/hid/hid_connection_freebsd.cc
index 97d5932f81fe..d4a75b114e96 100644
--- services/device/hid/hid_connection_freebsd.cc
+++ services/device/hid/hid_connection_freebsd.cc
@@ -4,8 +4,13 @@
 
 #include "services/device/hid/hid_connection_freebsd.h"
 
+#if defined(OS_FREEBSD)
 #include <dev/usb/usbhid.h>
 #include <dev/usb/usb_ioctl.h>
+#else
+#include <bus/u4b/usbhid.h>
+#include <bus/u4b/usb_ioctl.h>
+#endif
 
 #include "base/files/file_descriptor_watcher_posix.h"
 #include "base/location.h"
