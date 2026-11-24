--- src/libknot/endian.h.orig
+++ src/libknot/endian.h
@@ -19,7 +19,7 @@
 #       include <endian.h>
 #elif defined(__FreeBSD__) || defined(__NetBSD__)
 #       include <sys/endian.h>
-#elif defined(__OpenBSD__) || defined(__sun) || defined(__CYGWIN__)
+#elif defined(__OpenBSD__) || defined(__sun) || defined(__CYGWIN__) || defined(__DragonFly__)
 #       include <endian.h>
 #elif defined(__APPLE__)
 #       include <libkern/OSByteOrder.h>
