--- smtp.c.orig	1996-06-04 13:37:01 UTC
+++ smtp.c
@@ -36,6 +36,7 @@
 #define RCLASS(r)   (((r) / 10) % 10)
 #include <sys/socket.h>
 #include <netinet/in.h>
+#include <arpa/inet.h>
 #include <netdb.h>
 #include <errno.h>
 #ifdef NAMED_BIND
