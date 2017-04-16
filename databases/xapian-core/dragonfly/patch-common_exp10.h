--- common/exp10.h.orig	2017-01-25 00:41:55 UTC
+++ common/exp10.h
@@ -26,14 +26,6 @@
 #endif
 
 #include <cmath>
-#ifndef HAVE_EXP10
-# ifdef HAVE___EXP10
-inline double exp10(double x) { return __exp10(x); }
-# elif HAVE_DECL___BUILTIN_EXP10
-inline double exp10(double x) { return __builtin_exp10(x); }
-# else
 inline double exp10(double x) { return std::pow(10.0, x); }
-#endif
-#endif
 
 #endif // XAPIAN_INCLUDED_EXP10_H
