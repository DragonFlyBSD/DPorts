--- src/3rdparty/chromium/services/device/usb/usb_service.cc.intermediate	2024-06-09 17:22:58 UTC
+++ src/3rdparty/chromium/services/device/usb/usb_service.cc
@@ -31,7 +31,7 @@
 #include "services/device/usb/usb_service_win.h"
 #elif BUILDFLAG(IS_OPENBSD)
 #include "services/device/usb/usb_service_impl.h"
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include "services/device/usb/usb_service_fake.h"
 #endif
 
