--- third_party/skia/src/core/SkVarAlloc.cpp.intermediate	2015-08-06 08:16:12 UTC
+++ third_party/skia/src/core/SkVarAlloc.cpp
@@ -10,6 +10,8 @@
 // We use non-standard malloc diagnostic methods to make sure our allocations are sized well.
 #if defined(SK_BUILD_FOR_MAC)
     #include <malloc/malloc.h>
+#elif defined(__DragonFly__)
+    #include <stdlib.h>
 #elif defined(SK_BUILD_FOR_UNIX) || defined(SK_BUILD_FOR_WIN32)
 #  if defined(__FreeBSD__)
     #include <stdlib.h>
