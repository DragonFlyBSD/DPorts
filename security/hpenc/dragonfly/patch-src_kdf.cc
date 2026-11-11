--- src/kdf.cc.orig
+++ src/kdf.cc
@@ -23,6 +23,7 @@
  * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  */
 #include "kdf.h"
+#include <stdexcept>
 #include "nonce.h"
 #include "util.h"
 #include <sodium.h>
