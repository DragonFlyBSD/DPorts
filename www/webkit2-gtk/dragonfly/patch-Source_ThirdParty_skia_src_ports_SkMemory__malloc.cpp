--- Source/ThirdParty/skia/src/ports/SkMemory_malloc.cpp.orig	Mon Aug 19 06:28:38 2024
+++ Source/ThirdParty/skia/src/ports/SkMemory_malloc.cpp	Wed Oct
@@ -15,7 +15,7 @@
 
 #if defined(SK_BUILD_FOR_MAC) || defined(SK_BUILD_FOR_IOS)
 #include <malloc/malloc.h>
-#elif defined(SK_BUILD_FOR_ANDROID) || defined(SK_BUILD_FOR_UNIX)
+#elif !defined(__DragonFly__) && (defined(SK_BUILD_FOR_ANDROID) || defined(SK_BUILD_FOR_UNIX))
 #include <malloc.h>
 #elif defined(SK_BUILD_FOR_WIN)
 #include <malloc.h>
