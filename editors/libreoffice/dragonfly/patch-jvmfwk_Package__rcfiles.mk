--- jvmfwk/Package_rcfiles.mk.orig	2021-09-08 17:53:20 UTC
+++ jvmfwk/Package_rcfiles.mk
@@ -11,6 +11,8 @@ $(eval $(call gb_Package_Package,jvmfwk_
 
 ifeq ($(OS),WNT)
 $(eval $(call gb_Package_add_file,jvmfwk_javavendors,$(LIBO_URE_MISC_FOLDER)/javavendors.xml,distributions/OpenOfficeorg/javavendors_wnt.xml))
+else ifeq ($(OS),DRAGONFLY)
+$(eval $(call gb_Package_add_file,jvmfwk_javavendors,$(LIBO_URE_MISC_FOLDER)/javavendors.xml,distributions/OpenOfficeorg/javavendors_freebsd.xml))
 else ifeq ($(OS),FREEBSD)
 $(eval $(call gb_Package_add_file,jvmfwk_javavendors,$(LIBO_URE_MISC_FOLDER)/javavendors.xml,distributions/OpenOfficeorg/javavendors_freebsd.xml))
 else ifeq ($(OS),MACOSX)
