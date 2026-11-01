--- nasl/nasl_packet_forgery_v6.c.orig
+++ nasl/nasl_packet_forgery_v6.c
@@ -35,7 +35,7 @@
 #include <sys/param.h>
 #include <sys/time.h> /* for gettimeofday */
 #include <unistd.h>   /* for close */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <netinet/in.h>
 #  include <netinet/tcp.h>
 #endif
@@ -67,7 +67,7 @@
 #define UNFIX(n) ntohs (n)
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define TCP_MSS_DEFAULT TCP6_MSS
 #define TCP_MSS_DESIRED TCP6_MSS
 #endif
