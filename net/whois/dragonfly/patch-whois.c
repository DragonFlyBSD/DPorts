--- whois.c.orig	2017-07-27 15:09:05 UTC
+++ whois.c
@@ -19,6 +19,7 @@
 #include <string.h>
 #include <ctype.h>
 #include <sys/types.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <netdb.h>
