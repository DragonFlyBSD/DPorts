--- kstars/fitsviewer/fitssepdetector.cpp.orig	2021-01-07 20:12:29 UTC
+++ kstars/fitsviewer/fitssepdetector.cpp
@@ -25,6 +25,7 @@
 #include "kspaths.h"
 
 #include <math.h>
+#include <cstddef>
 #include <QPointer>
 #include <QtConcurrent>
 
