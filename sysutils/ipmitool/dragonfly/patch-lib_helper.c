--- lib/helper.c.orig	2016-07-31 08:52:40.000000000 +0200
+++ lib/helper.c
@@ -29,7 +29,6 @@
  * LIABILITY, ARISING OUT OF THE USE OF OR INABILITY TO USE THIS SOFTWARE,
  * EVEN IF SUN HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
  */
-#define _POSIX_SOURCE
 #define /* glibc 2.19 and earlier */ _BSD_SOURCE || \
 	/* Since glibc 2.20 */_DEFAULT_SOURCE || \
 	_XOPEN_SOURCE >= 500 || \
