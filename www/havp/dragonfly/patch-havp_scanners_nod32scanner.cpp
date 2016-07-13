--- havp/scanners/nod32scanner.cpp.orig	2008-10-02 10:51:21.000000000 +0300
+++ havp/scanners/nod32scanner.cpp
@@ -16,6 +16,7 @@
  ***************************************************************************/
 
 #include "nod32scanner.h"
+#include <cstring>
 
 
 bool NOD32Scanner::InitDatabase()
