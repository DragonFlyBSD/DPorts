--- src/sockserv.c.orig	2018-11-10 10:36:40 UTC
+++ src/sockserv.c
@@ -23,6 +23,7 @@
 /* Written by N2RJT - Dave Brown */
 
 
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <errno.h>
