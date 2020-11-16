--- src/geonkick_api.cpp.orig	2020-10-26 10:20:31 UTC
+++ src/geonkick_api.cpp
@@ -21,6 +21,7 @@
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
  */
 
+#include <cmath> // for std::fabs()
 #include "geonkick_api.h"
 #include "oscillator.h"
 #include "globals.h"
