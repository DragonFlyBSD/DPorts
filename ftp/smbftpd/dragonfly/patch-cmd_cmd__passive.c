--- cmd/cmd_passive.c.orig	2008-05-20 13:19:21 UTC
+++ cmd/cmd_passive.c
@@ -3,6 +3,7 @@
 #include <stdlib.h>
 #include <arpa/inet.h>
 #include <sys/types.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <unistd.h>
 #include <fcntl.h>
