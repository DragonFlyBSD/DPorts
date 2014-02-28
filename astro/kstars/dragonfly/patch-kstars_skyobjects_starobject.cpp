--- kstars/skyobjects/starobject.cpp.orig	2014-01-05 11:50:17.000000000 +0000
+++ kstars/skyobjects/starobject.cpp
@@ -22,6 +22,7 @@
 #include <QFontMetricsF>
 #include <QPixmap>
 #include <kdebug.h>
+#include <cmath>
 
 #include "kspopupmenu.h"
 #include "ksnumbers.h"
@@ -282,7 +283,7 @@ void StarObject::getIndexCoords( KSNumbe
 
     pmms = pmMagnitudeSquared();
 
-    if( isnan( pmms ) || pmms * num->julianMillenia() * num->julianMillenia() < 1. ) {
+    if( std::isnan( pmms ) || pmms * num->julianMillenia() * num->julianMillenia() < 1. ) {
         // Ignore corrections
         *ra = ra0().Degrees();
         *dec = dec0().Degrees();
