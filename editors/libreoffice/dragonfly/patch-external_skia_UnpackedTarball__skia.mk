--- external/skia/UnpackedTarball_skia.mk.orig
+++ external/skia/UnpackedTarball_skia.mk
@@ -44,6 +44,7 @@
 	fix-semaphore-include.patch.1 \
 	fix-xputimage-depth.patch.1 \
     freebsd-limits.h.patch.0 \
+	dragonfly-skia-01.patch.0 \
 
 ifneq ($(MSYSTEM),)
 # use binary flag so patch from git-bash won't choke on mixed line-endings in patches
