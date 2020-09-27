--- tg_owt/cmake/libwebrtcbuild.cmake.orig	2020-08-30 09:41:57 UTC
+++ tg_owt/cmake/libwebrtcbuild.cmake
@@ -18,7 +18,6 @@ INTERFACE
     WEBRTC_LIBRARY_IMPL
     WEBRTC_NON_STATIC_TRACE_EVENT_HANDLERS=1
     WEBRTC_ENABLE_LINUX_ALSA
-    WEBRTC_ENABLE_LINUX_PULSE
     HAVE_WEBRTC_VIDEO
     RTC_ENABLE_VP9
 )
