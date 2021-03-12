--- qjs.c.intermediate	2021-03-12 08:04:36.000000000 +0000
+++ qjs.c
@@ -148,7 +148,7 @@ static inline size_t js_trace_malloc_usa
     return malloc_size(ptr);
 #elif defined(_WIN32)
     return _msize(ptr);
-#elif defined(EMSCRIPTEN)
+#elif defined(EMSCRIPTEN) || defined(__DragonFly__)
     return 0;
 #elif defined(__linux__)
     return malloc_usable_size(ptr);
@@ -264,7 +264,7 @@ static const JSMallocFunctions trace_mf
     malloc_size,
 #elif defined(_WIN32)
     (size_t (*)(const void *))_msize,
-#elif defined(EMSCRIPTEN)
+#elif defined(EMSCRIPTEN) || defined(__DragonFly__)
     NULL,
 #elif defined(__linux__)
     (size_t (*)(const void *))malloc_usable_size,
