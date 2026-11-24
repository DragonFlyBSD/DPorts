--- src/common/portable_endian.h.orig
+++ src/common/portable_endian.h
@@ -60,11 +60,11 @@
 #define __LITTLE_ENDIAN LITTLE_ENDIAN
 #define __PDP_ENDIAN    PDP_ENDIAN
 
-#elif defined(__NetBSD__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__)
+#elif defined(__NetBSD__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 
-#elif defined(__OpenBSD__) || defined(__DragonFly__)
+#elif defined(__OpenBSD__)
 
 #include <sys/endian.h>
 
