--- Telegram/ThirdParty/libtgvoip/audio/AudioOutput.cpp.orig	2021-09-17 06:49:49 UTC
+++ Telegram/ThirdParty/libtgvoip/audio/AudioOutput.cpp
@@ -29,7 +29,8 @@
 #include "../os/windows/AudioOutputWave.h"
 #endif
 #include "../os/windows/AudioOutputWASAPI.h"
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__gnu_hurd__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__gnu_hurd__) || \
+  defined(__DragonFly__)
 #ifndef WITHOUT_ALSA
 #include "../os/linux/AudioOutputALSA.h"
 #endif
@@ -83,7 +84,8 @@ void AudioOutput::EnumerateDevices(std::
 	}
 #endif
 	AudioOutputWASAPI::EnumerateDevices(devs);
-#elif (defined(__linux__) && !defined(__ANDROID__)) || defined(__FreeBSD__)
+#elif (defined(__linux__) && !defined(__ANDROID__)) || defined(__FreeBSD__) || \
+  defined(__DragonFly__)
 #if !defined(WITHOUT_PULSE) && !defined(WITHOUT_ALSA)
 	if(!AudioOutputPulse::EnumerateDevices(devs))
 		AudioOutputALSA::EnumerateDevices(devs);
