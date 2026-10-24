--- pandas/_libs/src/vendored/numpy/datetime/np_datetime.c.orig	2025-09-29 22:12:09 UTC
+++ pandas/_libs/src/vendored/numpy/datetime/np_datetime.c
@@ -43,6 +43,10 @@ This file is derived from NumPy 1.7. See NUMPY_LICENSE
 #define checked_int64_add(a, b, res) __builtin_add_overflow(a, b, res)
 #define checked_int64_sub(a, b, res) __builtin_sub_overflow(a, b, res)
 #define checked_int64_mul(a, b, res) __builtin_mul_overflow(a, b, res)
+#elif defined(__GNUC__) && (__GNUC__ >= 5)
+#define checked_int64_add(a, b, res) __builtin_add_overflow(a, b, res)
+#define checked_int64_sub(a, b, res) __builtin_sub_overflow(a, b, res)
+#define checked_int64_mul(a, b, res) __builtin_mul_overflow(a, b, res)
 #else
 _Static_assert(0,
                "Overflow checking not detected; please try a newer compiler");
