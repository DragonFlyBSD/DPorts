--- lib/ldb/pyldb.c.orig	2019-12-06 10:11:08 UTC
+++ lib/ldb/pyldb.c
@@ -28,6 +28,9 @@
    License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */
 
+/* for memset_s() visibility */
+#define __STDC_WANT_LIB_EXT1__ 1
+
 #include <Python.h>
 #include "ldb_private.h"
 #include "ldb_handlers.h"
