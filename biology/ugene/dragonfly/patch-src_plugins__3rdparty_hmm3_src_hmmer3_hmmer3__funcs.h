--- src/plugins_3rdparty/hmm3/src/hmmer3/hmmer3_funcs.h.orig	2016-03-31 15:22:07.000000000 +0300
+++ src/plugins_3rdparty/hmm3/src/hmmer3/hmmer3_funcs.h
@@ -14,6 +14,7 @@ extern float    roundf( float x );
 
 #else // if not Windows -> we have all functions and defines in math.h
 #include <math.h>
+#include <cmath> // for std::isnan std::isinf
 #endif // _WINDOWS
 
 extern float infinity();
