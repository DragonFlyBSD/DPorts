--- misc/pcap.c.orig
+++ misc/pcap.c
@@ -25,7 +25,7 @@
 #include <sys/ioctl.h>
 #include <sys/param.h>
 #include <sys/types.h>
-#if defined __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #include <sys/socket.h>
 #include <net/if.h>
 #include <net/if_dl.h>
@@ -421,7 +421,7 @@
 {
   static struct interface_info mydevs[1024];
   int numinterfaces = 0;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct ifaddrs *ifaddr, *ifa;
   struct sockaddr_in *saddr;
   char *p;
@@ -1247,7 +1247,7 @@
         }
       else
         {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
           void * addr_ptr;
           struct sockaddr * sockaddr_ptr;
           struct ifaddrs * ifaddrs_ptr;
