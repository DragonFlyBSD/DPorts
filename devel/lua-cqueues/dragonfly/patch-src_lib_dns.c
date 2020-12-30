--- src/lib/dns.c.orig	2020-06-03 06:57:02 UTC
+++ src/lib/dns.c
@@ -23,7 +23,7 @@
  * USE OR OTHER DEALINGS IN THE SOFTWARE.
  * ==========================================================================
  */
-#if !defined(__FreeBSD__) && !defined(__sun)
+#if !defined(__FreeBSD__) && !defined(__sun) && !defined(__DragonFly__)
 #ifndef _XOPEN_SOURCE
 #define _XOPEN_SOURCE	600
 #endif
