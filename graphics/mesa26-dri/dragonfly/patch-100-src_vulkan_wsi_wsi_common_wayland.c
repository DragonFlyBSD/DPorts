--- src/vulkan/wsi/wsi_common_wayland.c.orig	2026-07-02 19:34:59 UTC
+++ src/vulkan/wsi/wsi_common_wayland.c
@@ -68,6 +68,11 @@
 #include <sys/sysmacros.h>
 #endif

+/* DragonFly has no CLOCK_MONOTONIC_RAW; plain MONOTONIC is the closest fit. */
+#ifndef CLOCK_MONOTONIC_RAW
+#define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC_FAST
+#endif
+
 struct wsi_wayland;

 struct wsi_wl_format {
