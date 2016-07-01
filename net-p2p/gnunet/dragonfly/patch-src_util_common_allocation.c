--- src/util/common_allocation.c.orig	2013-12-09 11:28:23.000000000 +0200
+++ src/util/common_allocation.c
@@ -198,8 +198,10 @@ GNUNET_xrealloc_ (void *ptr, size_t n, c
 #define M_SIZE(p) _msize (p)
 #endif
 #ifdef FREEBSD
+#ifndef __DragonFly__
 #include <malloc_np.h>
 #endif
+#endif
 #if HAVE_MALLOC_USABLE_SIZE
 #define M_SIZE(p) malloc_usable_size (p)
 #elif HAVE_MALLOC_SIZE
