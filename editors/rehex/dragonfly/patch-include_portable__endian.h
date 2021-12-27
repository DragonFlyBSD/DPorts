--- include/portable_endian.h.orig	2021-08-24 19:45:11 UTC
+++ include/portable_endian.h
@@ -35,11 +35,11 @@
 #	define __LITTLE_ENDIAN LITTLE_ENDIAN
 #	define __PDP_ENDIAN    PDP_ENDIAN
 
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 
 #	include <sys/endian.h>
 
-#elif defined(__NetBSD__) || defined(__DragonFly__)
+#elif defined(__NetBSD__)
 
 #	include <sys/endian.h>
 
