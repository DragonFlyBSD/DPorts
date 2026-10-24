--- src/nouveau/vulkan/nvk_wsi.c.orig	2026-07-02 19:34:59 UTC
+++ src/nouveau/vulkan/nvk_wsi.c
@@ -5,6 +5,7 @@
 #include "nvk_wsi.h"
 #include "nvk_instance.h"
 #include "nvkmd/nvkmd.h"
+#include "util/u_debug.h"
 #include "wsi_common.h"

 static VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL
@@ -31,7 +32,12 @@ nvk_init_wsi(struct nvk_physical_device *pdev)
    if (result != VK_SUCCESS)
       return result;

-   pdev->wsi_device.supports_scanout = false;
+   /* Direct WSI scanout requires exported images whose layout the display
+    * server can import correctly.  Keep it opt-in until modifier/linear export
+    * semantics are complete.
+    */
+   pdev->wsi_device.supports_scanout =
+      debug_get_bool_option("NVK_ENABLE_WSI_SCANOUT", false);
    pdev->wsi_device.supports_modifiers =
       pdev->vk.supported_extensions.table.EXT_image_drm_format_modifier;
