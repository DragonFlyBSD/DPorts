--- src/dyn_resolver_getdns.c.intermediate	2019-09-01 08:13:29.000000000 +0000
+++ src/dyn_resolver_getdns.c
@@ -33,7 +33,7 @@
 #include <sys/socket.h>
 #include <netdb.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <arpa/inet.h>
 #include <netinet/in.h>
 #include <resolv.h>
