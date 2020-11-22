--- include/argus_compat.h.orig	2015-04-14 14:32:33 UTC
+++ include/argus_compat.h
@@ -74,7 +74,16 @@ extern "C" {
 
 #include <argus_os.h>
 
-#if defined(__FreeBSD__)
+#if defined(__DragonFly__)
+#include <sys/endian.h>
+#ifndef __BYTE_ORDER
+#define __BYTE_ORDER	_BYTE_ORDER
+#define __LITTLE_ENDIAN	_LITTLE_ENDIAN
+#define __BIG_ENDIANG	_BIG_ENDIAN
+#endif
+#endif
+
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
 #if defined(BYTE_ORDER)
 #define __BYTE_ORDER    BYTE_ORDER
 #endif
