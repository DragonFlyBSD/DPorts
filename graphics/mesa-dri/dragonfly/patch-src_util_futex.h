--- src/util/futex.h.orig	2020-06-19 19:05:11 UTC
+++ src/util/futex.h
@@ -24,7 +24,7 @@
 #ifndef UTIL_FUTEX_H
 #define UTIL_FUTEX_H
 
-/* #if defined(HAVE_LINUX_FUTEX_H) */
+#if defined(HAVE_LINUX_FUTEX_H)
 
 #include <limits.h>
 #include <stdint.h>
@@ -74,6 +74,6 @@ static inline int futex_wait(uint32_t *a
 }
 #endif
 
-/* #endif */
+#endif
 
 #endif /* UTIL_FUTEX_H */
