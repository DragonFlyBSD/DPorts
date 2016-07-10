--- src/base/PdfMemoryManagement.cpp.intermediate	2016-07-08 17:11:03
+++ src/base/PdfMemoryManagement.cpp
@@ -31,6 +31,7 @@
  *   files in the program, then also delete it here.                       *
  ***************************************************************************/
 
+#include <limits>
 #include "PdfMemoryManagement.h"
 #include "PdfDefinesPrivate.h"
 
