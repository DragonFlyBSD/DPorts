--- Modules/ossaudiodev.c.orig	2022-09-05 13:00:02 UTC
+++ Modules/ossaudiodev.c
@@ -41,7 +41,7 @@
 typedef unsigned long uint32_t;
 #endif
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 # ifndef SNDCTL_DSP_CHANNELS
 #  define SNDCTL_DSP_CHANNELS SOUND_PCM_WRITE_CHANNELS
