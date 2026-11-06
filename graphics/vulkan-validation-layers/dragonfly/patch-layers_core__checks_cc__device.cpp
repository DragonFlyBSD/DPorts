--- layers/core_checks/cc_device.cpp.orig	2026-08-14 11:28:44 UTC
+++ layers/core_checks/cc_device.cpp
@@ -23,7 +23,7 @@
 #include <vector>
 #include "utils/assert_utils.h"
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__GNU__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__GNU__)
 #include <unistd.h>
 #endif
 
@@ -413,7 +413,7 @@ void CoreChecks::FinishDeviceSetup(const VkDeviceCreat
     if (!disabled[shader_validation_caching] && !disabled[shader_validation] && !core_validation_cache) {
         auto tmp_path = GetTempFilePath();
         validation_cache_path = tmp_path + "/shader_validation_cache";
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__GNU__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__GNU__)
         validation_cache_path += "-" + std::to_string(getuid());
 #endif
         validation_cache_path += ".bin";
