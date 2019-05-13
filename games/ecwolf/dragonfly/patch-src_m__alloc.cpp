--- src/m_alloc.cpp.orig	2016-10-01 04:13:53 UTC
+++ src/m_alloc.cpp
@@ -38,6 +38,8 @@
 #elif defined(__APPLE__)
 #include <stdlib.h>
 #include <malloc/malloc.h>
+#elif defined(__DragonFly__)
+#include <stdlib.h>
 #else
 #include <malloc.h>
 #endif
@@ -53,6 +55,8 @@
 #define _msize(p)				malloc_size(p)
 #elif defined(__sun) || defined(__ANDROID__)
 #define _msize(p)				(*((size_t*)(p)-1))
+#elif defined(__DragonFly__)
+#define	_msize(x)	0
 #elif !defined(_WIN32)
 #define _msize(p)				malloc_usable_size(p)	// from glibc/FreeBSD
 #endif
