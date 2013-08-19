--- lib/libutil/whotac.c.orig	2000-05-22 10:59:13.000000000 +0000
+++ lib/libutil/whotac.c
@@ -40,6 +40,7 @@
 #include <stdio.h>
 #include <unistd.h>
 #include <string.h>
+#include <errno.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>
@@ -121,7 +122,6 @@ FILE *
 file(name)
 	char *name;
 {
-	extern int errno;
 	FILE *ufp;
 	char *strerror();
 
