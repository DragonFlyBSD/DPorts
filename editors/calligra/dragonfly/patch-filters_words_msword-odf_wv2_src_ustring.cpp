--- filters/words/msword-odf/wv2/src/ustring.cpp.orig	2013-03-11 08:29:34.000000000 +0000
+++ filters/words/msword-odf/wv2/src/ustring.cpp
@@ -34,7 +34,7 @@
 #endif
 
 #ifdef HAVE_MATH_H
-#include <math.h>
+#include <cmath>
 #endif
 #ifdef HAVE_FLOAT_H
 #include <float.h>
@@ -63,14 +63,7 @@ using namespace wvWare;
 
 bool wvWare::isNaN(double d)
 {
-#ifdef HAVE_FUNC_ISNAN
-  return isnan(d);
-#elif defined HAVE_FLOAT_H
-  return _isnan(d) != 0;
-#else
-  // IEEE: NaN != NaN
-  return !(d == d);
-#endif
+  return std::isnan(d);
 }
 
 bool wvWare::isPosInf(double d)
