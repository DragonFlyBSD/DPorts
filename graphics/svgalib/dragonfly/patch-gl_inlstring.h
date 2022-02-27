--- gl/inlstring.h.intermediate	2022-02-09 14:11:03.000000000 +0000
+++ gl/inlstring.h
@@ -4,6 +4,7 @@
 
 #if defined(__alpha__) || defined (NO_ASSEMBLY)
 
+#include <string.h>
 #define __memcpy(dst,src,n)			memcpy((dst),(src),(n))
 #define __memcpy_conventional(dst,src,n)	memcpy((dst),(src),(n))
 #define __memcpyb(dst,src,n)			memcpy((dst),(src),(n))
