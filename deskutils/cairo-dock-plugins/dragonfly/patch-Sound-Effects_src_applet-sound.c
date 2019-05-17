--- Sound-Effects/src/applet-sound.c.intermediate	2019-05-09 17:59:29.000000000 +0000
+++ Sound-Effects/src/applet-sound.c
@@ -20,7 +20,7 @@
 */
 
 #include <stdlib.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <endian.h>
 #include <byteswap.h>
 #else
