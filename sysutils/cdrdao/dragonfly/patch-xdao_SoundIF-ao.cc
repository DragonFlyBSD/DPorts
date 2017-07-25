--- xdao/SoundIF-ao.cc.intermediate	2017-07-25 09:48:55.000000000 +0300
+++ xdao/SoundIF-ao.cc
@@ -17,6 +17,7 @@
  *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
  */
 
+#include <cstring> // for memset()
 #include <ao/ao.h>
 
 #include "SoundIF.h"
