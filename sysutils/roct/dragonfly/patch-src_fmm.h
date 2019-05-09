--- src/fmm.h.orig	2018-11-15 20:11:47 UTC
+++ src/fmm.h
@@ -28,7 +28,7 @@
 
 #include "hsakmttypes.h"
 #include <stddef.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/mman.h>
 #endif
 
