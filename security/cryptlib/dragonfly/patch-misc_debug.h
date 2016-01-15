
Use static_assert from assert.h

--- misc/debug.h.orig	2011-07-20 01:59:08.000000000 +0300
+++ misc/debug.h
@@ -84,8 +84,10 @@
   #define static_assert_opt( expr, string ) \
 		  assert( expr )
 #else
+#ifndef static_assert
   #define static_assert( expr, string ) \
 		  { enum { ASSERT_CONCAT( static_assert_, __COUNTER__ ) = 1 / ( !!( expr ) ) }; }
+#endif
   #define static_assert_opt( expr, string ) \
 		  assert( expr )
 #endif /* VC++ vs. other compilers */
