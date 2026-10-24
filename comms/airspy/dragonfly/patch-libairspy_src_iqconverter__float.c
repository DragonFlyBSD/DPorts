--- libairspy/src/iqconverter_float.c.orig
+++ libairspy/src/iqconverter_float.c
@@ -38,7 +38,7 @@
   #define _aligned_free(mem) free(mem)
   #define _inline inline
   #define FIR_STANDARD
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # if defined(FREEBSD_USE_SIMD)
   #define USE_SSE2
 #include <immintrin.h>
@@ -204,7 +204,7 @@
 	__m128 t = _mm_add_ps(acc, _mm_movehl_ps(acc, acc));
 	acc = _mm_add_ss(t, _mm_shuffle_ps(t, t, 1));
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	float sum = acc[0];
 #else
 	float sum = acc.m128_f32[0];
