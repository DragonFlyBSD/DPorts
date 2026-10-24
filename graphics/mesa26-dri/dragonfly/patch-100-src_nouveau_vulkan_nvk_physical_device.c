--- src/nouveau/vulkan/nvk_physical_device.c.orig	2026-07-02 19:34:59 UTC
+++ src/nouveau/vulkan/nvk_physical_device.c
@@ -28,7 +28,9 @@
 #include "vk_shader_module.h"
 #include "vulkan/wsi/wsi_common.h"

+#if defined(__linux__)
 #include <sys/sysmacros.h>
+#endif

 #include "nv_push.h"
 #include "cl90c0.h"
