--- src/support/strfwd.h.orig	2015-02-07 15:25:11 UTC
+++ src/support/strfwd.h
@@ -13,14 +13,6 @@
 #ifndef STRFWD_H
 #define STRFWD_H
 
-// This includes does nothing but defining _LIBCPP_VERSION
-// if libc++ is used (rather than libstdc++) - we first
-// check if we have at least a c++03 standard before
-// including the file
-#if (__cplusplus > 19971L)
-#include <ciso646>
-#endif
-
 #ifdef USE_WCHAR_T
 
 // Prefer this if possible because GNU libstdc++ has usable
@@ -36,8 +28,7 @@ namespace lyx { typedef boost::uint32_t
 
 #endif
 
-// Forward definitions do not work with libc++
-#ifdef  _LIBCPP_VERSION
+#if 1
 #include <string>
 #else
 
