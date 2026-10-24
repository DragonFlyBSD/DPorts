--- quickjs.c.orig	2026-10-23 00:00:00 UTC
+++ quickjs.c
@@ -2140,7 +2140,7 @@
     return malloc_size(ptr);
 #elif defined(_WIN32)
     return _msize((void *)ptr);
-#elif defined(__EMSCRIPTEN__)
+#elif defined(__EMSCRIPTEN__) || defined(__DragonFly__)
     return 0;
 #elif defined(__linux__) || defined(__GLIBC__)
     return malloc_usable_size((void *)ptr);
