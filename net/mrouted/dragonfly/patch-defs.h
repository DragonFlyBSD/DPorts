--- defs.h.orig	2017-01-01 19:28:19 UTC
+++ defs.h
@@ -36,7 +36,7 @@
 #if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 #include <osreldate.h>
 #endif /* __FreeBSD__ */
-#if defined(__bsdi__) || (defined(__FreeBSD__) && __FreeBSD_version >= 220000) || defined(__FreeBSD_kernel__)
+#if defined(__bsdi__) || (defined(__FreeBSD__) && __FreeBSD_version >= 220000) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #define rtentry kernel_rtentry
 #include <net/route.h>
 #undef rtentry
@@ -46,8 +46,12 @@
 #include <linux/types.h>
 #include <linux/mroute.h>
 #else
+#ifdef __DragonFly__
+#include <net/ip_mroute/ip_mroute.h>
+#else
 #include <netinet/ip_mroute.h>
 #endif
+#endif
 #if defined(HAVE_STRLCPY)
 #include <string.h>
 #endif
@@ -89,7 +93,7 @@ typedef void (*ihfunc_t) (int);
  *
  * This list could probably be made longer, e.g., SunOS and __bsdi__
  */
-#if defined(__NetBSD__) ||					\
+#if defined(__NetBSD__) || defined(__DragonFly__) ||		\
     (defined(__FreeBSD__) && (__FreeBSD_version < 1100030)) ||	\
     (defined(__OpenBSD__) && (OpenBSD < 200311))
 #define HAVE_IP_HDRINCL_BSD_ORDER
