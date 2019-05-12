--- src/globals.h.orig	2012-03-26 08:38:28 UTC
+++ src/globals.h
@@ -43,7 +43,11 @@
 #define VOLUME_MIN 0
 #define VOLUME_MAX 100
 #define MAX_METER 100
+#ifdef __DragonFly__
+#define DEFAULT_SOUND_SYSTEM "<oss>"
+#else
 #define DEFAULT_SOUND_SYSTEM "<pulseaudio>"
+#endif
 #define DEFAULT_SOUND_DEVICE_FILENAME "/dev/dsp"
 #define DEFAULT_SAMPLE_FILENAME "<default>"
 #define DEFAULT_SPEED 75
