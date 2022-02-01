--- unix/povconfig/syspovconfig.h.orig	2021-08-09 02:09:39 UTC
+++ unix/povconfig/syspovconfig.h
@@ -195,6 +195,11 @@ const int NULL=0;
     #define TRY_OPTIMIZED_NOISE_AVX             // AVX-only hand-optimized noise (Intel).
 #endif
 
+#if defined(__GNUC__) && __GNUC__ == 8
+#define DISABLE_AVX
+#define DISABLE_AVX2
+#endif
+
 #if defined(DISABLE_AVX)
     #define DISABLE_OPTIMIZED_NOISE_AVX
     #define DISABLE_OPTIMIZED_NOISE_AVX_PORTABLE
