--- fastops/core/SIMDFunctions.h.orig
+++ fastops/core/SIMDFunctions.h
@@ -11,7 +11,8 @@
 #include <immintrin.h>
 #include <stdint.h>
 
-#if defined(__clang_major__) && !defined(__apple_build_version__) && __clang_major__ >= 8
+#if (defined(__clang_major__) && !defined(__apple_build_version__) && __clang_major__ >= 8) || \
+    (!defined(__clang__) && __GNUC__ >= 11)
 #   define Y_HAVE_NEW_INTRINSICS
 #endif
 
