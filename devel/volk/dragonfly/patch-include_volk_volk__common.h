--- include/volk/volk_common.h.orig	2022-12-12 21:42:37.512952000 +0100
+++ include/volk/volk_common.h	2022-12-12 21:42:46.833109000 +0100
@@ -145,12 +145,21 @@ union bit256 {
 ////////////////////////////////////////////////////////////////////////
 // log2f
 ////////////////////////////////////////////////////////////////////////
+#ifdef __cplusplus
+#include <cmath>
+#else
 #include <math.h>
+#endif
 // +-Inf -> +-127.0f in order to match the behaviour of the SIMD kernels
 static inline float log2f_non_ieee(float f)
 {
+#ifdef __cplusplus
+    float const result = std::log2f(f);
+    return std::isinf(result) ? std::copysignf(127.0f, result) : result;
+#else
     float const result = log2f(f);
     return isinf(result) ? copysignf(127.0f, result) : result;
+#endif
 }
 
 ////////////////////////////////////////////////////////////////////////
