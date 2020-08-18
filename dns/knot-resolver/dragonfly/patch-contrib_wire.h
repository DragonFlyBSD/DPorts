--- contrib/wire.h.orig	2020-07-01 12:27:52 UTC
+++ contrib/wire.h
@@ -37,7 +37,7 @@
 #       define le64toh(x) bswap_64 (x)
 #    endif
 #  endif
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #       include <sys/endian.h>
 #elif defined(__OpenBSD__)
 #       include <endian.h>
