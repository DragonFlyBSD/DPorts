--- pkg/progressmeter.c.orig	2013-02-20 17:38:01.000000000 +0000
+++ pkg/progressmeter.c
@@ -23,6 +23,7 @@
  * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  */
 
+#pragma GCC diagnostic ignored "-Warray-bounds"
 #include <sys/types.h>
 #include <sys/ioctl.h>
 #include <sys/uio.h>
