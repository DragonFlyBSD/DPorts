diff --git services/device/hid/hid_service.cc services/device/hid/hid_service.cc
index 0eda0483533d..6908a9100c34 100644
--- services/device/hid/hid_service.cc
+++ services/device/hid/hid_service.cc
@@ -22,7 +22,7 @@
 #include "services/device/hid/hid_service_linux.h"
 #elif BUILDFLAG(IS_OPENBSD)
 #include "services/device/hid/hid_service_fido.h"
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include "services/device/hid/hid_service_freebsd.h"
 #elif BUILDFLAG(IS_MAC)
 #include "services/device/hid/hid_service_mac.h"
@@ -74,7 +74,7 @@ std::unique_ptr<HidService> HidService::Create() {
   return std::make_unique<HidServiceLinux>();
 #elif BUILDFLAG(IS_OPENBSD)
   return std::make_unique<HidServiceFido>();
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   return std::make_unique<HidServiceFreeBSD>();
 #elif BUILDFLAG(IS_MAC)
   return std::make_unique<HidServiceMac>();
