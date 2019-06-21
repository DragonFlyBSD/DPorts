--- rblcheck.c.orig	2014-01-23 10:41:54 UTC
+++ rblcheck.c
@@ -32,6 +32,7 @@
 #else
 # include <unistd.h>
 # include <sys/types.h>
+# include <sys/select.h>
 # include <sys/socket.h>
 # include <netinet/in.h>
 #endif
