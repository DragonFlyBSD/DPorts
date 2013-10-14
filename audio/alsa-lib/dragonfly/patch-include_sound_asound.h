--- include/sound/asound.h.intermediate	2013-10-14 14:57:44.350599000 +0000
+++ include/sound/asound.h
@@ -23,6 +23,9 @@
 #ifndef _UAPI__SOUND_ASOUND_H
 #define _UAPI__SOUND_ASOUND_H
 
+#ifdef __DragonFly__
+#include <sys/time.h>
+#endif
 #ifdef __linux__
 #include <linux/types.h>
 #else
