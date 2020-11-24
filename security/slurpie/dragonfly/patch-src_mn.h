--- src/mn.h.intermediate	2020-11-24 04:52:48.000000000 +0000
+++ src/mn.h
@@ -6,8 +6,12 @@
 #include <sys/time.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
+#include <arpa/inet.h>
 #include <stdio.h>
 #include <stdarg.h>
+#include <stdlib.h>
+#include <string.h>
+#include <unistd.h>
 
 
 /////////////////////////////////
