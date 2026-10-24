--- engine/core/vfs/zip/zipnode.cpp.orig	2019-01-11 17:24:38 UTC
+++ engine/core/vfs/zip/zipnode.cpp
@@ -20,6 +20,7 @@
 ***************************************************************************/
 
 // Standard C++ library includes
+#include <algorithm>
 
 // FIFE includes
 // These includes are split up in two parts, separated by one empty line
