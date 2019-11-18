--- Linux/SdlSoundManager.cpp.orig	2019-06-25 23:49:22 UTC
+++ Linux/SdlSoundManager.cpp
@@ -3,6 +3,7 @@
 #include "../Core/MessageManager.h"
 #include "../Core/SoundMixer.h"
 #include "../Core/Console.h"
+#include <cmath>	// for std::ceil()
 
 SdlSoundManager::SdlSoundManager(shared_ptr<Console> console)
 {
