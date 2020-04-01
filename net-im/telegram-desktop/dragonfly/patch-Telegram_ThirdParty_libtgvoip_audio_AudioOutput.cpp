--- Telegram/ThirdParty/libtgvoip/audio/AudioOutput.cpp.intermediate	2020-04-01 18:00:03 UTC
+++ Telegram/ThirdParty/libtgvoip/audio/AudioOutput.cpp
@@ -29,7 +29,8 @@
 #include "../os/windows/AudioOutputWave.h"
 #endif
 #include "../os/windows/AudioOutputWASAPI.h"
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__gnu_hurd__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__gnu_hurd__) || \
+  defined(__DragonFly__)
 #ifndef WITHOUT_ALSA
 #include "../os/linux/AudioOutputALSA.h"
 #endif
@@ -83,7 +84,7 @@ void AudioOutput::EnumerateDevices(std::
 	}
 #endif
 	AudioOutputWASAPI::EnumerateDevices(devs);
-#elif (defined(__linux__) || defined(__FreeBSD__)) && !defined(__ANDROID__)
+#elif (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(__ANDROID__)
 #if !defined(WITHOUT_PULSE) && !defined(WITHOUT_ALSA)
 	if(!AudioOutputPulse::EnumerateDevices(devs))
 		AudioOutputALSA::EnumerateDevices(devs);
