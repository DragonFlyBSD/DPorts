diff --git chrome/browser/flag_descriptions.cc chrome/browser/flag_descriptions.cc
index f91c23b3cbef..58d15196e2ee 100644
--- chrome/browser/flag_descriptions.cc
+++ chrome/browser/flag_descriptions.cc
@@ -8161,7 +8161,7 @@ const char kWaylandPerWindowScalingDescription[] =
 const char kAudioBackendName[] =
     "Audio Backend";
 const char kAudioBackendDescription[] =
-#if BUILDFLAG(IS_OPENBSD)
+#if BUILDFLAG(IS_OPENBSD) || BUILDFLAG(IS_DRAGONFLY)
     "Select the desired audio backend to use. The default is sndio.";
 #elif BUILDFLAG(IS_FREEBSD)
     "Select the desired audio backend to use. The default will automatically "
