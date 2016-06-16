--- xmit/get_tcp_conn.c.bak	2016-06-16 18:25:15.000000000 +0300
+++ xmit/get_tcp_conn.c
@@ -32,7 +32,11 @@ static char * rcsid = "$Id: get_tcp_conn
 #include <netdb.h>
 #endif	/* NONETDB */
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern	int	errno;
+#endif
 extern	char	*Pname;
 extern	char	*errmsg();
 #ifndef BSD_44
