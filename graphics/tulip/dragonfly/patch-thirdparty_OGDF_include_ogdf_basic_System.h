--- thirdparty/OGDF/include/ogdf/basic/System.h.orig	2026-11-06 03:40:16 UTC
+++ thirdparty/OGDF/include/ogdf/basic/System.h
@@ -34,7 +34,7 @@
 
 #include <ogdf/basic/basic.h>
 
-#if defined(OGDF_SYSTEM_OSX) || defined(__FreeBSD__)
+#if defined(OGDF_SYSTEM_OSX) || defined(__FreeBSD__) || defined(__DragonFly__)
 #	include <stdlib.h>
 #elif defined(OGDF_SYSTEM_UNIX) || defined(__MINGW32__)
 #	include <malloc.h>
@@ -133,7 +133,7 @@ class OGDF_EXPORT System { (public)
 #	else
 		return _aligned_malloc(size, 16);
 #	endif
-#elif defined(OGDF_SYSTEM_OSX) || defined(__FreeBSD__)
+#elif defined(OGDF_SYSTEM_OSX) || defined(__FreeBSD__) || defined(__DragonFly__)
 		// malloc returns 16 byte aligned memory on OS X.
 		return malloc(size);
 #else
