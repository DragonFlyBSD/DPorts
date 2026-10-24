--- include/unaligned.h.orig	2026-03-04 13:56:50 UTC
+++ include/unaligned.h
@@ -34,7 +34,7 @@
 #include "stdlib.h"
 #include "string.h"
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/endian.h>
 #define isal_bswap16(x) bswap16(x)
