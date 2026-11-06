--- src/ports/SkMemory_malloc.cpp.orig	2024-06-11 14:20:28 UTC
+++ src/ports/SkMemory_malloc.cpp
@@ -15,7 +15,7 @@
 
 #if defined(SK_BUILD_FOR_MAC) || defined(SK_BUILD_FOR_IOS)
 #include <malloc/malloc.h>
-#elif defined(SK_BUILD_FOR_ANDROID) || defined(SK_BUILD_FOR_UNIX)
+#elif defined(SK_BUILD_FOR_ANDROID) || (defined(SK_BUILD_FOR_UNIX) && !defined(__DragonFly__))
 #include <malloc.h>
 #elif defined(SK_BUILD_FOR_WIN)
 #include <malloc.h>
