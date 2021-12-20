--- src/cts/src/TechChar.cpp.orig	2021-07-16 21:09:30 UTC
+++ src/cts/src/TechChar.cpp
@@ -48,6 +48,7 @@
 #include "rsz/Resizer.hh"
 
 #include <algorithm>
+#include <cmath>	// for std::floor() std::ceil()
 #include <fstream>
 #include <iomanip>
 #include <ostream>
