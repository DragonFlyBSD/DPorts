
$FreeBSD: ports/emulators/yape/files/patch-sound.h,v 1.4 2012/11/17 05:57:25 svnexp Exp $

--- sound.h.orig
+++ sound.h
@@ -1,7 +1,7 @@
 #ifndef _SOUND_H
 #define _SOUND_H
 
-#include <SDL/SDL.h>
+#include <SDL.h>
 #include "types.h"
 
 extern void init_audio(unsigned int sampleFrq = 48000);
