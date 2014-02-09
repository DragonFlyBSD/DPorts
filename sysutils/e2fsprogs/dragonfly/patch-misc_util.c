--- ./misc/util.c.orig	2014-02-09 16:29:27.105527000 +0000
+++ ./misc/util.c
@@ -93,7 +93,7 @@ void check_plausibility(const char *devi
 				"did you specify it correctly?\n"), stderr);
 		exit(1);
 	}
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	/* On FreeBSD, all disk devices are character specials */
 	if (!S_ISBLK(s.st_mode) && !S_ISCHR(s.st_mode))
 #else
