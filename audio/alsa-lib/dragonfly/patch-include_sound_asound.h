--- include/sound/asound.h.orig	2014-06-17 12:34:19.000000000 +0000
+++ include/sound/asound.h
@@ -23,6 +23,9 @@
 #ifndef _UAPI__SOUND_ASOUND_H
 #define _UAPI__SOUND_ASOUND_H
 
+#ifdef __DragonFly__
+#include <sys/time.h>
+#endif
 #include <linux/types.h>
 
 
