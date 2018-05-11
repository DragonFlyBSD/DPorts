--- plugins/poleemery/entriesmodel.cpp.orig	2014-07-28 18:35:44.000000000 +0000
+++ plugins/poleemery/entriesmodel.cpp
@@ -28,6 +28,7 @@
  **********************************************************************/
 
 #include "entriesmodel.h"
+#include <functional> // for std::function
 #include <QColor>
 #include <QApplication>
 #include <QFontMetrics>
