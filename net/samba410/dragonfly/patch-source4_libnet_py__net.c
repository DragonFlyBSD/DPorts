--- source4/libnet/py_net.c.orig	2019-12-06 10:11:08 UTC
+++ source4/libnet/py_net.c
@@ -19,6 +19,9 @@
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
+/* for memset_s() visibility */
+#define __STDC_WANT_LIB_EXT1__ 1
+
 #include <Python.h>
 #include "python/py3compat.h"
 #include "includes.h"
