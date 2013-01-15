--- media/libsydneyaudio/src/sydney_audio_oss.c.intermediate	2013-01-15 19:58:56.231325000 +0100
+++ media/libsydneyaudio/src/sydney_audio_oss.c	2013-01-15 19:59:27.221368000 +0100
@@ -51,7 +51,7 @@
 // support only versions newer than 3.6.1
 #define SUPP_OSS_VERSION OSS_VERSION(3,6,1)
 
-#if (SOUND_VERSION < SUPP_OSS_VERSION)
+#if 0 // (SOUND_VERSION < SUPP_OSS_VERSION)
 #error Unsupported OSS Version
 #else
 
