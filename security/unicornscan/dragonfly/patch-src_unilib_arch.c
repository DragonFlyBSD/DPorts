--- src/unilib/arch.c.orig	2004-09-30 10:29:06 UTC
+++ src/unilib/arch.c
@@ -36,6 +36,10 @@
 #include <xmalloc.h>
 #include <output.h>
 
+#ifdef __DragonFly__
+#include <ifaddrs.h>
+#endif
+
 #define ROUTE_FILE "/proc/net/route"
 
 #if defined(HAVE_PROC_NET_ROUTE)
