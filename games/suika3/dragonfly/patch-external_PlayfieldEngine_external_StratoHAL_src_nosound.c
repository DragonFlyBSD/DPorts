--- external/PlayfieldEngine/external/StratoHAL/src/nosound.c.orig	2026-04-30 07:06:04 UTC
+++ external/PlayfieldEngine/external/StratoHAL/src/nosound.c
@@ -28,7 +28,7 @@
  * 3. This notice may not be removed or altered from any source distribution.
  */
 
-#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__sun)
+#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__sun)
 
 #include "stratohal/platform.h"
 
