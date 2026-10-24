--- src/mxcat.h.orig
+++ src/mxcat.h
@@ -16,7 +16,7 @@
 char *mxcat(const char *first, ...)
 #ifdef __clang__
 __attribute__ ((returns_nonnull, malloc))
 #elif defined(__GNUC__)
-__attribute__ ((returns_nonnull, malloc (free))) 
+__attribute__ ((returns_nonnull, malloc))
 #endif
