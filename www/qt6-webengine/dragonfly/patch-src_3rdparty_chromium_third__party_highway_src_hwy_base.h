--- src/3rdparty/chromium/third_party/highway/src/hwy/base.h.orig	2026-05-08 07:54:08 UTC
+++ src/3rdparty/chromium/third_party/highway/src/hwy/base.h
@@ -1122,7 +1122,9 @@ HWY_API HWY_BITCASTSCALAR_CONSTEXPR To BitCastScalar(c
 
 #ifndef HWY_HAVE_SCALAR_F16_OPERATORS
 // Recent enough compiler also has operators.
-#if HWY_HAVE_SCALAR_F16_TYPE &&                                       \
+// DragonFly is excluded: its compiler-rt lacks __extendhfsf2 (LLVM 16 changed
+// the ABI), so use the portable software conversion path instead.
+#if HWY_HAVE_SCALAR_F16_TYPE && !defined(__DragonFly__) &&            \
     (HWY_COMPILER_CLANG >= 1800 || HWY_COMPILER_GCC_ACTUAL >= 1200 || \
      (HWY_COMPILER_CLANG >= 1500 && !HWY_COMPILER_CLANGCL &&          \
       !defined(_WIN32)) ||                                            \
