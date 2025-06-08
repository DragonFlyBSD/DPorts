--- lib/ieee754.in.h.orig	2025-05-13 11:41:33.818289000 +0200
+++ lib/ieee754.in.h	2025-05-13 11:42:33.829047000 +0200
@@ -28,6 +28,9 @@
 # define _IEEE754_FLOAT_WORD_ORDER __FLOAT_WORD_ORDER
 #else
 /* Gnulib usage.  */
+#if defined(__DragonFLy__)
+#include <machine/endian.h>
+#endif
 # include <endian.h>
 # define _IEEE754_BYTE_ORDER BYTE_ORDER
 # define _IEEE754_BIG_ENDIAN BIG_ENDIAN
