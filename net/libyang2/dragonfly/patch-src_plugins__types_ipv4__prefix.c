--- src/plugins_types/ipv4_prefix.c.orig
+++ src/plugins_types/ipv4_prefix.c
@@ -21,7 +21,7 @@
 # include <ws2tcpip.h>
 #else
 #  include <arpa/inet.h>
-#  if defined (__FreeBSD__) || defined (__NetBSD__) || defined (__OpenBSD__)
+#  if defined (__FreeBSD__) || defined (__NetBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
 #    include <netinet/in.h>
 #    include <sys/socket.h>
 #  endif
