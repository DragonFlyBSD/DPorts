--- src/loader/loader.c.orig	2017-03-20 11:47:09 UTC
+++ src/loader/loader.c
@@ -269,6 +269,78 @@ dev_node_from_fd(int fd, unsigned int *m
 
 #if defined(HAVE_LIBDRM)
 
+#if defined(__DragonFly__)	/* old version of drm_get_pci_id_for_fd */
+/* for i915 */
+#include <i915_drm.h>
+/* for radeon */
+#include <radeon_drm.h>
+
+static int
+drm_get_pci_id_for_fd(int fd, int *vendor_id, int *chip_id)
+{
+   drmVersionPtr version;
+
+   *chip_id = -1;
+
+   version = drmGetVersion(fd);
+   if (!version) {
+      log_(_LOADER_WARNING, "MESA-LOADER: invalid drm fd\n");
+      return 0;
+   }
+   if (!version->name) {
+      log_(_LOADER_WARNING, "MESA-LOADER: unable to determine the driver name\n");
+      drmFreeVersion(version);
+      return 0;
+   }
+
+   if (strcmp(version->name, "i915") == 0) {
+      struct drm_i915_getparam gp;
+      int ret;
+
+      *vendor_id = 0x8086;
+
+      memset(&gp, 0, sizeof(gp));
+      gp.param = I915_PARAM_CHIPSET_ID;
+      gp.value = chip_id;
+      ret = drmCommandWriteRead(fd, DRM_I915_GETPARAM, &gp, sizeof(gp));
+      if (ret) {
+         log_(_LOADER_WARNING, "MESA-LOADER: failed to get param for i915\n");
+	 *chip_id = -1;
+      }
+   }
+   else if (strcmp(version->name, "radeon") == 0) {
+      struct drm_radeon_info info;
+      int ret;
+
+      *vendor_id = 0x1002;
+
+      memset(&info, 0, sizeof(info));
+      info.request = RADEON_INFO_DEVICE_ID;
+      info.value = (unsigned long) chip_id;
+      ret = drmCommandWriteRead(fd, DRM_RADEON_INFO, &info, sizeof(info));
+      if (ret) {
+         log_(_LOADER_WARNING, "MESA-LOADER: failed to get info for radeon\n");
+	 *chip_id = -1;
+      }
+   }
+   else if (strcmp(version->name, "nouveau") == 0) {
+      *vendor_id = 0x10de;
+      /* not used */
+      *chip_id = 0;
+   }
+   else if (strcmp(version->name, "vmwgfx") == 0) {
+      *vendor_id = 0x15ad;
+      /* assume SVGA II */
+      *chip_id = 0x0405;
+   }
+
+   drmFreeVersion(version);
+
+   return (*chip_id >= 0);
+}
+
+#else /* defined(__DragonFly__)	*/
+
 static int
 drm_get_pci_id_for_fd(int fd, int *vendor_id, int *chip_id)
 {
@@ -295,6 +367,7 @@ drm_get_pci_id_for_fd(int fd, int *vendo
    return ret;
 }
 #endif
+#endif
 
 
 int
