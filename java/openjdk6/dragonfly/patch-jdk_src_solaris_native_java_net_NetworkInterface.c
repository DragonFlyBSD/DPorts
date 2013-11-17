--- jdk/src/solaris/native/java/net/NetworkInterface.c.orig	2013-11-14 23:14:54.096137000 +0000
+++ jdk/src/solaris/native/java/net/NetworkInterface.c
@@ -50,7 +50,7 @@
 #if defined(_ALLBSD_SOURCE)
 #include <sys/param.h>
 #include <sys/ioctl.h>
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <net/ethernet.h>
 #include <net/if_var.h>
 #elif defined(__OpenBSD__)
