--- src/Image.cpp.orig	2016-06-09 17:30:46 UTC
+++ src/Image.cpp
@@ -29,6 +29,8 @@
 #include <fstream>
 #include <cstring>
 #include <cstdio>
+#include <cmath>
+using std::isnan;
 
 #if ( _BOARD_HAVE_MAGICKPLUSPLUS_ == 1 )
 #define MAGICKCORE_QUANTUM_DEPTH 16
