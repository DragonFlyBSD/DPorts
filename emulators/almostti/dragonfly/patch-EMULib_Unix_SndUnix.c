--- EMULib/Unix/SndUnix.c.orig	2009-12-17 07:37:54 UTC
+++ EMULib/Unix/SndUnix.c
@@ -74,7 +74,7 @@ static const unsigned char ULAW[256] =
 
 #else /* !SUN_AUDIO && !ESD_AUDIO */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/soundcard.h>
 #endif
 
