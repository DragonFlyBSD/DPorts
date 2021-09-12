--- 3rdparty/quickjs/quickjs.c.orig	2021-04-18 18:28:41 UTC
+++ 3rdparty/quickjs/quickjs.c
@@ -1715,6 +1715,8 @@ static inline size_t js_def_malloc_usabl
     return 0;
 #elif defined(__linux__)
     return malloc_usable_size(ptr);
+#elif defined(__DragonFly__)
+    return 0;
 #else
     /* change this to `return 0;` if compilation fails */
     return malloc_usable_size(ptr);
@@ -1785,7 +1787,8 @@ static const JSMallocFunctions def_mallo
     malloc_size,
 #elif defined(_WIN32)
     (size_t (*)(const void *))_msize,
-#elif defined(EMSCRIPTEN) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(EMSCRIPTEN) || defined(__OpenBSD__) || defined(__NetBSD__) || \
+	defined(__DragonFly__)
     NULL,
 #elif defined(__linux__)
     (size_t (*)(const void *))malloc_usable_size,
