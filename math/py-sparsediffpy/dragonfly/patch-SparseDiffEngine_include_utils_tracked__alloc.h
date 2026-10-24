--- SparseDiffEngine/include/utils/tracked_alloc.h.orig	2022-11-09 12:37:21 UTC
+++ SparseDiffEngine/include/utils/tracked_alloc.h
@@ -29,6 +29,9 @@
 #elif defined(_WIN32) || defined(_WIN64)
 #include <malloc.h>
 #define TRACKED_BLOCK_SIZE(p) _msize(p)
+#elif defined(__DragonFly__)
+#include <malloc_np.h>
+#define TRACKED_BLOCK_SIZE(p) malloc_usable_size(p)
 #else
 #include <malloc.h>
 #define TRACKED_BLOCK_SIZE(p) malloc_usable_size(p)
