--- nntpinit.c.orig	1994-11-19 06:01:24 UTC
+++ nntpinit.c
@@ -44,7 +44,11 @@ int socket _((int, struct sockproto *, s
 #include <netdnet/dnetdb.h>
 #endif /* DECNET */
 
+#if defined(__DragonFly__)
+#include <arpa/inet.h>
+#else
 unsigned long inet_addr _((char *x));
+#endif
 int get_tcp_socket _((char *machine));
 
 int
