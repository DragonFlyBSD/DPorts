--- simgear/canvas/ShaderVG/src/shDefs.h.orig	2026-08-02 12:17:27 UTC
+++ simgear/canvas/ShaderVG/src/shDefs.h
@@ -38,7 +38,7 @@
 #include <stdlib.h>
 #include <stdio.h>
 
-#if !defined(VG_API_MACOSX) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(VG_API_MACOSX) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__OpenBSD__)
 #include <malloc.h>
 #endif
 
