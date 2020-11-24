--- xforward.c.intermediate	2020-11-24 06:29:53.000000000 +0000
+++ xforward.c
@@ -57,6 +57,7 @@
 #include <signal.h>
 #include <errno.h>
 #include <sys/param.h>
+#include <arpa/inet.h>
 
 #include <X11/Xlib.h>
 #include <X11/Xatom.h>
@@ -499,7 +500,7 @@ char *argv[];
 			fprintf(stderr,
 				"bad host connect from %s (%s)\n",
 				hp->h_name,
-				inet_ntoa(dummy.sin_addr.s_addr));
+				inet_ntoa(dummy.sin_addr));
 			close(newsock);
 			continue;
 		    }
