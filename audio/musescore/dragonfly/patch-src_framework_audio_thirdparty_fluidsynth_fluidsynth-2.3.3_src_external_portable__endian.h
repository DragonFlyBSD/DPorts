--- src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src/external/portable_endian.h.orig
+++ src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src/external/portable_endian.h
@@ -52,7 +52,7 @@
 
 #	include <sys/endian.h>
 
-#elif defined(__NetBSD__) || defined(__DragonFly__) || defined(__FreeBSD__)
+#elif defined(__NetBSD__) || defined(__FreeBSD__)
 
 #	include <sys/endian.h>
 #ifndef __FreeBSD__
@@ -69,7 +69,13 @@
 #       define __BYTE_ORDER _BYTE_ORDER
 #	define __BIG_ENDIAN    _BIG_ENDIAN
 #	define __LITTLE_ENDIAN _LITTLE_ENDIAN
-#endif 
+#endif
+#elif defined(__DragonFly__)
+
+#	include <sys/endian.h>
+#	define __BYTE_ORDER _BYTE_ORDER
+#	define __BIG_ENDIAN    _BIG_ENDIAN
+#	define __LITTLE_ENDIAN _LITTLE_ENDIAN
 #elif defined(__WINDOWS__)
 
 #ifdef _MSC_VER
