--- absl/status/status.cc.orig	Mon Feb  3 15:50:45 2025
+++ absl/status/status.cc	Mon Jun
@@ -13,7 +13,7 @@
 // limitations under the License.
 #include "absl/status/status.h"
 
-#include <errno.h>
+#include <sys/errno.h>
 
 #include <atomic>
 #include <cstddef>
