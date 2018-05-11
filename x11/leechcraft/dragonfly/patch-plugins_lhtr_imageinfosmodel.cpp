--- plugins/lhtr/imageinfosmodel.cpp.orig	2014-07-28 18:35:44.000000000 +0000
+++ plugins/lhtr/imageinfosmodel.cpp
@@ -27,6 +27,7 @@
  * DEALINGS IN THE SOFTWARE.
  **********************************************************************/
 
+#include <functional> // for std::function
 #include "imageinfosmodel.h"
 #include <QNetworkRequest>
 #include <QNetworkReply>
