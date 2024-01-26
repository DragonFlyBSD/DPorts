diff --git chrome/browser/media/webrtc/webrtc_log_uploader.cc chrome/browser/media/webrtc/webrtc_log_uploader.cc
index aea165c0430..20d25caafa7 100644
--- chrome/browser/media/webrtc/webrtc_log_uploader.cc
+++ chrome/browser/media/webrtc/webrtc_log_uploader.cc
@@ -378,6 +378,8 @@ void WebRtcLogUploader::SetupMultipart(
   const char product[] = "Chrome_OpenBSD";
 #elif defined(OS_FREEBSD)
   const char product[] = "Chrome_FreeBSD";
+#elif defined(OS_DRAGONFLY)
+  const char product[] = "Chrome_DragonFly";
 #else
 #error Platform not supported.
 #endif
