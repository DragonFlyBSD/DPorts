--- src/plugins/switch/generic/switch_generic.c.orig	2019-02-05 12:38:45 UTC
+++ src/plugins/switch/generic/switch_generic.c
@@ -37,7 +37,6 @@
 \*****************************************************************************/
 
 #include <arpa/inet.h>
-#include <ifaddrs.h>
 #include <netdb.h>
 #include <netinet/in.h>
 #include <signal.h>
@@ -45,6 +44,7 @@
 #include <stdlib.h>
 #include <string.h>
 #include <sys/types.h>
+#include <ifaddrs.h>
 #include <sys/socket.h>
 
 /* net/if.h must come after sys/types.h on NetBSD */
