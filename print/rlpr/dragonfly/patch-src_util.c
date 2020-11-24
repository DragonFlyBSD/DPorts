--- src/util.c.intermediate	2020-11-24 06:33:33.000000000 +0000
+++ src/util.c
@@ -27,6 +27,7 @@
 #include <netinet/in.h>
 #include <fcntl.h>
 #include <stdlib.h>
+#include <arpa/inet.h>
 
 #ifdef	HAVE_SYS_SELECT_H
 #include <sys/select.h>
