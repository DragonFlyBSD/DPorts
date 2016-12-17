--- src/property.cc.orig	2006-10-07 01:35:41.000000000 +0300
+++ src/property.cc
@@ -16,6 +16,8 @@
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
  */
 
+#include <algorithm> // for std::transform
+
 #include "property.h"
 
 #include "resource-manager.h"
