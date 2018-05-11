--- plugins/certmgr/certsmodel.cpp.orig	2014-07-28 18:35:44.000000000 +0000
+++ plugins/certmgr/certsmodel.cpp
@@ -27,6 +27,7 @@
  * DEALINGS IN THE SOFTWARE.
  **********************************************************************/
 
+#include <functional> // for std::function
 #include "certsmodel.h"
 #include <QDateTime>
 #include <QStringList>
