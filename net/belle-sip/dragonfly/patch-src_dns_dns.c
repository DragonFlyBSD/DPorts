--- src/dns/dns.c.orig	2022-09-04 01:43:54 UTC
+++ src/dns/dns.c
@@ -23,7 +23,7 @@
  * USE OR OTHER DEALINGS IN THE SOFTWARE.
  * ==========================================================================
  */
-#if !defined(__FreeBSD__) && !defined(__sun)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__sun)
 #ifndef _XOPEN_SOURCE
 #define _XOPEN_SOURCE	600
 #endif
@@ -473,6 +473,7 @@ static DNS_INLINE unsigned dns_atomic_fe
 
 #ifndef DNS_RANDOM
 #if defined(HAVE_ARC4RANDOM)	\
+ || defined(__DragonFly__)	\
  || defined(__OpenBSD__)	\
  || defined(__FreeBSD__)	\
  || defined(__NetBSD__)		\
