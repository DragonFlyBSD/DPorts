--- lib/ieee754.in.h.orig	2020-07-29 21:40:41 UTC
+++ lib/ieee754.in.h
@@ -25,6 +25,9 @@
 # include <endian.h>
 #else
 /* Gnulib usage.  */
+#if defined(__DragonFLy__)
+#include <machine/endian.h>
+#endif
 # ifndef __BEGIN_DECLS
 #  ifdef __cplusplus
 #   define __BEGIN_DECLS	extern "C" {
@@ -35,6 +38,7 @@
 #  endif
 # endif
 # ifndef __FLOAT_WORD_ORDER
+#ifndef __BYTE_ORDER
 #  define __LITTLE_ENDIAN	1234
 #  define __BIG_ENDIAN		4321
 #  ifdef WORDS_BIGENDIAN
@@ -42,6 +46,7 @@
 #  else
 #   define __BYTE_ORDER __LITTLE_ENDIAN
 #  endif
+#endif
 #  define __FLOAT_WORD_ORDER __BYTE_ORDER
 # endif
 #endif
