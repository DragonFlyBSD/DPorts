--- boost/math/tools/config.hpp.orig	2022-04-06 21:02:44 UTC
+++ boost/math/tools/config.hpp
@@ -90,7 +90,7 @@
 
 #include <boost/math/tools/user.hpp>
 
-#if (defined(__NetBSD__) || defined(__EMSCRIPTEN__)\
+#if (defined(__NetBSD__) || defined(__EMSCRIPTEN__) || defined(__DragonFly__) \
    || (defined(__hppa) && !defined(__OpenBSD__)) || (defined(__NO_LONG_DOUBLE_MATH) && (DBL_MANT_DIG != LDBL_MANT_DIG))) \
    && !defined(BOOST_MATH_NO_LONG_DOUBLE_MATH_FUNCTIONS)
 //#  define BOOST_MATH_NO_LONG_DOUBLE_MATH_FUNCTIONS
@@ -313,6 +313,7 @@ struct non_type {};
 // And then the actual configuration:
 //
 #if defined(BOOST_MATH_STANDALONE) && defined(_GLIBCXX_USE_FLOAT128) && defined(__GNUC__) && defined(__GNUC_MINOR__) && defined(__GNUC_PATCHLEVEL__) && !defined(__STRICT_ANSI__) \
+   && !defined(__DragonFly__) \
    && !defined(BOOST_MATH_DISABLE_FLOAT128) && !defined(BOOST_MATH_USE_FLOAT128)
 #  define BOOST_MATH_USE_FLOAT128
 #elif defined(BOOST_HAS_FLOAT128) && !defined(BOOST_MATH_USE_FLOAT128)
