--- src/CMap3D.cpp.orig	2014-08-08 09:53:27 UTC
+++ src/CMap3D.cpp
@@ -1345,7 +1345,7 @@ void CMap3D::drawElevation(QPainter& p)
     if(act3DMap->isChecked() == false) return;
 
     double elevation = minEle + zpos / (zoomFactorZ * zoomFactorEle * zoomFactor);
-    if(isinf(elevation)) return;
+    if(std::isinf(elevation)) return;
 
     QFont f1 = CResources::self().getMapFont();
     int textOff = QFontMetrics(f1).descent() + QFontMetrics(f1).height()/2;
@@ -1979,7 +1979,7 @@ void CMap3D::quad(GLdouble x1, GLdouble
 void CMap3D::adjustElevationToMap()
 {
     float e1 = minEle + zpos / (zoomFactorZ * zoomFactorEle * zoomFactor);
-    if(!isinf(e1))
+    if(!std::isinf(e1))
     {
         double x = xpos;
         double y = ypos;
@@ -1989,7 +1989,7 @@ void CMap3D::adjustElevationToMap()
         theMap->convertPt2Rad(x,y);
 
         float e2 = CMapDB::self().getDEM().getElevation(x,y);
-        if(e2 > e1 && !isnan(e2) && e2 != WPT_NOFLOAT)
+        if(e2 > e1 && !std::isnan(e2) && e2 != WPT_NOFLOAT)
         {
             zpos = (e2 + 10 - minEle) * (zoomFactorZ * zoomFactorEle * zoomFactor);
         }
