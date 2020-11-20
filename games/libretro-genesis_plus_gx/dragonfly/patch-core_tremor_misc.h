--- core/tremor/misc.h.orig	2020-02-08 21:59:22 UTC
+++ core/tremor/misc.h
@@ -37,6 +37,15 @@
 #include <sys/types.h>
 #endif
 
+#ifdef __linux__
+#include <endian.h>
+#else
+#include <sys/endian.h>
+#endif
+#if !defined(BYTE_ORDER) || !defined(LITTLE_ENDIAN) || !defined(BIG_ENDIAN)
+#error "Can not figure out BYTE_ORDER"
+#endif
+
 #if BYTE_ORDER==BIG_ENDIAN
 union magic {
   struct {
