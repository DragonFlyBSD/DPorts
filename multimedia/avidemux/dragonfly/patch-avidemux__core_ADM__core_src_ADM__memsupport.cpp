--- avidemux_core/ADM_core/src/ADM_memsupport.cpp.orig
+++ avidemux_core/ADM_core/src/ADM_memsupport.cpp
@@ -23,7 +23,7 @@
  *   (at your option) any later version.                                   *
  *                                                                         *
  ***************************************************************************/
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 #include "ADM_default.h"
@@ -74,7 +74,7 @@
 
 	ADM_aligned_free(ptr);
 }
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 void *ADM_aligned_alloc(size_t size)
 {
     return malloc(size);
