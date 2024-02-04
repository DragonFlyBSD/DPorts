diff --git media/base/media_switches.cc media/base/media_switches.cc
index 229ea0dc14a..5668de35f04 100644
--- media/base/media_switches.cc
+++ media/base/media_switches.cc
@@ -61,7 +61,7 @@ const char kReportVp9AsAnUnsupportedMimeType[] =
     "report-vp9-as-an-unsupported-mime-type";
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+  BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
 // The Alsa device to use when opening an audio input stream.
 const char kAlsaInputDevice[] = "alsa-input-device";
 // The Alsa device to use when opening an audio stream.
