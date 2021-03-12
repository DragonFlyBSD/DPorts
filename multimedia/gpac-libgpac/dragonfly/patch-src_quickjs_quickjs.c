No malloc_usable_size(), not exposed from libc on purpose.

--- src/quickjs/quickjs.c.intermediate	2021-03-12 07:29:48.000000000 +0000
+++ src/quickjs/quickjs.c
@@ -1515,7 +1515,7 @@ static inline size_t js_def_malloc_usabl
     return malloc_size(ptr);
 #elif defined(_WIN32)
     return _msize(ptr);
-#elif defined(EMSCRIPTEN)
+#elif defined(EMSCRIPTEN) || defined(__DragonFly__)
     return 0;
 #elif defined(__linux__) || defined(__NX__) || defined(__FreeBSD__)
     return malloc_usable_size(ptr);
@@ -1589,7 +1589,7 @@ static const JSMallocFunctions def_mallo
     malloc_size,
 #elif defined(_WIN32)
     (size_t (*)(const void *))_msize,
-#elif defined(EMSCRIPTEN)
+#elif defined(EMSCRIPTEN) || defined(__DragonFly__)
     NULL,
 #elif defined(__linux__) || defined(__NX__) || defined(__FreeBSD__)
     (size_t (*)(const void *))malloc_usable_size,
