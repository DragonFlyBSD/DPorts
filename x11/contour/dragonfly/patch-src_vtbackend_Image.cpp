--- src/vtbackend/Image.cpp.orig
+++ src/vtbackend/Image.cpp
@@ -14,7 +14,7 @@
     #include <simd>
     namespace simd = std;
     #define VTBACKEND_SIMD_FOUND 1
-#elif __has_include(<experimental/simd>) && !defined(__APPLE__) && !defined(__FreeBSD__)
+#elif __has_include(<experimental/simd>) && !defined(__APPLE__) && !(defined(__FreeBSD__) || defined(__DragonFly__))
     #include <experimental/simd>
     namespace simd = std::experimental;
     #define VTBACKEND_SIMD_FOUND 1
