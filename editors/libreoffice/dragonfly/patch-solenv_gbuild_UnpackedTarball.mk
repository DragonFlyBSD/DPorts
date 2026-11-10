--- solenv/gbuild/UnpackedTarball.mk.orig	2026-11-10 12:00:00 UTC
+++ solenv/gbuild/UnpackedTarball.mk
@@ -212,6 +212,7 @@
 	$(call gb_UnpackedTarball_get_version_target,$(1))
 $(call gb_UnpackedTarball_get_preparation_target,$(1)) :| $(dir $(call gb_UnpackedTarball_get_target,$(1))).dir
 $(call gb_UnpackedTarball_get_target,$(1)) :| $(dir $(call gb_UnpackedTarball_get_target,$(1))).dir
+$(call gb_UnpackedTarball_get_version_target,$(1)) :| $(dir $(call gb_UnpackedTarball_get_target,$(1))).dir
 $(call gb_UnpackedTarball_get_final_target,$(1)) : $(call gb_UnpackedTarball_get_target,$(1))
 
 private gb_UnpackedTarball_PATTERN_RULES_$(1) :=
