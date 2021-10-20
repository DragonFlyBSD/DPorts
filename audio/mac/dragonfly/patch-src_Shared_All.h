--- src/Shared/All.h.orig	2010-02-25 21:14:03 UTC
+++ src/Shared/All.h
@@ -121,16 +121,28 @@ Global defines
 /*****************************************************************************************
 Byte order
 *****************************************************************************************/
+#if defined(__DragonFly__)
+#include <sys/endian.h>
+#endif
+
+#ifndef __LITTLE_ENDIAN
 #define __LITTLE_ENDIAN     1234
+#endif
+#ifndef __BIG_ENDIAN
 #define __BIG_ENDIAN        4321
+#endif
 
 #ifdef WORDS_BIGENDIAN
 
+#ifndef __BYTE_ORDER
 #define __BYTE_ORDER        __BIG_ENDIAN
+#endif
 
 #else
 
+#ifndef __BYTE_ORDER
 #define __BYTE_ORDER        __LITTLE_ENDIAN
+#endif
 
 #endif
 
