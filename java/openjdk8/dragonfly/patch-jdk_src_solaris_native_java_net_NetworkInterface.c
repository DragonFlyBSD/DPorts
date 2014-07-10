--- jdk/src/solaris/native/java/net/NetworkInterface.c.orig	2014-07-08 05:07:03.342096000 +0000
+++ jdk/src/solaris/native/java/net/NetworkInterface.c	2014-07-08 05:21:25.706633000 +0000
@@ -60,7 +60,7 @@
 #include <sys/param.h>
 #include <sys/ioctl.h>
 #include <sys/sockio.h>
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <net/ethernet.h>
 #include <net/if_var.h>
 #elif defined(__OpenBSD__)
