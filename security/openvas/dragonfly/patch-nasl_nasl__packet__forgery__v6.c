--- nasl/nasl_packet_forgery_v6.c.intermediate	2021-08-22 13:37:58 UTC
+++ nasl/nasl_packet_forgery_v6.c
@@ -46,7 +46,7 @@
 #include <sys/param.h>
 #include <sys/time.h> /* for gettimeofday */
 #include <unistd.h>   /* for close */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <netinet/in.h>
 #  include <netinet/tcp.h>
 #endif
@@ -78,7 +78,7 @@
 #define UNFIX(n) ntohs (n)
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define TCP_MSS_DEFAULT TCP6_MSS
 #define TCP_MSS_DESIRED TCP6_MSS
 #endif
