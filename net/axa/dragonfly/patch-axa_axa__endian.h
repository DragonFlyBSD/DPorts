--- axa/axa_endian.h.orig
+++ axa/axa_endian.h
@@ -28,7 +28,7 @@
 #include <endian.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #endif
 
