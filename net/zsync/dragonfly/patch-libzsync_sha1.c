Also deal with possible BSD_VISIBLE

--- libzsync/sha1.c.orig	2010-09-16 17:17:49 UTC
+++ libzsync/sha1.c
@@ -27,11 +27,20 @@ static const char rcsid[] = "$OpenBSD: s
 
 #define rol(value, bits) (((value) << (bits)) | ((value) >> (32 - (bits))))
 
-/* Map Solaris endian stuff to something useful */
-#if defined(_BIG_ENDIAN) && !defined(_BYTE_ORDER)
-#define LITTLE_ENDIAN 0
-#define BIG_ENDIAN 1
-#define BYTE_ORDER 1
+#ifdef __linux__
+#include <endian.h>
+#else
+#include <sys/endian.h>
+#endif
+
+#if !defined(BYTE_ORDER) && defined(_BYTE_ORDER)
+#define BYTE_ORDER _BYTE_ORDER
+#define LITTLE_ENDIAN _LITTLE_ENDIAN
+#define BIG_ENDIAN _BIG_ENDIAN
+#endif
+
+#if !defined(BYTE_ORDER) || !defined(LITTLE_ENDIAN) || !defined(BIG_ENDIAN)
+#error "Can not figure out BYTE_ORDER"
 #endif
 
 /*
