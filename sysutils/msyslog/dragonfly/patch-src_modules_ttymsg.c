--- src/modules/ttymsg.c.orig	2014-06-22 12:55:44.538156000 +0000
+++ src/modules/ttymsg.c
@@ -81,7 +81,7 @@ int sigsetmask(int);
 char *
 ttymsg(struct iovec *iov, int iovcnt, char *line, int tmout)
 {
-	static char device[MAXNAMLEN] = { _PATH_DEV };
+	static char device[NAME_MAX] = { _PATH_DEV };
 	static char errbuf[1024];
 	register int cnt, fd, left, wret;
 	struct iovec localiov[6];
