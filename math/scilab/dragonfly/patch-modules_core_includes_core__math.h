--- modules/core/includes/core_math.h.orig	2020-02-25 09:59:46 UTC
+++ modules/core/includes/core_math.h
@@ -33,6 +33,7 @@
 #define finite(x) _finite(x)
 #else               //linux & mac
 #ifdef __cplusplus // C++
+#include <cmath>   // for std::ifinite
 #define finite(x) std::isfinite(x)
 #endif
 #endif /* _MSC_VER */
