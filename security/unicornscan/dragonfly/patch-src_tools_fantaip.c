--- src/tools/fantaip.c.orig	2004-09-30 13:29:06.000000000 +0300
+++ src/tools/fantaip.c
@@ -13,9 +13,9 @@
 #include <net/ethernet.h>
 #elif defined(SOLARIS)
 #include <sys/ethernet.h>
-#elif (BSD >= 199103) || defined(__NetBSD__) || defined(__DragonFly__)
+#elif (BSD >= 199103) || defined(__NetBSD__)
 #include <net/if_ether.h>
-#elif defined(__FreeBSD__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__)
 #include <netinet/if_ether.h>
 #endif
 
