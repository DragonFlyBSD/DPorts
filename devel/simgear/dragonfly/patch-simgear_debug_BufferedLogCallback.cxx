--- simgear/debug/BufferedLogCallback.cxx.orig	2013-09-16 17:56:31.000000000 +0000
+++ simgear/debug/BufferedLogCallback.cxx
@@ -18,7 +18,8 @@
 // along with this program; if not, write to the Free Software
 // Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 //
-     
+
+#include <stdlib.h>
 #include <simgear/debug/BufferedLogCallback.hxx>
      
 #include <boost/foreach.hpp>
