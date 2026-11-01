--- nasl/nasl_packet_forgery.c.orig
+++ nasl/nasl_packet_forgery.c
@@ -47,7 +47,7 @@
 #define UNFIX(n) ntohs (n)
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define TCP_MSS_DEFAULT TCP_MSS
 #define TCP_MSS_DESIRED TCP_MSS
 #endif
