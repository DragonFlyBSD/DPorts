--- src/canvas/canvas.cpp.orig	2021-01-29 20:49:36 UTC
+++ src/canvas/canvas.cpp
@@ -6,6 +6,7 @@
 #include "pool/decal.hpp"
 #include "util/util.hpp"
 #include <algorithm>
+#include <cmath> // for std::isnan()
 #include "util/bbox_accumulator.hpp"
 
 namespace horizon {
