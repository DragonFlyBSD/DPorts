--- src/siphash.cpp.orig	2020-10-22 11:08:50 UTC
+++ src/siphash.cpp
@@ -46,7 +46,7 @@
 #  define _le64toh(x) OSSwapLittleToHostInt64(x)
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #  define _le64toh(x) le64toh(x)
 #endif
