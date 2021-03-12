--- jdk/src/solaris/native/java/net/NetworkInterface.c.orig	2021-01-20 00:41:17 UTC
+++ jdk/src/solaris/native/java/net/NetworkInterface.c
@@ -58,7 +58,7 @@
 #include <sys/param.h>
 #include <sys/ioctl.h>
 #include <sys/sockio.h>
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <net/ethernet.h>
 #include <net/if_var.h>
 #elif defined(__OpenBSD__)
@@ -2114,7 +2114,7 @@ static netif *enumIPv6Interfaces(JNIEnv
  * Try to get the interface index.
  */
 static int getIndex(int sock, const char *name) {
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     int index = if_nametoindex(name);
     return (index == 0) ? -1 : index;
 #else
