--- 6tunnel.c.orig	2013-05-25 18:16:49 UTC
+++ 6tunnel.c
@@ -28,6 +28,7 @@
 #include <string.h>
 #include <sys/types.h>
 #include <netinet/in.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <arpa/inet.h>
 #include <sys/wait.h>
