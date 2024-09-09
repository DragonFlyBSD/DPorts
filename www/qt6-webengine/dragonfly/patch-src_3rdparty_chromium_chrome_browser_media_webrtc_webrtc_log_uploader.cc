diff --git chrome/browser/media/webrtc/webrtc_log_uploader.cc chrome/browser/media/webrtc/webrtc_log_uploader.cc
index a0e335f8938..587fae43a3f 100644
--- src/3rdparty/chromium/chrome/browser/media/webrtc/webrtc_log_uploader.cc
+++ src/3rdparty/chromium/chrome/browser/media/webrtc/webrtc_log_uploader.cc
@@ -366,6 +366,8 @@ void WebRtcLogUploader::SetupMultipart(
   const char product[] = "Chrome_OpenBSD";
 #elif defined(OS_FREEBSD)
   const char product[] = "Chrome_FreeBSD";
+#elif defined(OS_DRAGONFLY)
+  const char product[] = "Chrome_DragonFly";
 #else
 #error Platform not supported.
 #endif
