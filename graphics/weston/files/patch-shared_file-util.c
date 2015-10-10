--- shared/file-util.c.orig	2015-09-30 22:40:33 +0200
+++ shared/file-util.c
@@ -44,13 +44,13 @@
 	t = time(NULL);
 	t_local = localtime(&t);
 	if (!t_local) {
-		errno = ETIME;
+		errno = ETIMEDOUT;
 		return -1;
 	}
 
 	ret = strftime(str, len, fmt, t_local);
 	if (ret == 0) {
-		errno = ETIME;
+		errno = ETIMEDOUT;
 		return -1;
 	}
 
