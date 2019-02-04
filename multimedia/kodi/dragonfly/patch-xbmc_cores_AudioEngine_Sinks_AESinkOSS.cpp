--- xbmc/cores/AudioEngine/Sinks/AESinkOSS.cpp.orig	2018-08-04 14:14:28.295177000 +0200
+++ xbmc/cores/AudioEngine/Sinks/AESinkOSS.cpp	2018-08-04 14:14:44.045517000 +0200
@@ -31,7 +31,7 @@
 #include <sys/ioctl.h>
 #include <sys/fcntl.h>
 
-#if defined(OSS4) || defined(TARGET_FREEBSD)
+#if defined(OSS4) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   #include <sys/soundcard.h>
 #else
   #include <linux/soundcard.h>
@@ -252,7 +252,7 @@ bool CAESinkOSS::Initialize(AEAudioForma
   if (!found)
     CLog::Log(LOGWARNING, "CAESinkOSS::Initialize - Failed to access the number of channels required, falling back");
 
-#if defined(TARGET_FREEBSD)
+#if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   /* fix hdmi 8 channels order */
   if ((oss_fmt != AFMT_AC3) && 8 == oss_ch)
   {
