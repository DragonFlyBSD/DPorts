--- xjdclient.c.orig
+++ xjdclient.c
@@ -31,6 +31,7 @@
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
+#include <arpa/inet.h>
 #include <netdb.h>
 #include <sys/stat.h>
 #include <sys/time.h>
