--- libuna/libuna_inline.h.orig	2015-04-06 18:31:00 UTC
+++ libuna/libuna_inline.h
@@ -27,7 +27,7 @@
 #if defined( _MSC_VER )
 #define LIBUNA_INLINE _inline
 
-#elif defined( __BORLANDC__ ) || defined( __clang__ )
+#elif defined( __BORLANDC__ ) || defined( __clang__ ) || ( defined( __GNUC__ ) && __GNUC__ >= 5 )
 #define LIBUNA_INLINE /* inline */
 
 #else
