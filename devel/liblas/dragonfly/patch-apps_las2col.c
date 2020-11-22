--- apps/las2col.c.orig	2016-08-23 16:41:33 UTC
+++ apps/las2col.c
@@ -53,12 +53,12 @@
 #	define __LITTLE_ENDIAN LITTLE_ENDIAN
 #	define __PDP_ENDIAN    PDP_ENDIAN
 
-#elif defined(__OpenBSD__)
+#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <unistd.h>
 #	include <sys/endian.h>
 
-#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
+#elif defined(__NetBSD__)
 
 #	include <sys/endian.h>
 
