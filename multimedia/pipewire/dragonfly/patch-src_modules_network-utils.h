--- src/modules/network-utils.h.orig	2025-06-13 16:46:10.331292000 +0200
+++ src/modules/network-utils.h	2025-06-13 16:46:25.791578000 +0200
@@ -8,7 +8,7 @@
 #include <net/if.h>
 #include <errno.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define ifr_ifindex ifr_index
 #endif
 
