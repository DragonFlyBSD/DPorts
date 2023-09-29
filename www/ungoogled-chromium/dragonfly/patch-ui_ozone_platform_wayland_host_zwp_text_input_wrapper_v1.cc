diff --git ui/ozone/platform/wayland/host/zwp_text_input_wrapper_v1.cc ui/ozone/platform/wayland/host/zwp_text_input_wrapper_v1.cc
index 16e8342b422..81c4c500da2 100644
--- ui/ozone/platform/wayland/host/zwp_text_input_wrapper_v1.cc
+++ ui/ozone/platform/wayland/host/zwp_text_input_wrapper_v1.cc
@@ -225,7 +225,7 @@ void ZWPTextInputWrapperV1::SetSurroundingText(
   // so if it exceeds 16 bits, it may be broken.
   static constexpr size_t kSizeLimit = 60000;
   if (HasAdvancedSurroundingTextSupport() && text.length() > kSizeLimit) {
-#if defined(__FreeBSD_version) && __FreeBSD_version < 1300048
+#if (defined(__FreeBSD_version) && __FreeBSD_version < 1300048) || defined(__DragonFly__)
     PLOG(ERROR) << "memfd is not supported";
     return;
 #else
