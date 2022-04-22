--- core/SoundMixer.cpp.orig	2019-06-25 23:49:22 UTC
+++ Core/SoundMixer.cpp
@@ -8,6 +8,7 @@
 #include "WaveRecorder.h"
 #include "OggMixer.h"
 #include "Console.h"
+#include <cmath>	// for std::ceil()
 
 SoundMixer::SoundMixer(shared_ptr<Console> console)
 {
