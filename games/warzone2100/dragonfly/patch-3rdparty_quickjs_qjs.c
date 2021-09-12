--- 3rdparty/quickjs/qjs.c.orig	2021-04-18 18:28:41 UTC
+++ 3rdparty/quickjs/qjs.c
@@ -150,6 +150,8 @@ static inline size_t js_trace_malloc_usa
     return 0;
 #elif defined(__linux__)
     return malloc_usable_size(ptr);
+#elif defined(__DragonFly__)
+    return 0;
 #else
     /* change this to `return 0;` if compilation fails */
     return malloc_usable_size(ptr);
