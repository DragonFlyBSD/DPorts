--- tcp-connect.c.orig	2017-05-16 21:08:03 UTC
+++ tcp-connect.c
@@ -3,6 +3,7 @@
 #include <stdlib.h>
 #include <string.h>
 #include <unistd.h>
+#include <arpa/inet.h>
 #include <bglibs/msg.h>
 #include <bglibs/resolve.h>
 #include <bglibs/socket.h>
