--- external/skia/UnpackedTarball_skia.mk.orig	Fri Oct 17 23:10:20 2025
+++ external/skia/UnpackedTarball_skia.mk	Fri Oct
@@ -24,7 +24,6 @@ skia_patches := \
     windows-text-gamma.patch.0 \
     windows-force-unicode-api.patch.0 \
     fix-without-gl.patch.1 \
-    windows-typeface-directwrite.patch.1 \
     windows-raster-surface-no-copies.patch.1 \
     fix-windows-dwrite.patch.1 \
     swap-buffers-rect.patch.1 \
@@ -43,6 +42,7 @@ skia_patches := \
     windows-define-conflict.patch.1 \
     freebsd-limits.h.patch.0 \
     powerpc64le-skia.patch.0 \
+	dragonfly-skia-01.patch.0 \
 
 $(eval $(call gb_UnpackedTarball_set_patchlevel,skia,1))
 
