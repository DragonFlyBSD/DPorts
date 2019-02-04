--- xbmc/cores/AudioEngine/AESinkFactory.cpp.orig	2018-08-04 14:10:19.769826000 +0200
+++ xbmc/cores/AudioEngine/AESinkFactory.cpp	2018-08-04 14:11:08.820883000 +0200
@@ -32,11 +32,11 @@
   #include "Sinks/AESinkDARWINIOS.h"
 #elif defined(TARGET_DARWIN_OSX)
   #include "Sinks/AESinkDARWINOSX.h"
-#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD)
+#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   #if defined(HAS_ALSA)
     #include "Sinks/AESinkALSA.h"
   #endif
-  #if defined(TARGET_FREEBSD)
+  #if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
     #include "Sinks/AESinkOSS.h"
   #endif
   #if defined(HAS_PULSEAUDIO)
@@ -73,11 +73,11 @@ void CAESinkFactory::ParseDevice(std::st
         driver == "DARWINIOS"  ||
 #elif defined(TARGET_DARWIN_OSX)
         driver == "DARWINOSX"  ||
-#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD)
+#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   #if defined(HAS_ALSA)
         driver == "ALSA"        ||
   #endif
-  #if defined(TARGET_FREEBSD)
+  #if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
         driver == "OSS"         ||
   #endif
   #if defined(HAS_PULSEAUDIO)
@@ -120,7 +120,7 @@ IAESink *CAESinkFactory::TrySink(std::st
     sink = new CAESinkDARWINIOS();
 #elif defined(TARGET_DARWIN_OSX)
     sink = new CAESinkDARWINOSX();
-#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD)
+#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
  #if defined(HAS_PULSEAUDIO)
     if (driver == "PULSE")
       sink = new CAESinkPULSE();
@@ -129,7 +129,7 @@ IAESink *CAESinkFactory::TrySink(std::st
     if (driver == "ALSA")
       sink = new CAESinkALSA();
  #endif
- #if defined(TARGET_FREEBSD)
+ #if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
     if (driver == "OSS")
       sink = new CAESinkOSS();
  #endif
@@ -231,7 +231,7 @@ void CAESinkFactory::EnumerateEx(AESinkI
   if(!info.m_deviceInfoList.empty())
     list.push_back(info);
 
-#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD)
+#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   // check if user wants us to do something specific
   if (getenv("AE_SINK"))
   {
@@ -246,7 +246,7 @@ void CAESinkFactory::EnumerateEx(AESinkI
     if (envSink == "ALSA")
       CAESinkALSA::EnumerateDevicesEx(info.m_deviceInfoList, force);
     #endif
-    #if defined(TARGET_FREEBSD)
+    #if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
     if (envSink == "OSS")
       CAESinkOSS::EnumerateDevicesEx(info.m_deviceInfoList, force);
     #endif
@@ -282,7 +282,7 @@ void CAESinkFactory::EnumerateEx(AESinkI
     return;
   }
   #endif
-  #if defined(TARGET_FREEBSD)
+  #if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   info.m_deviceInfoList.clear();
   info.m_sinkName = "OSS";
   CAESinkOSS::EnumerateDevicesEx(info.m_deviceInfoList, force);
