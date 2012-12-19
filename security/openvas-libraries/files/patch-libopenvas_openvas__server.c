
$FreeBSD: ports/security/openvas-libraries/files/patch-libopenvas_openvas__server.c,v 1.3 2012/11/17 06:01:09 svnexp Exp $

--- libopenvas/openvas_server.c.orig
+++ libopenvas/openvas_server.c
@@ -32,6 +32,8 @@
 
 #include <glib.h>
 #include <arpa/inet.h>
+#include <netinet/in.h>
+#include <sys/socket.h>
 #include <unistd.h>
 #include <fcntl.h>
 #include <string.h>
