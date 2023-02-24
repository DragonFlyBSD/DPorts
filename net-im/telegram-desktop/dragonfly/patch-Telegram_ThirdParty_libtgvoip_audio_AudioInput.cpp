--- Telegram/ThirdParty/libtgvoip/audio/AudioInput.cpp.orig	2022-12-29 05:18:32 UTC
+++ Telegram/ThirdParty/libtgvoip/audio/AudioInput.cpp
@@ -26,7 +26,8 @@
 #include "../os/windows/AudioInputWave.h"
 #endif
 #include "../os/windows/AudioInputWASAPI.h"
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__gnu_hurd__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__gnu_hurd__) || \
+      defined(__DragonFly__)
 #ifndef WITHOUT_ALSA
 #include "../os/linux/AudioInputALSA.h"
 #endif
@@ -72,7 +73,7 @@ void AudioInput::EnumerateDevices(std::v
 	}
 #endif
 	AudioInputWASAPI::EnumerateDevices(devs);
-#elif (defined(__linux__) && !defined(__ANDROID__)) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif (defined(__linux__) && !defined(__ANDROID__)) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #if !defined(WITHOUT_PULSE) && !defined(WITHOUT_ALSA)
 	if(!AudioInputPulse::EnumerateDevices(devs))
 		AudioInputALSA::EnumerateDevices(devs);
