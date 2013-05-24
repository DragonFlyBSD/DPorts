--- media/libsydneyaudio/src/sydney_audio_oss.c.intermediate	2013-01-06 15:23:34.895108000 +0100
+++ media/libsydneyaudio/src/sydney_audio_oss.c	2013-01-06 15:24:04.865150000 +0100
@@ -23,10 +23,6 @@
 // support only versions newer than 3.6.1
 #define SUPP_OSS_VERSION OSS_VERSION(3,0,1)
 
-#if (SOUND_VERSION < SUPP_OSS_VERSION)
-#error Unsupported OSS Version
-#else
-
 typedef struct sa_buf sa_buf;
 struct sa_buf {
   unsigned int      size;
@@ -698,4 +694,3 @@
 
 const char *sa_strerror(int code) { return NULL; }
 
-#endif
