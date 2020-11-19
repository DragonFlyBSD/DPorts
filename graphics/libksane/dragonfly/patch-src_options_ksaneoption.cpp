--- src/options/ksaneoption.cpp.orig	2020-07-06 22:40:20 UTC
+++ src/options/ksaneoption.cpp
@@ -32,6 +32,15 @@
 
 #include <ksane_debug.h>
 
+#ifdef __DragonFly__
+#include <sys/endian.h>
+#ifndef __BYTE_ORDER
+#define	__BYTE_ORDER	_BYTE_ORDER
+#define	__BIG_ENDIAN	_BIG_ENDIAN
+#define	__LITTLE_ENDIAN	_LITTLE_ENDIAN
+#endif
+#endif
+
 namespace KSaneIface
 {
 
