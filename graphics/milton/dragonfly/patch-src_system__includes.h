--- src/system_includes.h.orig	2026-11-06 03:01:40 UTC
+++ src/system_includes.h
@@ -46,7 +46,7 @@
 
 #include "gl.h"
 
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include "gl.h"
 
@@ -68,3 +68,8 @@
 #pragma warning(pop)
 #endif  // _WIN32 && _MSC_VER
 
+#if defined(__cplusplus)
+#include <algorithm>
+using std::max;
+using std::min;
+#endif
