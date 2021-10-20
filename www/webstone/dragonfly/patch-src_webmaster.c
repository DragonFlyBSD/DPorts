--- src/webmaster.c.intermediate	2020-11-24 05:23:24.000000000 +0000
+++ src/webmaster.c
@@ -40,6 +40,7 @@
 #include <sys/time.h>
 #include <netinet/in.h>
 #include <netdb.h>
+#include <arpa/inet.h>
 #else /* WIN32 */
 #define	FD_SETSIZE  1024 /* max size for select() - keep before <winsock.h> 
 			  * and same size as MAXCLIENTS */
