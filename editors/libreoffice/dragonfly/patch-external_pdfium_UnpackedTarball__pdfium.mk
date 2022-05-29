--- external/pdfium/UnpackedTarball_pdfium.mk.orig	2022-05-08 23:54:44 UTC
+++ external/pdfium/UnpackedTarball_pdfium.mk
@@ -19,12 +19,14 @@ pdfium_patches += cg-instead-of-carbon.p
 # Android NDK 19 - that is known to work well - does not have 2 defines
 pdfium_patches += AndroidNDK19.patch.1
 
+pdfium_patches += pdfium-bsd.patch
+
 # Work around <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=94141> "c++20 rewritten operator==
 # recursive call mixing friend and external operators for template class" in GCC with
 # --with-latest-c++:
 pdfium_patches += gcc-c++20-comparison.patch
 
-pdfium_patches += pdfium-bsd.patch
+pdfium_patches += pdfium-dragonfly.patch
 
 $(eval $(call gb_UnpackedTarball_UnpackedTarball,pdfium))
 
