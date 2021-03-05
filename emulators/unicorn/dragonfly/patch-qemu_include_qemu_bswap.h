--- qemu/include/qemu/bswap.h.orig	2020-05-29 03:56:24 UTC
+++ qemu/include/qemu/bswap.h
@@ -11,7 +11,7 @@
 # include <sys/endian.h>
 # include <sys/types.h>
 # include <machine/bswap.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/endian.h>
 #elif defined(CONFIG_BYTESWAP_H)
 # include <byteswap.h>
