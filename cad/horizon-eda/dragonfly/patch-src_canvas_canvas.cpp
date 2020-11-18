--- src/canvas/canvas.cpp.orig	2020-08-05 20:33:52 UTC
+++ src/canvas/canvas.cpp
@@ -6,6 +6,7 @@
 #include "util/util.hpp"
 #include <algorithm>
 #include <iostream>
+#include <cmath> // for std::isnan()
 
 namespace horizon {
 
