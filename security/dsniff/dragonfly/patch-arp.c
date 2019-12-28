--- arp.c.orig	2001-03-15 08:32:58 UTC
+++ arp.c
@@ -17,7 +17,7 @@
 #include <sys/sysctl.h>
 #include <net/if_dl.h>
 #include <net/route.h>
-#ifdef __FreeBSD__	/* XXX */
+#if defined(__FreeBSD__) || defined(__DragonFly__)	/* XXX */
 #define ether_addr_octet octet
 #endif
 #else /* !BSD */
