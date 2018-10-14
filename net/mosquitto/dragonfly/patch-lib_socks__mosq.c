--- lib/socks_mosq.c.intermediate	2018-10-14 17:30:53 UTC
+++ lib/socks_mosq.c
@@ -24,7 +24,7 @@ Contributors:
 #else
 #  include <arpa/inet.h>
 #endif
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #  include <sys/socket.h>
 #  include <netinet/in.h>
 #endif
