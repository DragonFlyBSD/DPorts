--- src/libknot/endian.h.orig	2021-09-08 11:56:11 UTC
+++ src/libknot/endian.h
@@ -30,7 +30,7 @@
 #       include <endian.h>
 #elif defined(__FreeBSD__) || defined(__NetBSD__)
 #       include <sys/endian.h>
-#elif defined(__OpenBSD__) || defined(__sun)
+#elif defined(__OpenBSD__) || defined(__sun) || defined(__DragonFly__)
 #       include <endian.h>
 #elif defined(__APPLE__)
 #       include <libkern/OSByteOrder.h>
