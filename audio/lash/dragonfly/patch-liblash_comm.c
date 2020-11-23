--- liblash/comm.c.orig	2007-01-13 21:28:31 UTC
+++ liblash/comm.c
@@ -27,6 +27,7 @@
 #include <sys/socket.h>
 #include <errno.h>
 #include <netdb.h>
+#include <netinet/in.h> /* for ntohl() */
 extern int h_errno;
 
 #include <lash/lash.h>
