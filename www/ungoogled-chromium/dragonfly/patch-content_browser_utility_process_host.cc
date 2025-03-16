diff --git content/browser/utility_process_host.cc content/browser/utility_process_host.cc
index 0421d10b244b..55f1ba2fa807 100644
--- content/browser/utility_process_host.cc
+++ content/browser/utility_process_host.cc
@@ -348,7 +348,7 @@ bool UtilityProcessHost::StartProcess() {
       switches::kMuteAudio,
       switches::kUseFileForFakeAudioCapture,
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+  BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
       switches::kAlsaInputDevice,
       switches::kAlsaOutputDevice,
 #endif
