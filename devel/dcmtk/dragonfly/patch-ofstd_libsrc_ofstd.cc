--- ofstd/libsrc/ofstd.cc.orig	2010-11-01 08:55:56.000000000 +0000
+++ ofstd/libsrc/ofstd.cc
@@ -213,7 +213,7 @@ static int my_isinf(double x)
   return (! _finite(x)) && (! _isnan(x));
 #else
   // Solaris 2.5.1 has finite() and isnan() but not isinf().
-  return (! finite(x)) && (! isnan(x));
+  return (! finite(x)) && (! std::isnan(x));
 #endif
 }
 #endif /* HAVE_ISINF */
@@ -1717,7 +1717,7 @@ void OFStandard::ftoa(
 #ifdef HAVE_WINDOWS_H
   if (_isnan(val))
 #else
-  if (isnan(val))
+  if (std::isnan(val))
 #endif
   {
     OFStandard::strlcpy(dst, "nan", siz);
