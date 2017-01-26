--- src/plugins/volume/volume-impl.c.orig	2017-01-23 15:22:28 UTC
+++ src/plugins/volume/volume-impl.c
@@ -30,7 +30,7 @@
 
 #include "volume-impl.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/soundcard.h>
 #elif defined(__sys__) || defined(__Linux__)
 #include <sys/soundcard.h>
