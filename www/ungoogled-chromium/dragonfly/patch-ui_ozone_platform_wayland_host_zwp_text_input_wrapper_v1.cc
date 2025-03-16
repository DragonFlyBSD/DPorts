diff --git ui/ozone/platform/wayland/host/zwp_text_input_wrapper_v1.cc ui/ozone/platform/wayland/host/zwp_text_input_wrapper_v1.cc
index 88f8f7894c92..03d29cf99d20 100644
--- ui/ozone/platform/wayland/host/zwp_text_input_wrapper_v1.cc
+++ ui/ozone/platform/wayland/host/zwp_text_input_wrapper_v1.cc
@@ -256,7 +256,7 @@ void ZWPTextInputWrapperV1::SetSurroundingText(
   // so if it exceeds 16 bits, it may be broken.
   static constexpr size_t kSizeLimit = 60000;
   if (HasAdvancedSurroundingTextSupport() && text.length() > kSizeLimit) {
-#if defined(__FreeBSD_version) && __FreeBSD_version < 1300048
+#if (defined(__FreeBSD_version) && __FreeBSD_version < 1300048) || defined(__DragonFly__)
     PLOG(ERROR) << "memfd is not supported";
     return;
 #else
