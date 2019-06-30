--- skkserv/skkserv.c.intermediate	2013-05-08 12:29:36.488567000 +0000
+++ skkserv/skkserv.c
@@ -89,6 +89,7 @@
  */
 
 #include	"skkserv.h"
+#include <sys/select.h>
 
 #define CLIENT_END	'0'
 #define CLIENT_REQUEST	'1'
@@ -239,7 +240,7 @@ char *argv[];
 	exit(0);
     }
     /* child process */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     daemon(0, 0);
 #else
 
