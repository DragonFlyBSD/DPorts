--- Onboard/pypredict/lm/lm_dynamic.cpp.orig
+++ Onboard/pypredict/lm/lm_dynamic.cpp
@@ -17,7 +17,7 @@
  * along with this program. If not, see <http://www.gnu.org/licenses/>.
  */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdio.h>
 #include <stdarg.h>
 #include <stdlib.h>
