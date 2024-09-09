--- src/modules/module-rtp-sap.c.orig	2023-10-06 09:37:06 UTC
+++ src/modules/module-rtp-sap.c
@@ -24,7 +24,7 @@
 
 #include <module-rtp/sap.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define ifr_ifindex ifr_index
 #endif
 
