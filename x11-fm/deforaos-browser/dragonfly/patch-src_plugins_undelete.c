--- src/plugins/undelete.c.orig	2015-04-05 21:32:34 UTC
+++ src/plugins/undelete.c
@@ -216,7 +216,7 @@ static gboolean _undelete_on_idle(gpoint
 				undelete->selection, 1);
 	else if(i > 0)
 	{
-		for(j = 0; j + (int)sizeof(de) < i; j += de.d_reclen)
+		for(j = 0; j + (int)sizeof(de) < i; j += _DIRENT_RECLEN(de.d_namlen))
 		{
 			memcpy(&de, &buf[j], sizeof(de));
 #ifdef __linux__
