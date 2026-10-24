--- src/vulkan/wsi/wsi_common_drm.c.orig	2026-07-02 19:34:59 UTC
+++ src/vulkan/wsi/wsi_common_drm.c
@@ -28,6 +28,7 @@
 #include "util/os_file.h"
 #include "util/log.h"
 #include "util/u_atomic.h"
+#include "util/u_debug.h"
 #include "util/xmlconfig.h"
 #include "vk_device.h"
 #include "vk_physical_device.h"
@@ -373,6 +374,9 @@ wsi_drm_init_swapchain_implicit_sync(struct wsi_swapchain *chain)
    if (chain->image_info.explicit_sync)
       return VK_SUCCESS;

+   if (debug_get_bool_option("MESA_WSI_DISABLE_DMA_BUF_SYNC_FILE", false))
+      return VK_SUCCESS;
+
    VkResult result =
       wsi_drm_check_dma_buf_sync_file_import_export(chain->wsi, chain->device);
    if (result == VK_ERROR_FEATURE_NOT_PRESENT)
