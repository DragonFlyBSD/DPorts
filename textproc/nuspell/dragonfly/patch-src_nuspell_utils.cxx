--- src/nuspell/utils.cxx.orig	2019-11-23 18:52:51 UTC
+++ src/nuspell/utils.cxx
@@ -32,9 +32,9 @@
 #endif
 
 #if !defined(U_WCHAR_IS_UTF32) && !defined(U_WCHAR_IS_UTF16) &&                \
-    !defined(__FreeBSD__)
+    !defined(__FreeBSD__) && !defined(__DragonFly__)
 #error "Platform has poor Unicode support. wchar_t must be Unicode."
-#elif defined(__STDC_MB_MIGHT_NEQ_WC__) && !defined(__FreeBSD__)
+#elif defined(__STDC_MB_MIGHT_NEQ_WC__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #error "Platform has non-ASCII narrow string literals."
 #endif
 
