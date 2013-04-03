--- kstars/skyobjects/ksmoon.cpp.orig	2013-03-01 06:45:57.384215000 +0000
+++ kstars/skyobjects/ksmoon.cpp
@@ -18,7 +18,7 @@
 #include "ksmoon.h"
 
 #include <stdlib.h>
-#include <math.h>
+#include <cmath>
 
 #include <QFile>
 #include <QTextStream>
@@ -222,7 +222,7 @@ void KSMoon::findMagnitude(const KSNumbe
     // relevant data put into ksplanetbase.h) was taken from
     // SkyChart v3 Beta
     double phd = phase().Degrees();
-    if( isnan( phd ) ) // Avoid nanny phases.
+    if( std::isnan( phd ) ) // Avoid nanny phases.
         return;
     int p = floor( phd );
     if( p > 180 )
