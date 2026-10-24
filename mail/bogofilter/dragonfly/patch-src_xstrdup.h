--- src/xstrdup.h.orig
+++ src/xstrdup.h
@@ -10,5 +10,5 @@
 __attribute__((malloc, returns_nonnull))
 #elif defined(__GNUC__)
- __attribute__((returns_nonnull, malloc, malloc (free)))
+ __attribute__((returns_nonnull, malloc))
 #endif
