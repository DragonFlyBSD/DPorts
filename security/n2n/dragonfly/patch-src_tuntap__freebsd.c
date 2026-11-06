--- src/tuntap_freebsd.c.orig	2020-08-12 10:18:14 UTC
+++ src/tuntap_freebsd.c
@@ -18,7 +18,7 @@
 
 #include "n2n.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 void tuntap_close(tuntap_dev *device);
 
