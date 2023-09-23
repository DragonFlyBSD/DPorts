diff --git chrome/browser/media/webrtc/webrtc_log_uploader.cc chrome/browser/media/webrtc/webrtc_log_uploader.cc
index 03a5e95ab47..e31b40522e8 100644
--- chrome/browser/media/webrtc/webrtc_log_uploader.cc
+++ chrome/browser/media/webrtc/webrtc_log_uploader.cc
@@ -377,6 +377,8 @@ void WebRtcLogUploader::SetupMultipart(
   const char product[] = "Chrome_OpenBSD";
 #elif defined(OS_FREEBSD)
   const char product[] = "Chrome_FreeBSD";
+#elif defined(OS_DRAGONFLY)
+  const char product[] = "Chrome_DragonFly";
 #else
 #error Platform not supported.
 #endif
