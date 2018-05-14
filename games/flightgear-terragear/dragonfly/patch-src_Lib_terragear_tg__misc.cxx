--- src/Lib/terragear/tg_misc.cxx.intermediate	2018-05-14 17:43:36.000000000 +0300
+++ src/Lib/terragear/tg_misc.cxx
@@ -7,6 +7,7 @@
 
 #include "tg_polygon.hxx"
 #include "tg_misc.hxx"
+#include <cmath>	// for std::isnan
 
 const double isEqual2D_Epsilon = 0.000000001;
 
@@ -174,7 +175,7 @@ SGGeod OffsetPointMiddle( const SGGeod&
     cp    = cross( dirCur, dirNext );
     theta = SGMiscd::rad2deg(CalculateTheta( dirCur, dirNext ) );
 
-    if ( (abs(theta - 180.0) < 0.1) || (abs(theta) < 0.1) || (isnan(theta)) ) {
+    if ( (abs(theta - 180.0) < 0.1) || (abs(theta) < 0.1) || (std::isnan(theta)) ) {
         // straight line blows up math - offset 90 degree and dist is as given
         courseOffset = SGMiscd::normalizePeriodic(0, 360, courseNext-90.0);
         distOffset   = offset_by;
@@ -275,7 +276,7 @@ void OffsetPointsMiddle( const SGGeod& g
     cp    = cross( dirCur, dirNext );
     theta = SGMiscd::rad2deg(CalculateTheta( dirCur, dirNext ) );
 
-    if ( (abs(theta - 180.0) < 0.1) || (abs(theta) < 0.1) || (isnan(theta)) ) {
+    if ( (abs(theta - 180.0) < 0.1) || (abs(theta) < 0.1) || (std::isnan(theta)) ) {
         // straight line blows up math - offset 90 degree and dist is as given
         courseOffset = SGMiscd::normalizePeriodic(0, 360, courseNext-90.0);
         distOffsetInner  = offset_by+width/2.0f;
