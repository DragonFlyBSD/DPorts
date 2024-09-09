diff --git content/browser/utility_process_host.cc content/browser/utility_process_host.cc
index 1bb75bb14aa..c3b399b576b 100644
--- src/3rdparty/chromium/content/browser/utility_process_host.cc
+++ src/3rdparty/chromium/content/browser/utility_process_host.cc
@@ -284,7 +284,7 @@ bool UtilityProcessHost::StartProcess() {
       switches::kMuteAudio,
       switches::kUseFileForFakeAudioCapture,
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+  BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
       switches::kAlsaInputDevice,
       switches::kAlsaOutputDevice,
 #endif
