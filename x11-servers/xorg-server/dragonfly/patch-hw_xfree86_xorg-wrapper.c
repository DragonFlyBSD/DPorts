--- hw/xfree86/xorg-wrapper.c.orig	2022-10-15 11:55:23.766330000 +0200
+++ hw/xfree86/xorg-wrapper.c	2022-10-15 11:55:45.785832000 +0200
@@ -230,9 +230,10 @@
         }
     }
 
-#ifdef WITH_LIBDRM
+#if defined(WITH_LIBDRM) && defined(__linux__)
     /* Detect if we need root rights, except when overridden by the config */
     if (needs_root_rights == -1) {
+        struct drm_mode_card_res res;
         for (i = 0; i < 16; i++) {
             snprintf(buf, sizeof(buf), DRM_DEV_NAME, DRM_DIR_NAME, i);
             fd = open(buf, O_RDWR);
