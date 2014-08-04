
$FreeBSD: head/audio/glame/files/patch-src__plugins__audio_io_oss.c 363362 2014-07-29 17:12:47Z adamw $

--- src/plugins/audio_io_oss.c	2003/07/01 12:26:28	1.1
+++ src/plugins/audio_io_oss.c	2003/07/01 12:26:41
@@ -26,9 +26,9 @@
 
 #ifdef HAVE_OSS_LINUX
 #include <linux/soundcard.h>
-#elif HAVE_OSS_SYS
+#elif defined(HAVE_OSS_SYS)
 #include <sys/soundcard.h>
-#elif HAVE_OSS_MACHINE
+#elif defined(HAVE_OSS_MACHINE)
 #include <machine/soundcard.h>
 #else
 #error BUG in OSS configuration.
