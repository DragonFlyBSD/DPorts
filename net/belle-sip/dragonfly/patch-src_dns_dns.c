--- src/dns/dns.c.orig
+++ src/dns/dns.c
@@ -23,7 +23,7 @@
  * USE OR OTHER DEALINGS IN THE SOFTWARE.
  * ==========================================================================
  */
-#if !defined(__FreeBSD__) && !defined(__sun)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__sun)
 #ifndef _XOPEN_SOURCE
 #define _XOPEN_SOURCE 600
 #endif
@@ -469,7 +469,7 @@
  */
 
 #ifndef DNS_RANDOM
-#if defined(HAVE_ARC4RANDOM) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) ||                 \
+#if defined(HAVE_ARC4RANDOM) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) ||                 \
     defined(__APPLE__)
 #define DNS_RANDOM arc4random
 #elif __linux__
