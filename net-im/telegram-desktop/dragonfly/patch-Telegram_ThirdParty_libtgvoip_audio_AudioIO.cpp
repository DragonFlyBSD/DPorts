--- Telegram/ThirdParty/libtgvoip/audio/AudioIO.cpp.orig	2022-12-29 05:18:32 UTC
+++ Telegram/ThirdParty/libtgvoip/audio/AudioIO.cpp
@@ -31,7 +31,8 @@
 #endif
 #include "../os/windows/AudioInputWASAPI.h"
 #include "../os/windows/AudioOutputWASAPI.h"
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__gnu_hurd__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__gnu_hurd__) || \
+      defined(__DragonFly__)
 #ifndef WITHOUT_ALSA
 #include "../os/linux/AudioInputALSA.h"
 #include "../os/linux/AudioOutputALSA.h"
@@ -65,7 +66,7 @@ AudioIO* AudioIO::Create(std::string inp
 		return new ContextlessAudioIO<AudioInputWave, AudioOutputWave>(inputDevice, outputDevice);
 #endif
 	return new ContextlessAudioIO<AudioInputWASAPI, AudioOutputWASAPI>(inputDevice, outputDevice);
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #ifndef WITHOUT_ALSA
 #ifndef WITHOUT_PULSE
 	if(AudioPulse::Load()){
