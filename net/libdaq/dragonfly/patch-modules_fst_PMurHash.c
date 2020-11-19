--- modules/fst/PMurHash.c.orig	2020-10-22 17:58:27 UTC
+++ modules/fst/PMurHash.c
@@ -76,6 +76,15 @@ on big endian machines, or a byte-by-byt
  * ROTL32(x,r)      Rotate x left by r bits
  */
 
+#ifdef __DragonFly__
+#include <sys/endian.h>
+#ifndef __BYTE_ORDER
+#define	__BYTE_ORDER	_BYTE_ORDER
+#define	__BIG_ENDIAN	_BIG_ENDIAN
+#define	__LITTLE_ENDIAN	_LITTLE_ENDIAN
+#endif
+#endif
+
 /* Convention is to define __BYTE_ORDER == to one of these values */
 #if !defined(__BIG_ENDIAN)
   #define __BIG_ENDIAN 4321
