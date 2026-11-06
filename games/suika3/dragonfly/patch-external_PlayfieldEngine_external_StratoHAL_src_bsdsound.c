--- external/PlayfieldEngine/external/StratoHAL/src/bsdsound.c.orig	2026-04-30 07:06:04 UTC
+++ external/PlayfieldEngine/external/StratoHAL/src/bsdsound.c
@@ -28,11 +28,11 @@
  * 3. This notice may not be removed or altered from any source distribution.
  */
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__SunOS)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__SunOS)
 
 #include "stratohal/platform.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/soundcard.h>
 #elif defined(__NetBSD__)
 #include <sys/audioio.h>
@@ -62,7 +62,7 @@
 /*
  * Device
  */
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define DEVICE		"/dev/dsp0"
 #elif defined(__NetBSD__)
 #define DEVICE		"/dev/audio0"
@@ -130,7 +130,7 @@ init_sound(void)
 		return false;
 	}
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	unsigned int val;
 
 	/* Set the format. */
