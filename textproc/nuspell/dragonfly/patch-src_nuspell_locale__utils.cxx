--- src/nuspell/locale_utils.cxx.orig	2019-03-19 14:18:46 UTC
+++ src/nuspell/locale_utils.cxx
@@ -33,7 +33,7 @@
 #include <intrin.h>
 #endif
 
-#if !defined(_WIN32) && !defined(__FreeBSD__)
+#if !defined(_WIN32) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #if !defined(__STDC_ISO_10646__) || defined(__STDC_MB_MIGHT_NEQ_WC__)
 #error "Platform has poor Unicode support. wchar_t must be Unicode."
 #endif
