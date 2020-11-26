--- iface.c.orig	2020-03-16 16:42:21 UTC
+++ iface.c
@@ -39,7 +39,7 @@
 #include <sys/ioctl.h>
 #include <stdlib.h>
 
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <ifaddrs.h>
 #include <net/if_dl.h>
 int read_iface_mac() {
