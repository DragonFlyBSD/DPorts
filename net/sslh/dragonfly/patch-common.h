--- common.h.orig	2018-02-11 17:42:21 UTC
+++ common.h
@@ -17,6 +17,7 @@
 #include <stdlib.h>
 #include <stdio.h>
 #include <signal.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <sys/wait.h>
 #include <netinet/in.h>
