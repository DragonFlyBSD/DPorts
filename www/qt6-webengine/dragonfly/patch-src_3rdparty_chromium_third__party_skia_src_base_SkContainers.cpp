--- src/3rdparty/chromium/third_party/skia/src/base/SkContainers.cpp.intermediate	2024-06-09 18:35:17 UTC
+++ src/3rdparty/chromium/third_party/skia/src/base/SkContainers.cpp
@@ -14,7 +14,8 @@
 
 #if defined(SK_BUILD_FOR_MAC) || defined(SK_BUILD_FOR_IOS)
 #include <malloc/malloc.h>
-#elif defined(SK_BUILD_FOR_ANDROID) || defined(SK_BUILD_FOR_UNIX) && !defined(__OpenBSD__)
+#elif defined(SK_BUILD_FOR_ANDROID) || defined(SK_BUILD_FOR_UNIX) && !defined(__OpenBSD__) && \
+      !defined(__DragonFly__)
 #include <malloc.h>
 #elif defined(SK_BUILD_FOR_WIN)
 #include <malloc.h>
