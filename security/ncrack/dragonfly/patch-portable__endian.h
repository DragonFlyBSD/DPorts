--- portable_endian.h.intermediate	2021-12-21 11:53:38.000000000 +0000
+++ portable_endian.h
@@ -83,11 +83,11 @@
 #	define __LITTLE_ENDIAN LITTLE_ENDIAN
 #	define __PDP_ENDIAN    PDP_ENDIAN
 
-#elif defined(__OpenBSD__) || defined (__FreeBSD__)
+#elif defined(__OpenBSD__) || defined (__FreeBSD__) || defined(__DragonFly__)
 
 #	include <sys/endian.h>
 
-#elif defined(__NetBSD__) || defined(__DragonFly__)
+#elif defined(__NetBSD__)
 
 #	include <sys/endian.h>
 
