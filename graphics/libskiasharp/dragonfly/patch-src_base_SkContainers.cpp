--- src/base/SkContainers.cpp.orig	2024-10-24 03:17:23 UTC
+++ src/base/SkContainers.cpp
@@ -14,6 +14,8 @@
 
 #if defined(SK_BUILD_FOR_MAC) || defined(SK_BUILD_FOR_IOS)
 #include <malloc/malloc.h>
+#elif defined(__DragonFly__)
+#include <malloc_np.h>
 #elif defined(SK_BUILD_FOR_ANDROID) || defined(SK_BUILD_FOR_UNIX)
 #include <malloc.h>
 #elif defined(SK_BUILD_FOR_WIN)
