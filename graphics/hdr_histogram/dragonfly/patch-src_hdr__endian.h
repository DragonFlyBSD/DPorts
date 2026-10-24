--- src/hdr_endian.h.orig
+++ src/hdr_endian.h
@@ -40,11 +40,11 @@
 #	define __LITTLE_ENDIAN LITTLE_ENDIAN
 #	define __PDP_ENDIAN    PDP_ENDIAN
 
-#elif defined(__OpenBSD__)
+#elif defined(__OpenBSD__) || defined(__DragonFly__)
 
 #	include <sys/endian.h>
 
-#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
+#elif defined(__NetBSD__) || defined(__FreeBSD__)
 
 #	include <sys/endian.h>
 
