--- rtengine/improcfun.h.intermediate	2015-12-30 19:22:27.000000000 +0200
+++ rtengine/improcfun.h
@@ -19,10 +19,12 @@
 #ifndef _IMPROCFUN_H_
 #define _IMPROCFUN_H_
 
+#ifdef __FreeBSD__
 #include <sys/param.h>
 #if __FreeBSD_version <= 704100 || (__FreeBSD_version >= 800000 && __FreeBSD_version < 802502) || (__FreeBSD_version >= 900000 && __FreeBSD_version < 900027)
 #define log2(x) (log(x) / M_LN2)
 #endif
+#endif
 
 #include "imagefloat.h"
 #include "image16.h"
