--- src/vde_plug2tap.c.orig	2026-10-04 13:15:07 UTC
+++ src/vde_plug2tap.c
@@ -37,7 +37,7 @@
 #if defined(VDE_FREEBSD) || defined(VDE_NETBSD)
 #include <sys/socket.h>
 #include <net/if.h>
-#include <net/if_tun.h>
+#include <net/tun/if_tun.h>
 #endif
 
 #if defined(VDE_DARWIN) || defined(VDE_FREEBSD) || defined(VDE_NETBSD)
