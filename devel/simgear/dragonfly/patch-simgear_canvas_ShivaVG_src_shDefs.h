--- simgear/canvas/ShivaVG/src/shDefs.h.orig	2026-08-02 12:17:27 UTC
+++ simgear/canvas/ShivaVG/src/shDefs.h
@@ -34,7 +34,7 @@
 #include <math.h>
 #include <float.h>
 
-#if !defined(VG_API_MACOSX) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(VG_API_MACOSX) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__OpenBSD__)
 #  include <malloc.h>
 #endif
 
