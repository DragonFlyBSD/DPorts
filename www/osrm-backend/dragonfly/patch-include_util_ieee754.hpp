--- include/util/ieee754.hpp.orig	2019-01-30 23:35:51 UTC
+++ include/util/ieee754.hpp
@@ -25,6 +25,7 @@ OUT OF OR IN CONNECTION WITH THE SOFTWAR
 THE SOFTWARE.
 **/
 
+#include <cmath>
 #include <assert.h>
 #include <math.h>
 
@@ -488,8 +489,8 @@ inline void Prettify(char *buffer, int l
 inline void dtoa_milo(double value, char *buffer)
 {
     // Not handling NaN and inf
-    assert(!isnan(value));
-    assert(!isinf(value));
+    assert(!std::isnan(value));
+    assert(!std::isinf(value));
 
     if (value == 0)
     {
