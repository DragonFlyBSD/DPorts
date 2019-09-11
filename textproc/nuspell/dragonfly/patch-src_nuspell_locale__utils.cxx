--- src/nuspell/locale_utils.cxx.orig	2019-08-08 08:30:19 UTC
+++ src/nuspell/locale_utils.cxx
@@ -33,9 +33,9 @@
 #endif
 
 #if !defined(U_WCHAR_IS_UTF32) && !defined(U_WCHAR_IS_UTF16) &&                \
-    !defined(__FreeBSD__)
+    !defined(__FreeBSD__) && !defined(__DragonFly__)
 #error "Platform has poor Unicode support. wchar_t must be Unicode."
-#elif defined(__STDC_MB_MIGHT_NEQ_WC__) && !defined(__FreeBSD__)
+#elif defined(__STDC_MB_MIGHT_NEQ_WC__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #error "Platform has non-ASCII narrow string literals."
 #endif
 
