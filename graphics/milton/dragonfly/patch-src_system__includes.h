--- src/system_includes.h.intermediate	2021-12-28 06:18:00.000000000 +0000
+++ src/system_includes.h
@@ -68,3 +68,8 @@
 #pragma warning(pop)
 #endif  // _WIN32 && _MSC_VER
 
+#if defined(__cplusplus)
+#include <algorithm>
+using std::max;
+using std::min;
+#endif
