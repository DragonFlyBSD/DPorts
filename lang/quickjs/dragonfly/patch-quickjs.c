--- quickjs.c.intermediate	2020-01-02 18:32:47.000000000 +0000
+++ quickjs.c
@@ -1349,7 +1349,7 @@ static inline size_t js_def_malloc_usabl
     return malloc_usable_size(ptr);
 #else
     /* change this to `return 0;` if compilation fails */
-    return malloc_usable_size(ptr);
+    return 0;/* return malloc_usable_size(ptr); */
 #endif
 }
 
