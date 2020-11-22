--- src/lib/libast/std/endian.h.orig	2017-11-30 22:35:04 UTC
+++ src/lib/libast/std/endian.h
@@ -28,9 +28,15 @@
 
 #include <bytesex.h>
 
+#if defined(__DragonFly__)
+#include <sys/endian.h>
+#endif
+
+#ifndef __LITTLE_ENDIAN
 #define	__LITTLE_ENDIAN	1234
 #define	__BIG_ENDIAN	4321
 #define	__PDP_ENDIAN	3412
+#endif
 
 #if defined (__USE_BSD) && !defined(__STRICT_ANSI__)
 
