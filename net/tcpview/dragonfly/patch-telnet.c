--- telnet.c.orig	1993-04-22 20:40:33 UTC
+++ telnet.c
@@ -38,6 +38,9 @@ static char rcsid[] =
 
 #include <stdio.h>
 #include <sys/types.h>
+#include <netinet/in.h>	/* for ntohl() */
+
+int hexread(void *, int);
 
 int PrintFrames = 0;  /* print headers ? */
 int EndSub=1;  /* begin/end subnegotiation */
