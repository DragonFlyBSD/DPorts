--- database.c.orig	2015-09-17 20:53:01.000000000 +0300
+++ database.c
@@ -28,6 +28,10 @@ static char rcsid[] = "$Id: database.c,v
 
 #include "cron.h"
 
+#ifndef MAXNAMLEN
+#define MAXNAMLEN 255
+#endif
+
 #define TMAX(a,b) ((a)>(b)?(a):(b))
 
 static	void		process_crontab(const char *, const char *,
