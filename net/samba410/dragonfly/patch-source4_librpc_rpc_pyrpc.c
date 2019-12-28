--- source4/librpc/rpc/pyrpc.c.orig	2019-12-06 10:11:08 UTC
+++ source4/librpc/rpc/pyrpc.c
@@ -17,6 +17,9 @@
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
+/* for memset_s() visibility */
+#define __STDC_WANT_LIB_EXT1__ 1
+
 #include <Python.h>
 #include "python/py3compat.h"
 #include "includes.h"
