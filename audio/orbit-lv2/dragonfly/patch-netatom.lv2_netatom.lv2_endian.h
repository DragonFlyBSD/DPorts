--- netatom.lv2/netatom.lv2/endian.h.orig	2017-08-13 10:15:56 UTC
+++ netatom.lv2/netatom.lv2/endian.h
@@ -41,11 +41,11 @@
 #	define __LITTLE_ENDIAN LITTLE_ENDIAN
 #	define __PDP_ENDIAN    PDP_ENDIAN
 
-#elif defined(__OpenBSD__)
+#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #	include <sys/endian.h>
 
-#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
+#elif defined(__NetBSD__)
 
 #	include <sys/endian.h>
 
