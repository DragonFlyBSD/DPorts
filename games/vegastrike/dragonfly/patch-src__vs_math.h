--- src/vs_math.h	2015-12-04 15:43:07.000000000 +0200
+++ src/vs_math.h
@@ -44,6 +44,10 @@
 #if defined (HAVE_MATH_H)
  #include <math.h>
 #endif
+#if defined(__cplusplus) && __cplusplus >= 201103L
+#include <cmath>
+  using std::isnan;
+#endif
 #if  defined (HAVE_FINITE) || defined (BSD)
  #define FINITE( x ) ( finite( x ) )
  #define ISNAN( x ) ( isnan( x ) )
