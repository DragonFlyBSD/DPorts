--- src/vde_plug2tap.c.orig	2018-10-13 20:31:59 UTC
+++ src/vde_plug2tap.c
@@ -37,7 +37,7 @@
 #ifdef VDE_FREEBSD
 #include <sys/socket.h>
 #include <net/if.h>
-#include <net/if_tun.h>
+#include <net/tun/if_tun.h>
 #endif
 
 #if defined(VDE_DARWIN) || defined(VDE_FREEBSD)
