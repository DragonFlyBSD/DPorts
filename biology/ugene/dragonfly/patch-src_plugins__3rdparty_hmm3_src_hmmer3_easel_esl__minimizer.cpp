--- src/plugins_3rdparty/hmm3/src/hmmer3/easel/esl_minimizer.cpp.orig	2016-03-31 15:22:07.000000000 +0300
+++ src/plugins_3rdparty/hmm3/src/hmmer3/easel/esl_minimizer.cpp
@@ -9,6 +9,7 @@
 #include "esl_config.h"
 
 #include <math.h>
+#include <cmath>
 #include <float.h>
 
 #include "easel.h"
@@ -42,7 +43,7 @@ numeric_derivative(double *x, double *u,
 
       dx[i] = (-0.5 * (f1-f2)) / delta;
 
-      ESL_DASSERT1((! isnan(dx[i])));
+      ESL_DASSERT1((! std::isnan(dx[i])));
     }
 }
 
