--- src/develop/openmp_maths.h
+++ src/develop/openmp_maths.h
@@ -23,44 +23,41 @@
 #pragma once
 
 
-#if defined(_OPENMP) && !defined(_WIN32) && (!defined(__GNUC__) || __GNUC__ >= 12)
+#if defined(_OPENMP) && !defined(_WIN32) && !defined(__GNUC__)
+  // GCC and CLANG have declarations in standard headers if and only if the architecture and compile options support vectorization, so
+  // don't try to override that here - causes dynamic-link errors at startup.
+  DT_OMP_DECLARE_SIMD()
+  extern float fmaxf(const float x, const float y);
 
-#ifndef __GNUC__  // GCC 12 compiles but fails at runtime due to missing library function
-DT_OMP_DECLARE_SIMD()
-extern float fmaxf(const float x, const float y);
-#endif
+  DT_OMP_DECLARE_SIMD()
+  extern float fminf(const float x, const float y);
 
-#ifndef __GNUC__  // GCC 12 compiles but fails at runtime due to missing library function
-DT_OMP_DECLARE_SIMD()
-extern float fminf(const float x, const float y);
-#endif
+  DT_OMP_DECLARE_SIMD()
+  extern float fabsf(const float x);
 
-DT_OMP_DECLARE_SIMD()
-extern float fabsf(const float x);
-
-DT_OMP_DECLARE_SIMD()
-extern float powf(const float x, const float y);
+  DT_OMP_DECLARE_SIMD()
+  extern float powf(const float x, const float y);
 
-DT_OMP_DECLARE_SIMD()
-extern float sqrtf(const float x);
+  DT_OMP_DECLARE_SIMD()
+  extern float sqrtf(const float x);
 
-DT_OMP_DECLARE_SIMD()
-extern float cbrtf(const float x);
+  DT_OMP_DECLARE_SIMD()
+  extern float cbrtf(const float x);
 
-DT_OMP_DECLARE_SIMD()
-extern float log2f(const float x);
+  DT_OMP_DECLARE_SIMD()
+  extern float log2f(const float x);
 
-DT_OMP_DECLARE_SIMD()
-extern float exp2f(const float x);
+  DT_OMP_DECLARE_SIMD()
+  extern float exp2f(const float x);
 
-DT_OMP_DECLARE_SIMD()
-extern float log10f(const float x);
+  DT_OMP_DECLARE_SIMD()
+  extern float log10f(const float x);
 
-DT_OMP_DECLARE_SIMD()
-extern float expf(const float x);
+  DT_OMP_DECLARE_SIMD()
+  extern float expf(const float x);
 
-DT_OMP_DECLARE_SIMD()
-extern float logf(const float x);
+  DT_OMP_DECLARE_SIMD()
+  extern float logf(const float x);
 
 #endif
 

