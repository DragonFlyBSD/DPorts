--- src/GeonkickConfig.cpp.orig	2020-10-26 10:20:31 UTC
+++ src/GeonkickConfig.cpp
@@ -21,6 +21,7 @@
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
  */
 
+#include <iomanip> // for std::setprecision()
 #include "GeonkickConfig.h"
 
 #include <rapidjson/document.h>
