diff --git media/base/media_switches.cc media/base/media_switches.cc
index 075957b79bdc..83d58c4670de 100644
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
@@ -395,7 +395,7 @@ constexpr base::FeatureParam<AudioBackend>::Option
 const base::FeatureParam<AudioBackend>
     kAudioBackendParam{
         &kAudioBackend, "audio-backend",
-#if BUILDFLAG(IS_OPENBSD)
+#if BUILDFLAG(IS_OPENBSD) || BUILDFLAG(IS_DRAGONFLY)
         AudioBackend::kSndio,
 #elif BUILDFLAG(IS_FREEBSD)
         AudioBackend::kAuto,
