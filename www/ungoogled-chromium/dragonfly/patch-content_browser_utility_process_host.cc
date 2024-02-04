diff --git content/browser/utility_process_host.cc content/browser/utility_process_host.cc
index de0f8f5807c..418e2a3aa13 100644
--- content/browser/utility_process_host.cc
+++ content/browser/utility_process_host.cc
@@ -357,7 +357,7 @@ bool UtilityProcessHost::StartProcess() {
       switches::kMuteAudio,
       switches::kUseFileForFakeAudioCapture,
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_SOLARIS)
+  BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_DRAGONFLY)
       switches::kAlsaInputDevice,
       switches::kAlsaOutputDevice,
 #endif
