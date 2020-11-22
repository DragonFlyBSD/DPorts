--- biewlib/sysdep/ia16/endian.h.orig	2001-11-18 17:05:48 UTC
+++ biewlib/sysdep/ia16/endian.h
@@ -29,11 +29,23 @@
 #ifndef	_ENDIAN_H
 #define	_ENDIAN_H	1
 
+#ifdef __DragonFly__
+#include <sys/endian.h>
+#endif
+
+#ifndef __LITTLE_ENDIAN
 #define	__LITTLE_ENDIAN	1234
+#endif
+#ifndef __BIG_ENDIAN
 #define	__BIG_ENDIAN	4321
+#endif
+#ifndef __PDP_ENDIAN
 #define	__PDP_ENDIAN	3412
+#endif
 
+#ifndef __BYTE_ORDER
 #define __BYTE_ORDER __LITTLE_ENDIAN
+#endif
 
 /* Some machines may need to use a different endianness for floating point
     values.  */
@@ -42,10 +54,18 @@
 #endif
 
 #ifdef	__USE_BSD
+#ifndef LITTLE_ENDIAN
 # define LITTLE_ENDIAN	__LITTLE_ENDIAN
+#endif
+#ifndef BIG_ENDIAN
 # define BIG_ENDIAN	__BIG_ENDIAN
+#endif
+#ifndef PDP_ENDIAN
 # define PDP_ENDIAN	__PDP_ENDIAN
+#endif
+#ifndef BYTE_ORDER
 # define BYTE_ORDER	__BYTE_ORDER
 #endif
+#endif
 
 #endif	/* endian.h */
