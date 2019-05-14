--- src/m_alloc.cppi.orig	2016-02-22 02:11:13 UTC
+++ src/m_alloc.cpp
@@ -32,12 +32,14 @@
 **
 */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <stdlib.h>
 #include <malloc_np.h>
 #elif defined(__APPLE__)
 #include <stdlib.h>
 #include <malloc/malloc.h>
+#elif defined(__DragonFly__)
+#include <stdlib.h>
 #else
 #include <malloc.h>
 #endif
@@ -54,6 +56,8 @@
 #define _msize(p)				malloc_size(p)
 #elif defined(__sun)
 #define _msize(p)				(*((size_t*)(p)-1))
+#elif defined(__DragonFly__)
+#define	_msize(x)	0
 #elif !defined(_WIN32)
 #define _msize(p)				malloc_usable_size(p)	// from glibc/FreeBSD
 #endif
