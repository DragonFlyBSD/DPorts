--- getservent.c.orig	1993-04-22 20:40:02 UTC
+++ getservent.c
@@ -41,7 +41,8 @@ static char sccsid[] = "@(#)getservent.c
 
 #include <sys/types.h>
 #include <sys/socket.h>
-#include <netdb.h> 
+#include <netdb.h>
+#include <arpa/inet.h>
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
