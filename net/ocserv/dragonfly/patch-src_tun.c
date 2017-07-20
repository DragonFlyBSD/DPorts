--- src/tun.c.orig	2017-07-06 12:30:07 UTC
+++ src/tun.c
@@ -48,13 +48,16 @@
 #include <main.h>
 #include <ccan/list/list.h>
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 # include <net/if_var.h>
 # include <netinet/in_var.h>
 #endif
 #if defined(__OpenBSD__)
 # include <netinet6/in6_var.h>
 #endif
+#if defined(__DragonFly__)
+# include <net/tun/if_tun.h>
+#endif
 
 #ifdef __linux__
 
