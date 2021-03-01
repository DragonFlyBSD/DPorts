--- dns/dns.c.orig	2017-01-05 06:17:17 UTC
+++ dns/dns.c
@@ -23,7 +23,7 @@
  * USE OR OTHER DEALINGS IN THE SOFTWARE.
  * ==========================================================================
  */
-#if !defined(__FreeBSD__) && !defined(__sun)
+#if !defined(__FreeBSD__) && !defined(__sun) && !defined(__DragonFly__)
 #ifndef _XOPEN_SOURCE
 #define _XOPEN_SOURCE	600
 #endif
