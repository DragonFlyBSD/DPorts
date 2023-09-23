diff --git services/device/usb/usb_service.cc services/device/usb/usb_service.cc
index dd55d724dc0..e066e7624a8 100644
--- services/device/usb/usb_service.cc
+++ services/device/usb/usb_service.cc
@@ -31,7 +31,7 @@
 #include "services/device/usb/usb_service_win.h"
 #elif BUILDFLAG(IS_OPENBSD)
 #include "services/device/usb/usb_service_impl.h"
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include "services/device/usb/usb_service_fake.h"
 #endif
 
