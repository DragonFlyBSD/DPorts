--- Libs/C/strings.c.orig	2012-12-19 18:46:05.000000000 +0200
+++ Libs/C/strings.c
@@ -25,7 +25,7 @@
     OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */
 
-#if ! (defined(__FreeBSD__) || defined(__APPLE__))
+#if ! (defined(__DragonFly__) || defined(__FreeBSD__) || defined(__APPLE__))
 
 #include <stdio.h>
 #include <ctype.h>
