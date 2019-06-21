--- eesh/main.c.orig	2017-02-12 16:59:05 UTC
+++ eesh/main.c
@@ -22,6 +22,7 @@
  * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
  */
 #include "E.h"
+#include <sys/select.h>
 
 /* Global vars */
 Display            *disp;
