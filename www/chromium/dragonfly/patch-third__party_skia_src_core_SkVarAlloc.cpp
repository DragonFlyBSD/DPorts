--- third_party/skia/src/core/SkVarAlloc.cpp.intermediate	2015-06-02 12:46:09 UTC
+++ third_party/skia/src/core/SkVarAlloc.cpp
@@ -3,6 +3,8 @@
 // We use non-standard malloc diagnostic methods to make sure our allocations are sized well.
 #if defined(SK_BUILD_FOR_MAC)
     #include <malloc/malloc.h>
+#elif defined(__DragonFly__)
+    #include <stdlib.h>
 #elif defined(SK_BUILD_FOR_UNIX) || defined(SK_BUILD_FOR_WIN32)
 #  if defined(__FreeBSD__)
     #include <stdlib.h>
@@ -61,6 +63,8 @@ void SkVarAlloc::makeSpace(size_t bytes,
 static size_t heap_size(void* p) {
 #if defined(SK_BUILD_FOR_MAC)
     return malloc_size(p);
+#elif defined(__DragonFly__)
+    return 0;  // Not implemented on DF 
 #elif defined(SK_BUILD_FOR_UNIX) && !defined(__UCLIBC__)
     return malloc_usable_size(p);
 #elif defined(SK_BUILD_FOR_WIN32)
