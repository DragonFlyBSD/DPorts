--- simgear/canvas/ShaderVG/src/shConfig.h.orig	2026-08-02 12:17:27 UTC
+++ simgear/canvas/ShaderVG/src/shConfig.h
@@ -25,7 +25,7 @@
 // MacOS
 #define VG_API_MACOSX
 
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 
 // FreeBSD
 #define VG_API_FREEBSD
