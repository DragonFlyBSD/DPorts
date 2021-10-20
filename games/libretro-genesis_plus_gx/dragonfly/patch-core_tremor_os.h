--- core/tremor/os.h.orig	2020-02-08 21:59:22 UTC
+++ core/tremor/os.h
@@ -45,6 +45,16 @@
 #  define LITTLE_ENDIAN 1
 #  define BYTE_ORDER LITTLE_ENDIAN
 #endif
+#else
+#ifdef __linux__
+#include <endian.h>
+#else
+#include <sys/endian.h>
+#endif
+#endif
+
+#if !defined(BYTE_ORDER) || !defined(LITTLE_ENDIAN) || !defined(BIG_ENDIAN)
+#error "Can not figure out BYTE_ORDER"
 #endif
 
 #ifdef HAVE_ALLOCA_H
