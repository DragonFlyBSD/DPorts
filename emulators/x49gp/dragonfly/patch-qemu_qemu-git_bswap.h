--- qemu/qemu-git/bswap.h.orig	2014-01-09 15:46:31 UTC
+++ qemu/qemu-git/bswap.h
@@ -5,10 +5,12 @@
 
 #include <inttypes.h>
 
-#ifdef CONFIG_MACHINE_BSWAP_H
+#if defined(CONFIG_MACHINE_BSWAP_H)
 #include <sys/endian.h>
 #include <sys/types.h>
 #include <machine/bswap.h>
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
+#include <sys/endian.h>
 #else
 
 #ifdef CONFIG_BYTESWAP_H
