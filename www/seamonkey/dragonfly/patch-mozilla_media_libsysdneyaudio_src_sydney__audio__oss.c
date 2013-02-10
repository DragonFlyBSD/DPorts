--- mozilla/media/libsydneyaudio/src/sydney_audio_oss.c.orig	2013-01-06 07:26:25.000000000 +0100
+++ mozilla/media/libsydneyaudio/src/sydney_audio_oss.c	2013-02-07 08:55:15.434895000 +0100
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
@@ -446,6 +442,10 @@
           printf("!");  /* not enough audio data */
 #endif
           bytes = bytes-bytes_to_copy;
+          struct timespec ts = {0, 1000000};
+          pthread_mutex_unlock(&s->mutex);
+          nanosleep(&ts, NULL);
+          pthread_mutex_lock(&s->mutex);
           break;
         }
         free(s->bl_head);
@@ -695,4 +695,3 @@
 
 const char *sa_strerror(int code) { return NULL; }
 
-#endif
