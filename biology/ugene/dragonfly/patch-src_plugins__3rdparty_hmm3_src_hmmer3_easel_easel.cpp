--- src/plugins_3rdparty/hmm3/src/hmmer3/easel/easel.cpp.orig	2016-03-31 15:22:06.000000000 +0300
+++ src/plugins_3rdparty/hmm3/src/hmmer3/easel/easel.cpp
@@ -20,6 +20,7 @@
 #include <stdlib.h>
 #include <string.h>
 #include <math.h>
+#include <cmath>
 #include <ctype.h>
 #include <sys/stat.h>
 #include <sys/types.h>
@@ -1275,8 +1276,8 @@ esl_strdealign(char *s, const char *aseq
 int
 esl_DCompare(double a, double b, double tol)
 {
-    if (isinf(a) && isinf(b))                 return eslOK;
-    if (isnan(a) && isnan(b))                 return eslOK;
+    if (std::isinf(a) && std::isinf(b))       return eslOK;
+    if (std::isnan(a) && std::isnan(b))       return eslOK;
     if (!isfin( a ) || !isfin( b ) )          return eslFAIL;
     if (a == b)                               return eslOK;
     if (fabs(a) == 0. && fabs(b) <= tol)      return eslOK;
@@ -1287,8 +1288,8 @@ esl_DCompare(double a, double b, double
 int
 esl_FCompare(float a, float b, float tol)
 { 
-    if (isinf(a) && isinf(b))                 return eslOK;
-    if (isnan(a) && isnan(b))                 return eslOK;
+    if (std::isinf(a) && std::isinf(b))       return eslOK;
+    if (std::isnan(a) && std::isnan(b))       return eslOK;
     if (!isfin( a ) || !isfin( b ) )          return eslFAIL;
     if (a == b)                               return eslOK;
     if (fabs(a) == 0. && fabs(b) <= tol)      return eslOK;
