--- src/gui/plot/qgsplotrubberband.cpp.orig	2022-07-15 12:14:09 UTC
+++ src/gui/plot/qgsplotrubberband.cpp
@@ -20,6 +20,7 @@
 
 #include <QGraphicsScene>
 #include <QGraphicsRectItem>
+#include <cmath>
 #include <math.h>
 
 QgsPlotRubberBand::QgsPlotRubberBand( QgsPlotCanvas *canvas )
