--- src/vehicle.cpp.orig	2015-03-09 07:25:34.000000000 +0200
+++ src/vehicle.cpp
@@ -18,6 +18,8 @@
 #include <sstream>
 #include <stdlib.h>
 #include <set>
+#include <cmath>   // for std::pow
+#include <cstdlib> // for std::abs
 
 /*
  * Speed up all those if ( blarg == "structure" ) statements that are used everywhere;
