--- usr/lib/soft_stdll/soft_specific.c.orig	2026-10-26 02:22:43 UTC
+++ usr/lib/soft_stdll/soft_specific.c
@@ -42,7 +42,7 @@
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #ifdef	_BYTE_ORDER
 #define	__BYTE_ORDER    _BYTE_ORDER
