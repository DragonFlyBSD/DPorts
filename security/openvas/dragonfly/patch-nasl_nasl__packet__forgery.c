--- nasl/nasl_packet_forgery.c.intermediate	2021-08-22 14:31:23 UTC
+++ nasl/nasl_packet_forgery.c
@@ -35,7 +35,7 @@
 
 #include <sys/types.h>
 #include <sys/socket.h>
-#ifdef __FreeBSD
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   #include <netinet/in.h>
   #include <netinet/tcp.h>
 #endif
@@ -58,7 +58,7 @@
 #define UNFIX(n) ntohs (n)
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define TCP_MSS_DEFAULT TCP_MSS
 #define TCP_MSS_DESIRED TCP_MSS
 #endif
