--- Telegram/ThirdParty/libtgvoip/audio/AudioInput.cpp.intermediate	2020-04-01 17:35:00 UTC
+++ Telegram/ThirdParty/libtgvoip/audio/AudioInput.cpp
@@ -26,7 +26,8 @@
 #include "../os/windows/AudioInputWave.h"
 #endif
 #include "../os/windows/AudioInputWASAPI.h"
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__gnu_hurd__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__gnu_hurd__) || \
+  defined(__DragonFly__)
 #ifndef WITHOUT_ALSA
 #include "../os/linux/AudioInputALSA.h"
 #endif
@@ -72,7 +73,8 @@ void AudioInput::EnumerateDevices(std::v
 	}
 #endif
 	AudioInputWASAPI::EnumerateDevices(devs);
-#elif (defined(__linux__) || defined(__FreeBSD__)) && !defined(__ANDROID__)
+#elif (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)) && \
+  !defined(__ANDROID__)
 #if !defined(WITHOUT_PULSE) && !defined(WITHOUT_ALSA)
 	if(!AudioInputPulse::EnumerateDevices(devs))
 		AudioInputALSA::EnumerateDevices(devs);
