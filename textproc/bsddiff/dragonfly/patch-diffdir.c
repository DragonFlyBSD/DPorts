--- diffdir.c.orig	2012-07-02 21:05:57.000000000 +0200
+++ diffdir.c	2015-12-03 16:49:59.730959000 +0100
@@ -222,9 +222,9 @@ slurpdir(char *path, char **bufp, int en
 		dp = (struct dirent *)cp;
 		if (dp->d_fileno != 0)
 			entries++;
-		if (dp->d_reclen <= 0)
+		if (_DIRENT_RECLEN(dp->d_namlen) <= 0)
 			break;
-		cp += dp->d_reclen;
+		cp += _DIRENT_RECLEN(dp->d_namlen);
 	}
 	dirlist = emalloc(sizeof(struct dirent *) * (entries + 1));
 	for (entries = 0, cp = buf; cp < ebuf; ) {
@@ -233,9 +233,9 @@ slurpdir(char *path, char **bufp, int en
 			dp->d_status = 0;
 			dirlist[entries++] = dp;
 		}
-		if (dp->d_reclen <= 0)
+		if (_DIRENT_RECLEN(dp->d_namlen) <= 0)
 			break;
-		cp += dp->d_reclen;
+		cp += _DIRENT_RECLEN(dp->d_namlen);
 	}
 	dirlist[entries] = NULL;
 
