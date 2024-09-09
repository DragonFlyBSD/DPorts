--- src/modules/module-netjack2-manager.c.intermediate	2024-03-29 20:05:00 UTC
+++ src/modules/module-netjack2-manager.c
@@ -37,7 +37,7 @@
 
 #include "module-netjack2/peer.c"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define ifr_ifindex ifr_index
 #endif
 
