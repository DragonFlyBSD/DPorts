--- src/top_bar.cpp.orig	2020-10-26 10:20:31 UTC
+++ src/top_bar.cpp
@@ -21,6 +21,7 @@
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
  */
 
+#include <cmath> // for std::fabs() from redkite/RkTransition.h
 #include "top_bar.h"
 #include "geonkick_button.h"
 #include "preset_browser_model.h"
