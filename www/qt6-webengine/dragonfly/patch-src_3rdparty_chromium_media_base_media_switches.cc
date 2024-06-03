diff --git media/base/media_switches.cc media/base/media_switches.cc
index fb19c37c085..3f6790b4193 100644
--- src/3rdparty/chromium/media/base/media_switches.cc
+++ src/3rdparty/chromium/media/base/media_switches.cc
@@ -52,7 +52,7 @@ const char kReportVp9AsAnUnsupportedMimeType[] =
     "report-vp9-as-an-unsupported-mime-type";
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+  BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
 // The Alsa device to use when opening an audio input stream.
 const char kAlsaInputDevice[] = "alsa-input-device";
 // The Alsa device to use when opening an audio stream.
