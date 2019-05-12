--- include/stddef.h.orig	2018-08-20 22:29:20 UTC
+++ include/stddef.h
@@ -54,7 +54,7 @@ using std::nullptr_t;
 
 // Re-use the compiler's <stddef.h> max_align_t where possible.
 #if !defined(__CLANG_MAX_ALIGN_T_DEFINED) && !defined(_GCC_MAX_ALIGN_T) && \
-    !defined(__DEFINED_max_align_t) && !defined(__NetBSD__)
+    !defined(__DEFINED_max_align_t) && !defined(__NetBSD__) && !defined(_MAX_ALIGN_T_DECLARED)
 typedef long double max_align_t;
 #endif
 
