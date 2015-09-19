--- src/util/os.h.orig	2012-08-24 19:47:58.000000000 +0300
+++ src/util/os.h
@@ -83,7 +83,7 @@ inline int   OS::int_swap(int x)
 # endif
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__)
 # include <machine/endian.h>
 # if BYTE_ORDER == LITTLE_ENDIAN
 #   define HOST_BYTEORDER_LE
