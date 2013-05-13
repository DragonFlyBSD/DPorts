--- jdk/src/solaris/native/java/net/NetworkInterface.c.intermediate	2013-05-13 10:51:23.888099000 +0000
+++ jdk/src/solaris/native/java/net/NetworkInterface.c
@@ -60,7 +60,7 @@
 #include <sys/param.h>
 #include <sys/ioctl.h>
 #include <sys/sockio.h>
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <net/ethernet.h>
 #include <net/if_var.h>
 #elif defined(__OpenBSD__)
