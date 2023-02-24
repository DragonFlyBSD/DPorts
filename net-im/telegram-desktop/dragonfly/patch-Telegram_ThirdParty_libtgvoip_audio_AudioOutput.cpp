--- Telegram/ThirdParty/libtgvoip/audio/AudioOutput.cpp.orig	2022-12-29 05:18:32 UTC
+++ Telegram/ThirdParty/libtgvoip/audio/AudioOutput.cpp
@@ -29,7 +29,9 @@
 #include "../os/windows/AudioOutputWave.h"
 #endif
 #include "../os/windows/AudioOutputWASAPI.h"
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__gnu_hurd__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__gnu_hurd__) || \
+      defined(__DragonFly__)
+
 #ifndef WITHOUT_ALSA
 #include "../os/linux/AudioOutputALSA.h"
 #endif
@@ -83,7 +85,8 @@ void AudioOutput::EnumerateDevices(std::
 	}
 #endif
 	AudioOutputWASAPI::EnumerateDevices(devs);
-#elif (defined(__linux__) && !defined(__ANDROID__)) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif (defined(__linux__) && !defined(__ANDROID__)) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
+      defined(__DragonFly__)
 #if !defined(WITHOUT_PULSE) && !defined(WITHOUT_ALSA)
 	if(!AudioOutputPulse::EnumerateDevices(devs))
 		AudioOutputALSA::EnumerateDevices(devs);
