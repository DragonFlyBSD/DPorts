--- hitns/bsd.h.orig	2013-08-15 07:56:14.000000000 +0300
+++ hints/bsd.h
@@ -28,7 +28,11 @@
  * except RPC; defines below such as Q_CTL_V2 have no effect */
 #define NETBSD_LIBQUOTA
 #else
+#ifdef __DragonFly__
+#include <vfs/ufs/quota.h>
+#else
 #include <ufs/ufs/quota.h>
+#endif
 #endif
 
 #if defined(__NetBSD__) && (__NetBSD_Version__ >= 299000900) /* NetBSD 2.99.9 */
@@ -42,7 +46,7 @@
 #include <rpc/pmap_prot.h>
 #include <rpc/svc.h>
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <rpcsvc/rquota.h>
 #else /* BSDi */
 #include "include/rquota.h"
