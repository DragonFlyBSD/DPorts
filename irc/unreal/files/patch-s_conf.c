$FreeBSD: ports/irc/unreal/files/patch-s_conf.c,v 1.3 2012/11/17 05:58:30 svnexp Exp $

--- src/s_conf.c	2011-11-05 02:25:24.000000000 -0700
+++ src/s_conf.c	2011-11-28 10:21:38.000000000 -0800
@@ -9652,7 +9652,7 @@
 	{
 		char *urlfile = url_getfilename(url);
 		char *file_basename = unreal_getfilename(urlfile);
-		char *tmp = unreal_mktemp("tmp", file_basename);
+		char *tmp = unreal_mktemp("%%RUNDIR%%/tmp", file);
 		free(urlfile);
 
 		if (cached)
