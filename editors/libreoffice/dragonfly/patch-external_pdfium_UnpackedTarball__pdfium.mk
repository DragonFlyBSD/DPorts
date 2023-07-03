--- external/pdfium/UnpackedTarball_pdfium.mk.orig	2023-05-03 09:20:40.839159000 +0200
+++ external/pdfium/UnpackedTarball_pdfium.mk	2023-05-03 09:21:52.010824000 +0200
@@ -19,13 +19,15 @@
 # Android NDK 19 - that is known to work well - does not have 2 defines -- https://pdfium-review.googlesource.com/c/pdfium/+/96530
 # pdfium_patches += AndroidNDK19.patch.1
 
+pdfium_patches += pdfium-bsd.patch
+
 pdfium_patches += include.patch
 
 pdfium_patches += abseil-trivial.patch
 
 pdfium_patches += constexpr-template.patch
 
-pdfium_patches += pdfium-bsd.patch
+pdfium_patches += pdfium-dragonfly.patch
 
 $(eval $(call gb_UnpackedTarball_UnpackedTarball,pdfium))
 
