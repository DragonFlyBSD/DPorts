--- src/3rdparty/chromium/media/base/media_switches.cc.intermediate	2026-09-17 10:33:48 UTC
+++ src/3rdparty/chromium/media/base/media_switches.cc
@@ -67,7 +67,7 @@ const char kReportVp9AsAnUnsupportedMimeType[] =
     "report-vp9-as-an-unsupported-mime-type";
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+  BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
 // The Alsa device to use when opening an audio input stream.
 const char kAlsaInputDevice[] = "alsa-input-device";
 // The Alsa device to use when opening an audio stream.
@@ -410,7 +410,7 @@ const base::FeatureParam<AudioBackend>
         &kAudioBackend, "audio-backend",
 #if BUILDFLAG(IS_OPENBSD)
         AudioBackend::kSndio,
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
         AudioBackend::kAuto,
 #endif
         &kAudioBackendOptions};
