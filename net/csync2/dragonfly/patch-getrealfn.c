--- getrealfn.c.orig	2013-05-02 15:58:04.000000000 +0300
+++ getrealfn.c
@@ -28,7 +28,7 @@
 
 static char *my_get_current_dir_name()
 {
-#if defined __CYGWIN__ || defined __FreeBSD__ || defined __OpenBSD__ || defined __NetBSD__
+#if defined __CYGWIN__ || defined __FreeBSD__ || defined __OpenBSD__ || defined __NetBSD__ || defined __DragonFly__
 	char *r = malloc(1024);
 	if (!getcwd(r, 1024))
 		strcpy(r, "/__PATH_TO_LONG__");
