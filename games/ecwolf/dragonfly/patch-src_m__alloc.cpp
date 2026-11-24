--- src/m_alloc.cpp.orig
+++ src/m_alloc.cpp
@@ -32,7 +32,7 @@
 **
 */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #include <malloc_np.h>
 #elif defined(__APPLE__)
