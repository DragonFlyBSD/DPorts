--- src/fixer.h.orig
+++ src/fixer.h
@@ -35,6 +35,10 @@
 #include <string.h>
 #include <limits.h>
 #include <inttypes.h> /* int64_t */
+#ifdef __cplusplus
+/* libstdc++'s math.h pulls in <limits>, which the min/max macros below break */
+#include <math.h>
+#endif
 
 #include "files.h"
 
