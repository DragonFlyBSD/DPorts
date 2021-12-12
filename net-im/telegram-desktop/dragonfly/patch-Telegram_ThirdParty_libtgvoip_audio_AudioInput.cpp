--- Telegram/ThirdParty/libtgvoip/audio/AudioInput.cpp.orig	2021-09-17 06:49:49 UTC
+++ Telegram/ThirdParty/libtgvoip/audio/AudioInput.cpp
@@ -26,7 +26,8 @@
 #include "../os/windows/AudioInputWave.h"
 #endif
 #include "../os/windows/AudioInputWASAPI.h"
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__gnu_hurd__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__gnu_hurd__) || \
+  defined(__DragonFly__)
 #ifndef WITHOUT_ALSA
 #include "../os/linux/AudioInputALSA.h"
 #endif
@@ -72,7 +73,8 @@ void AudioInput::EnumerateDevices(std::v
 	}
 #endif
 	AudioInputWASAPI::EnumerateDevices(devs);
-#elif (defined(__linux__) && !defined(__ANDROID__)) || defined(__FreeBSD__)
+#elif (defined(__linux__) && !defined(__ANDROID__)) || defined(__FreeBSD__) || \
+  defined(__DragonFly__)
 #if !defined(WITHOUT_PULSE) && !defined(WITHOUT_ALSA)
 	if(!AudioInputPulse::EnumerateDevices(devs))
 		AudioInputALSA::EnumerateDevices(devs);
