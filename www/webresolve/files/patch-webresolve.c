
$FreeBSD: ports/www/webresolve/files/patch-webresolve.c,v 1.2 2012/11/17 06:03:10 svnexp Exp $

--- webresolve.c	2001/03/14 14:44:11	1.1
+++ webresolve.c	2001/03/14 14:44:26
@@ -24,6 +24,7 @@
 #include <string.h>
 #include <ctype.h>
 #include <netdb.h>
+#include <sys/types.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>
