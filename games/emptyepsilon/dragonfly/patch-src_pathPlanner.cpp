--- src/pathPlanner.cpp.orig	2020-08-24 18:24:52 UTC
+++ src/pathPlanner.cpp
@@ -1,3 +1,4 @@
+#include <cmath> // for std:lrint()
 #include "pathPlanner.h"
 
 const double small_object_grid_size = 5000.0f;
