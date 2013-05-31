--- include/asoundlib-head.h.intermediate	2013-05-31 08:45:36.000000000 +0000
+++ include/asoundlib-head.h
@@ -34,7 +34,7 @@
 #include <string.h>
 #include <fcntl.h>
 #include <assert.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
@@ -51,7 +51,7 @@
 #include <alsa/error.h>
 #include <alsa/conf.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #define ESTRPIPE	0x7a69	/* Linux PCM suspend errno, fehh?! */
 #define EBADFD		EBADF
