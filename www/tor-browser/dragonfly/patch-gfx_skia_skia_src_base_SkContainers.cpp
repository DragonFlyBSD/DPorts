--- gfx/skia/skia/src/base/SkContainers.cpp.orig	2023-09-28 22:51:43 UTC
+++ gfx/skia/skia/src/base/SkContainers.cpp
@@ -14,7 +14,7 @@
 
 #if defined(SK_BUILD_FOR_MAC) || defined(SK_BUILD_FOR_IOS)
 #include <malloc/malloc.h>
-#elif defined(SK_BUILD_FOR_ANDROID) || (defined(SK_BUILD_FOR_UNIX) && !defined(__OpenBSD__))
+#elif defined(SK_BUILD_FOR_ANDROID) || (defined(SK_BUILD_FOR_UNIX) && !defined(__OpenBSD__) && !defined(__DragonFly__))
 #include <malloc.h>
 #elif defined(SK_BUILD_FOR_WIN)
 #include <malloc.h>
