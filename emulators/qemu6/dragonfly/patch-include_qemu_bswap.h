--- include/qemu/bswap.h.orig	2020-09-15 16:31:14.000000000 +0000
+++ include/qemu/bswap.h
@@ -6,7 +6,7 @@
 #ifdef CONFIG_MACHINE_BSWAP_H
 # include <sys/endian.h>
 # include <machine/bswap.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/endian.h>
 #elif defined(CONFIG_BYTESWAP_H)
 # include <byteswap.h>
