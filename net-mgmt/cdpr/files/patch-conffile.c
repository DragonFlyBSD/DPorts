
$FreeBSD: ports/net-mgmt/cdpr/files/patch-conffile.c,v 1.2 2012/11/17 06:00:31 svnexp Exp $

--- conffile.c.orig
+++ conffile.c
@@ -57,6 +57,7 @@
 	struct hostent *h;
 	char *addy;
 	int port;
+	char *tport;
 
 	if (ip && url)
 	{
@@ -70,7 +71,7 @@
 		else
 		{
 			strtok(ip,":");
-			char *tport = strtok(NULL,":");
+			tport = strtok(NULL,":");
 			port = atoi(tport);
 		}
 /*
