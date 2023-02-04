--- src/modules/module-rtp-source.c.orig	2022-12-09 10:28:24 UTC
+++ src/modules/module-rtp-source.c
@@ -46,7 +46,7 @@
 #include <module-rtp/sap.h>
 #include <module-rtp/rtp.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define ifr_ifindex ifr_index
 #endif
 
