
$FreeBSD: net-mgmt/cdpr/files/patch-conffile.c 300897 2012-07-14 14:29:18Z beat $

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
