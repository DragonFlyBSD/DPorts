--- module_example/example.c.orig	2011-11-08 21:36:51.000000000 +0200
+++ module_example/example.c
@@ -14,7 +14,7 @@
 #include <netinet/if_ether.h>
 #include <arpa/inet.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #   define ETHER_ADDR_OCTET octet
 #else
 #   define ETHER_ADDR_OCTET ether_addr_octet
