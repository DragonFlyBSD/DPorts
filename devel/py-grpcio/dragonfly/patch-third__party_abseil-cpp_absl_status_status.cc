--- third_party/abseil-cpp/absl/status/status.cc.orig	Fri Mar  7 00:18:54 2025
+++ third_party/abseil-cpp/absl/status/status.cc	Tue Oct
@@ -13,7 +13,7 @@
 // limitations under the License.
 #include "absl/status/status.h"
 
-#include <errno.h>
+#include <sys/errno.h>
 
 #include <atomic>
 #include <cstddef>
