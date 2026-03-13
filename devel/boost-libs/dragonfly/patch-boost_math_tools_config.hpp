--- boost/math/tools/config.hpp.orig	Thu Dec  5 00:53:33 2024
+++ boost/math/tools/config.hpp	Mon Apr
@@ -221,7 +221,7 @@
 #include <boost/math/tools/user.hpp>
 
 #if (defined(__NetBSD__)\
-   || (defined(__hppa) && !defined(__OpenBSD__)) || (defined(__NO_LONG_DOUBLE_MATH) && (DBL_MANT_DIG != LDBL_MANT_DIG))) \
+    || (defined(__hppa) && !defined(__OpenBSD__) || !defined(__DragonFly__)) || (defined(__NO_LONG_DOUBLE_MATH) && (DBL_MANT_DIG != LDBL_MANT_DIG))) \
    && !defined(BOOST_MATH_NO_LONG_DOUBLE_MATH_FUNCTIONS)
 //#  define BOOST_MATH_NO_LONG_DOUBLE_MATH_FUNCTIONS
 #endif
@@ -467,6 +467,7 @@ struct non_type {};
 // And then the actual configuration:
 //
 #if defined(BOOST_MATH_STANDALONE) && defined(_GLIBCXX_USE_FLOAT128) && defined(__GNUC__) && defined(__GNUC_MINOR__) && defined(__GNUC_PATCHLEVEL__) && !defined(__STRICT_ANSI__) \
+   && !defined(__DragonFly__) \
    && !defined(BOOST_MATH_DISABLE_FLOAT128) && !defined(BOOST_MATH_USE_FLOAT128)
 #  define BOOST_MATH_USE_FLOAT128
 #elif defined(BOOST_HAS_FLOAT128) && !defined(BOOST_MATH_USE_FLOAT128) && !defined(BOOST_MATH_DISABLE_FLOAT128)
