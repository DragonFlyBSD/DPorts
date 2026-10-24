--- src/sorting.c.orig	2026-02-04 23:26:24 UTC
+++ src/sorting.c
@@ -73,7 +73,7 @@ shvxs_sort_cmp_win32(void *ctx, const void *a, const v
 
 #define SHVXS_QSORT(base, n, size, ctx) qsort_s((base), (n), (size), shvxs_sort_cmp_win32, (ctx))
 
-#elif defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 static int
 shvxs_sort_cmp_bsd(void *ctx, const void *a, const void *b) {
