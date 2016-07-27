--- src/dns.c.intermediate	2016-07-19 16:34:28 UTC
+++ src/dns.c
@@ -23,7 +23,7 @@
  * USE OR OTHER DEALINGS IN THE SOFTWARE.
  * ==========================================================================
  */
-#if !defined(__FreeBSD__) && !defined(__sun)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__sun)
 #ifndef _XOPEN_SOURCE
 #define _XOPEN_SOURCE	600
 #endif
@@ -363,6 +363,8 @@ DNS_NOTUSED static unsigned dns_atomic_s
 
 #ifndef DNS_RANDOM
 #if defined(HAVE_ARC4RANDOM)	\
+ || defined(__DragonFly__)	\
+ || defined(__OpenBSD__)	\
  || defined(__OpenBSD__)	\
  || defined(__FreeBSD__)	\
  || defined(__NetBSD__)		\
