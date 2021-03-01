--- bin/ad/ad_cp.c.orig	2018-11-29 09:30:45 UTC
+++ bin/ad/ad_cp.c
@@ -821,7 +821,7 @@ static int setfile(const struct stat *fs
     islink = !fdval && S_ISLNK(fs->st_mode);
     mode = fs->st_mode & (S_ISUID | S_ISGID | S_ISVTX | S_IRWXU | S_IRWXG | S_IRWXO);
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     TIMESPEC_TO_TIMEVAL(&tv[0], &fs->st_atimespec);
     TIMESPEC_TO_TIMEVAL(&tv[1], &fs->st_mtimespec);
 #else
