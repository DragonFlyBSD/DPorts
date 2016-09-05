--- src/crafting.cpp.orig	2015-03-09 07:25:34.000000000 +0200
+++ src/crafting.cpp
@@ -15,6 +15,7 @@
 #include <queue>
 #include <math.h>    //sqrt
 #include <algorithm> //std::min
+#include <cmath> // for std::pow
 
 enum TAB_MODE {
     NORMAL,
