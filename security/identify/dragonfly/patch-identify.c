--- identify.c.intermediate	2020-11-24 04:29:11.000000000 +0000
+++ identify.c
@@ -14,6 +14,11 @@
 #include <ident.h>
 #include <netdb.h>
 #include <sys/types.h>
+#include <sys/wait.h>
+#include <stdlib.h>
+#include <string.h>
+#include <unistd.h>
+#include <arpa/inet.h>
 #include <netinet/in.h>
 #include <sys/socket.h>
 
