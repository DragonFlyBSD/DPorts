--- havp/genericscanner.cpp.orig	2008-01-21 21:54:54.000000000 +0200
+++ havp/genericscanner.cpp
@@ -16,6 +16,7 @@
  ***************************************************************************/
 
 #include "genericscanner.h"
+#include <cstring>
 
 
 bool GenericScanner::StartScanning( int fromhandler, int tohandler, const char *TempFileName )
