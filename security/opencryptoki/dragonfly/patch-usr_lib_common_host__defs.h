--- usr/lib/common/host_defs.h.orig	2026-10-26 02:22:43 UTC
+++ usr/lib/common/host_defs.h
@@ -14,7 +14,7 @@
 #define _HOST_DEFS_H
 
 #include <pthread.h>
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #ifdef _BYTE_ORDER
 #define	__BYTE_ORDER    _BYTE_ORDER
