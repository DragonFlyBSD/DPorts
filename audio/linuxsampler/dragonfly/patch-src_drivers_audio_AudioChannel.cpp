--- src/drivers/audio/AudioChannel.cpp.intermediate	2016-01-19 16:18:39.000000000 +0200
+++ src/drivers/audio/AudioChannel.cpp
@@ -26,7 +26,7 @@
 #include "../../common/global_private.h"
 #include "../../common/Thread.h" // needed for allocAlignedMem() and freeAlignedMem()
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 # include <stdlib.h>
 #else
 # include <malloc.h>
