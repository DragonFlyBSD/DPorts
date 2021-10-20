--- net.c.intermediate	2020-11-24 07:04:21.000000000 +0000
+++ net.c
@@ -4,10 +4,13 @@
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <netdb.h>
+#include <arpa/inet.h> /* for inet_addr() */
 #include <sys/time.h>
 #include <sys/stat.h>
 #include <unistd.h>
 #include <fcntl.h>
+#include <string.h>
+#include <ctype.h>
 
 extern int h_errno;
 
