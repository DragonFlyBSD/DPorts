diff --git content/browser/utility_process_host.cc content/browser/utility_process_host.cc
index b490ac323f9..dd2a490c4a3 100644
--- content/browser/utility_process_host.cc
+++ content/browser/utility_process_host.cc
@@ -359,7 +359,7 @@ bool UtilityProcessHost::StartProcess() {
       switches::kMuteAudio,
       switches::kUseFileForFakeAudioCapture,
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+  BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
       switches::kAlsaInputDevice,
       switches::kAlsaOutputDevice,
 #endif
