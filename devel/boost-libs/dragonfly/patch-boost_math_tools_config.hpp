
While there is support for long double on DragonFly (just like OpenBSD)
these functions long double functions wasn't tested so far for c++ in boost
and previously wasn't packed anyway (orphans on plist).
For now explicitly disable them (+ they are slow and unreliable anyway).

--- boost/math/tools/config.hpp.orig	2016-12-07 15:43:17 UTC
+++ boost/math/tools/config.hpp
@@ -28,7 +28,7 @@
 
 #include <boost/math/tools/user.hpp>
 
-#if (defined(__CYGWIN__) || defined(__NetBSD__) \
+#if (defined(__CYGWIN__) || defined(__NetBSD__) || defined(__DragonFly__) \
    || (defined(__hppa) && !defined(__OpenBSD__)) || (defined(__NO_LONG_DOUBLE_MATH) && (DBL_MANT_DIG != LDBL_MANT_DIG))) \
    && !defined(BOOST_MATH_NO_LONG_DOUBLE_MATH_FUNCTIONS)
 #  define BOOST_MATH_NO_LONG_DOUBLE_MATH_FUNCTIONS
