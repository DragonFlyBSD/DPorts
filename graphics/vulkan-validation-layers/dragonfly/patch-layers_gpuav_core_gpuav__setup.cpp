--- layers/gpuav/core/gpuav_setup.cpp.orig	2026-08-14 11:28:44 UTC
+++ layers/gpuav/core/gpuav_setup.cpp
@@ -18,7 +18,7 @@
 #include <vulkan/vulkan_core.h>
 #include <array>
 #include <string>
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__GNU__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__GNU__)
 #include <unistd.h>
 #endif
 #include "chassis/dispatch_object.h"
