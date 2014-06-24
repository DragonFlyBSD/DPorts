--- include/asterisk/endian.h.orig	2008-10-09 17:48:53.000000000 +0000
+++ include/asterisk/endian.h
@@ -31,7 +31,8 @@
 #ifndef __BYTE_ORDER
 #ifdef __linux__
 #include <endian.h>
-#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) \
+   || defined(__APPLE__) || defined(__DragonFly__)
 #if defined(__OpenBSD__)
 #include "asterisk/compat.h"
 #endif
