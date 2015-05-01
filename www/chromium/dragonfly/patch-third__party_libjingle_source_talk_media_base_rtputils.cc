--- third_party/libjingle/source/talk/media/base/rtputils.cc.orig	2015-04-14 22:31:37 UTC
+++ third_party/libjingle/source/talk/media/base/rtputils.cc
@@ -25,6 +25,9 @@
  * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  */
 
+#define __STDC_LIMIT_MACROS
+#include <stdint.h>
+
 #include "talk/media/base/rtputils.h"
 
 namespace cricket {
