--- common.h.orig	2026-03-03 12:17:11 UTC
+++ common.h
@@ -54,7 +54,12 @@
 # define DUMMY_INIT(dummy_initial_value) = (dummy_initial_value)
 #endif
 
-#if defined(__has_builtin) && __has_builtin(__builtin_unreachable)
+#ifdef __has_builtin
+#  if __has_builtin(__builtin_unreachable)
+#    define HAS_UNREACHABLE
+#  endif
+#endif
+#if defined(HAS_UNREACHABLE)
 # define UNREACHABLE() \
     do { \
         assert(!"unreachable code"); \
