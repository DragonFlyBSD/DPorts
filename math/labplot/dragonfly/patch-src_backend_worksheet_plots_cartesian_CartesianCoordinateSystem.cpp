--- src/backend/worksheet/plots/cartesian/CartesianCoordinateSystem.cpp.orig	2012-11-04 08:26:43.000000000 +0000
+++ src/backend/worksheet/plots/cartesian/CartesianCoordinateSystem.cpp
@@ -498,7 +498,7 @@ QList<QLineF> CartesianCoordinateSystem:
 	
 
 				if (flags & MarkGaps) {
-					if (!isnan(xGapBefore)) {
+					if (!std::isnan(xGapBefore)) {
 						if (clipResult.xClippedLeft[0]) {
 							QLineF gapMarker(QPointF(x1 + xGapBefore / 4, y1 - xGapBefore / 2), 
 									QPointF(x1 - xGapBefore / 4, y1 + xGapBefore / 2));
@@ -513,7 +513,7 @@ QList<QLineF> CartesianCoordinateSystem:
 						}
 					}
 
-					if (!isnan(xGapAfter)) {
+					if (!std::isnan(xGapAfter)) {
 						if (clipResult.xClippedRight[0]) {
 							QLineF gapMarker(QPointF(x1 + xGapAfter / 4, y1 - xGapAfter / 2), 
 									QPointF(x1 - xGapAfter / 4, y1 + xGapAfter / 2));
@@ -528,7 +528,7 @@ QList<QLineF> CartesianCoordinateSystem:
 						}
 					}
 
-					if (!isnan(yGapBefore)) {
+					if (!std::isnan(yGapBefore)) {
 						if (clipResult.yClippedTop[0]) {
 							QLineF gapMarker(QPointF(x1 + yGapBefore / 2, y1 - yGapBefore / 4), 
 									QPointF(x1 - yGapBefore / 2, y1 + yGapBefore / 4));
@@ -543,7 +543,7 @@ QList<QLineF> CartesianCoordinateSystem:
 						}
 					}
 
-					if (!isnan(yGapAfter)) {
+					if (!std::isnan(yGapAfter)) {
 						if (clipResult.yClippedBottom[0]) {
 							QLineF gapMarker(QPointF(x1 + yGapAfter / 2, y1 - yGapAfter / 4), 
 									QPointF(x1 - yGapAfter / 2, y1 + yGapAfter / 4));
