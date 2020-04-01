--- Telegram/cmake/lib_tgvoip.cmake.orig	2020-03-16 18:49:16 UTC
+++ Telegram/cmake/lib_tgvoip.cmake
@@ -113,12 +113,6 @@ else()
         os/linux/AudioInputALSA.h
         os/linux/AudioOutputALSA.cpp
         os/linux/AudioOutputALSA.h
-        os/linux/AudioOutputPulse.cpp
-        os/linux/AudioOutputPulse.h
-        os/linux/AudioInputPulse.cpp
-        os/linux/AudioInputPulse.h
-        os/linux/AudioPulse.cpp
-        os/linux/AudioPulse.h
 
         # POSIX
         os/posix/NetworkSocketPosix.cpp
