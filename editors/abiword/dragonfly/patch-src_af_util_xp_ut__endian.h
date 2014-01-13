--- src/af/util/xp/ut_endian.h.orig	2009-12-13 20:26:17.000000000 +0000
+++ src/af/util/xp/ut_endian.h
@@ -49,7 +49,7 @@
 	#else
 		#define UT_BIG_ENDIAN
 	#endif
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <machine/endian.h>
 	#if __BYTE_ORDER == __LITTLE_ENDIAN		
 		#define UT_LITTLE_ENDIAN
