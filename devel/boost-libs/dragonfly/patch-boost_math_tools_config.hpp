
While there is support for long double on DragonFly (just like OpenBSD)
these functions long double functions wasn't tested so far for c++ in boost
and previously wasn't packed anyway (orphans on plist, now enabled in FreeBSD).
For now explicitly disable them (+ they are slow and unreliable anyway).

Also disable implicit support for FLOAT128 unless program actually needs them.
In efforts to make boost-libs a bit more robust and performant.

--- boost/math/tools/config.hpp.orig	2016-12-07 15:43:17 UTC
+++ boost/math/tools/config.hpp
@@ -28,7 +28,7 @@
 
 #include <boost/math/tools/user.hpp>
 
-#if (defined(__CYGWIN__) || defined(__NetBSD__) \
+#if (defined(__CYGWIN__) || defined(__NetBSD__) || defined(__DragonFly__) \
    || (defined(__hppa) && !defined(__OpenBSD__)) || (defined(__NO_LONG_DOUBLE_MATH) && (DBL_MANT_DIG != LDBL_MANT_DIG))) \
    && !defined(BOOST_MATH_NO_LONG_DOUBLE_MATH_FUNCTIONS)
 #  define BOOST_MATH_NO_LONG_DOUBLE_MATH_FUNCTIONS
@@ -268,6 +268,7 @@
 // And then the actual configuration:
 //
 #if defined(_GLIBCXX_USE_FLOAT128) && defined(BOOST_GCC) && !defined(__STRICT_ANSI__) \
+   && !defined(__DragonFly__) \
    && !defined(BOOST_MATH_DISABLE_FLOAT128) || defined(BOOST_MATH_USE_FLOAT128)
 //
 // Only enable this when the compiler really is GCC as clang and probably 
