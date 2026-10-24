--- src/3rdparty/chromium/content/browser/service_host/utility_process_host.cc.intermediate	2026-09-17 07:06:57 UTC
+++ src/3rdparty/chromium/content/browser/service_host/utility_process_host.cc
@@ -429,7 +429,7 @@ bool UtilityProcessHost::StartProcess() {
       switches::kMuteAudio,
       switches::kUseFileForFakeAudioCapture,
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+    BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
       switches::kAlsaInputDevice,
       switches::kAlsaOutputDevice,
 #endif
