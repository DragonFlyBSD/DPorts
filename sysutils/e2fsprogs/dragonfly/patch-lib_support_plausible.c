--- lib/support/plausible.c.orig	2016-06-09 00:39:43.000000000 +0300
+++ lib/support/plausible.c
@@ -204,7 +204,7 @@ int check_plausibility(const char *devic
 
 	if (S_ISBLK(s.st_mode))
 		is_dev = 1;
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	/* On FreeBSD, all disk devices are character specials */
 	if (S_ISCHR(s.st_mode))
 		is_dev = 1;
