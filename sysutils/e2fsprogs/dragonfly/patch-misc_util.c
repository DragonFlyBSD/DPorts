--- ./misc/util.c.orig	2014-05-11 22:24:32.000000000 +0000
+++ ./misc/util.c
@@ -218,7 +218,8 @@ int check_plausibility(const char *devic
 
 	if (S_ISBLK(s.st_mode))
 		is_dev = 1;
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) \
+ || defined(__DragonFly__)
 	/* On FreeBSD, all disk devices are character specials */
 	if (S_ISCHR(s.st_mode))
 		is_dev = 1;
