diff --git services/device/usb/usb_service.cc services/device/usb/usb_service.cc
index 3dd82933c64b..6b95b8b0a231 100644
--- services/device/usb/usb_service.cc
+++ services/device/usb/usb_service.cc
@@ -29,7 +29,7 @@
 #include "services/device/usb/usb_service_win.h"
 #elif BUILDFLAG(IS_OPENBSD)
 #include "services/device/usb/usb_service_impl.h"
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include "services/device/usb/usb_service_fake.h"
 #endif
 
