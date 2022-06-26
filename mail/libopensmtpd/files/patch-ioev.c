--- ioev.c.orig	2020-09-08 15:12:26 UTC
+++ ioev.c
@@ -20,6 +20,7 @@
 #include <sys/types.h>
 #include <sys/queue.h>
 #include <sys/socket.h>
+#include <netinet/in.h>
 
 #include <err.h>
 #include <errno.h>
