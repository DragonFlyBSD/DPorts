--- Core/SoundMixer.cpp.orig
+++ Core/SoundMixer.cpp
@@ -9,6 +9,7 @@
 #include "OggMixer.h"
 #include "Console.h"
 #include "BaseMapper.h"
+#include <cmath> // for std::ceil()
 
 SoundMixer::SoundMixer(shared_ptr<Console> console)
 {
