--- include/asterisk/endian.h.orig	2018-03-15 16:31:26.000000000 +0000
+++ include/asterisk/endian.h
@@ -31,7 +31,7 @@
 #ifndef __BYTE_ORDER
 #ifdef __linux__
 #include <endian.h>
-#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #if defined(__OpenBSD__)
 #include "asterisk/compat.h"
 #endif
