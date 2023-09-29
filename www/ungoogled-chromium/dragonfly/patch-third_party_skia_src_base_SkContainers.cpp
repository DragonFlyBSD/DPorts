diff --git third_party/skia/src/base/SkContainers.cpp third_party/skia/src/base/SkContainers.cpp
index e499a96a509..642af367a67 100644
--- third_party/skia/src/base/SkContainers.cpp
+++ third_party/skia/src/base/SkContainers.cpp
@@ -14,7 +14,8 @@
 
 #if defined(SK_BUILD_FOR_MAC) || defined(SK_BUILD_FOR_IOS)
 #include <malloc/malloc.h>
-#elif defined(SK_BUILD_FOR_ANDROID) || defined(SK_BUILD_FOR_UNIX) && !defined(__OpenBSD__)
+#elif defined(SK_BUILD_FOR_ANDROID) || defined(SK_BUILD_FOR_UNIX) && \
+  !defined(__OpenBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #elif defined(SK_BUILD_FOR_WIN)
 #include <malloc.h>
@@ -38,7 +39,7 @@ SkSpan<std::byte> complete_size(void* ptr, size_t size) {
     #elif defined(SK_BUILD_FOR_ANDROID) && __ANDROID_API__ >= 17
         completeSize = malloc_usable_size(ptr);
         SkASSERT(completeSize >= size);
-    #elif defined(SK_BUILD_FOR_UNIX) && !defined(__OpenBSD__)
+    #elif defined(SK_BUILD_FOR_UNIX) && !defined(__OpenBSD__) && !defined(__DragonFly__)
         completeSize = malloc_usable_size(ptr);
         SkASSERT(completeSize >= size);
     #elif defined(SK_BUILD_FOR_WIN)
