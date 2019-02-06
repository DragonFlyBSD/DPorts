--- src/External/zreaders/m_alloc.cpp.orig	2019-02-06 15:46:09 UTC
+++ src/External/zreaders/m_alloc.cpp
@@ -35,6 +35,8 @@
 #if defined(__FreeBSD__)
 #include <stdlib.h>
 #include <malloc_np.h>
+#elif defined(__DragonFly__)
+#include <stdlib.h>
 #elif defined(__APPLE__)
 #include <stdlib.h>
 #include <malloc/malloc.h>
@@ -57,10 +59,11 @@ namespace GC
 #endif
 #if defined(__APPLE__)
 #define _msize(p)				malloc_size(p)
-#elif defined(__sun)
+/* XXX - Maybe add FreeBSD's malloc_usable_size(3) ? */
+#elif defined(__sun) || defined(__DragonFly__)
 #define _msize(p)				(*((size_t*)(p)-1))
-#elif !defined(_WIN32)
-#define _msize(p)				malloc_usable_size(p)	// from glibc/FreeBSD
+#elif !defined(_WIN32) && !defined(__DragonFly__)
+#define _msize(p)				malloc_usable_size(p)	// from glibc/DragonFly
 #endif
 
 #ifndef _DEBUG
