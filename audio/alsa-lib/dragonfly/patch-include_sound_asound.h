--- include/sound/asound.h.orig	2016-03-31 13:10:39 UTC
+++ include/sound/asound.h
@@ -23,6 +23,9 @@
 #ifndef _UAPI__SOUND_ASOUND_H
 #define _UAPI__SOUND_ASOUND_H
 
+#ifdef __DragonFly__
+#include <sys/time.h>
+#endif
 #if defined(__KERNEL__) || defined(__linux__)
 #include <linux/types.h>
 #else
