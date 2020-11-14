--- src/TritonCTS/src/TechChar.cpp.orig	2020-09-12 17:40:11 UTC
+++ src/TritonCTS/src/TechChar.cpp
@@ -45,6 +45,7 @@
 #include "sta/Units.hh"
 
 #include <algorithm>
+#include <cmath>	// for std::floor() std::ceil()
 #include <fstream>
 #include <iomanip>
 #include <ostream>
