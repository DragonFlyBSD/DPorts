--- lib/byteorder64.h.orig	2016-04-11 07:18:42.000000000 +0300
+++ lib/byteorder64.h
@@ -49,7 +49,7 @@
 
 #if defined(__linux__)
 #  include <endian.h>
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #elif defined(__OpenBSD__)
 #  include <sys/types.h>
