--- external/pdfium/Library_pdfium.mk.intermediate	2023-11-09 22:34:50 UTC
+++ external/pdfium/Library_pdfium.mk
@@ -719,7 +719,7 @@ $(eval $(call gb_Library_add_generated_e
 ))
 endif
 
-ifneq (,$(filter LINUX FREEBSD OPENBSD,$(OS)))
+ifneq (,$(filter LINUX FREEBSD OPENBSD DRAGONFLY,$(OS)))
 # fxge
 $(eval $(call gb_Library_add_generated_exception_objects,pdfium,\
     UnpackedTarball/pdfium/core/fxge/linux/fx_linux_impl \
