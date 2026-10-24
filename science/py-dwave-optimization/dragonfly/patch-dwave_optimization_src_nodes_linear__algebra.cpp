--- dwave/optimization/src/nodes/linear_algebra.cpp.orig	2026-07-23 19:58:12 UTC
+++ dwave/optimization/src/nodes/linear_algebra.cpp
@@ -20,7 +20,8 @@
 
 #include "dwave-optimization/graph.hpp"
 
-#if __has_include(<openblas_config.h>) and __has_include(<cblas.h>)
+#if defined(DWAVE_OPTIMIZATION_SCIPY_OPENBLAS) and __has_include(<openblas_config.h>) and \
+    __has_include(<cblas.h>)
 #include <cblas.h>
 #define HAS_BLAS_
 #endif
