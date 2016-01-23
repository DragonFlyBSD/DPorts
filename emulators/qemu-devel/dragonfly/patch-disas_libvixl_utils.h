--- disas/libvixl/utils.h.orig	2015-12-16 22:04:48 UTC
+++ disas/libvixl/utils.h
@@ -41,6 +41,13 @@ namespace vixl {
 #define PRINTF_CHECK(format_index, varargs_index)
 #endif
 
+#ifndef INT64_C
+#define INT32_C(c) c
+#define INT64_C(c) (c ## LL)
+#define UINT32_C(c) (c ## U)
+#define UINT64_C(c) (c ## ULL)
+#endif
+
 // Check number width.
 inline bool is_intn(unsigned n, int64_t x) {
   VIXL_ASSERT((0 < n) && (n < 64));
