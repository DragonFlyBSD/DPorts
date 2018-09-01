--- include/stddef.h.orig	2017-02-10 01:27:42 UTC
+++ include/stddef.h
@@ -54,7 +54,7 @@ using std::nullptr_t;
 
 // Re-use the compiler's <stddef.h> max_align_t where possible.
 #if !defined(__CLANG_MAX_ALIGN_T_DEFINED) && !defined(_GCC_MAX_ALIGN_T) && \
-    !defined(__DEFINED_max_align_t)
+  !defined(__DEFINED_max_align_t) && !defined(_MAX_ALIGN_T_DECLARED)
 typedef long double max_align_t;
 #endif
 
