--- libraries/text/cbits/measure_off.c.orig	2026-03-26 05:07:59 UTC
+++ libraries/text/cbits/measure_off.c
@@ -216,7 +216,10 @@ ssize_t _hs_text_measure_off(const uint8_t *src, size_
   static _Atomic measure_off_t s_impl = (measure_off_t)NULL;
   measure_off_t impl = atomic_load_explicit(&s_impl, memory_order_relaxed);
   if (!impl) {
-#if defined(__x86_64__) && defined(COMPILER_SUPPORTS_AVX512)
+/*
+ * DragonFly BSD does NOT support AVX512 for now
+ */
+#if defined(__x86_64__) && defined(COMPILER_SUPPORTS_AVX512) && !defined(__DragonFly__)
     impl = has_avx512_vl_bw() ? measure_off_avx : measure_off_sse;
 #else
     impl = measure_off_sse;
