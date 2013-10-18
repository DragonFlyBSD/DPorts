
$FreeBSD: lang/racket-textual/files/patch-.._racket_include_scheme.h 329701 2013-10-07 13:11:03Z olgeni $

--- ../racket/include/scheme.h.orig
+++ ../racket/include/scheme.h
@@ -63,11 +63,6 @@
 # define MZ_USE_SINGLE_FLOATS
 #endif
 
-/* gcc defines __SSE_MATH__ when SSE floating point is enabled: */
-#ifdef __SSE_MATH__
-# define C_COMPILER_USES_SSE 1
-#endif
-
 #ifdef C_COMPILER_USES_SSE
 # if defined(MZ_TRY_EXTFLONUMS) && !defined(MZ_NO_EXTFLONUMS)
 #  define MZ_LONG_DOUBLE
