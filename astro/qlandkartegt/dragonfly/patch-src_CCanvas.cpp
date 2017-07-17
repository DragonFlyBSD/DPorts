--- src/CCanvas.cpp.orig	2014-11-19 13:43:27.000000000 +0000
+++ src/CCanvas.cpp
@@ -623,7 +623,7 @@
     pt2 = GPS_Math_Wpt_Projection(pt1, d, -90 * DEG_TO_RAD);
     map.convertRad2Pt(pt2.u, pt2.v);
 
-    if(isnan(pt2.u) || isnan(pt2.v) || abs(pt2.u) > 5000) return;
+    if(std::isnan(pt2.u) || std::isnan(pt2.v) || abs(pt2.u) > 5000) return;
 
     // step IV: draw the scale
     QPoint px2(px1 - QPoint(px1.x() - pt2.u,0));
