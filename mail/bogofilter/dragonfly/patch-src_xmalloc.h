--- src/xmalloc.h.orig
+++ src/xmalloc.h
@@ -63,7 +63,7 @@
 void *xrealloc(/*@only@*/ void *ptr, size_t size)
 #if defined(__clang__)
 __attribute__((malloc, returns_nonnull))
 #elif defined(__GNUC__)
- __attribute__((malloc, malloc (free, 1), returns_nonnull))
+ __attribute__((malloc, returns_nonnull))
 #endif
 ;
