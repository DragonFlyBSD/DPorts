--- fsplib.c.orig	2009-06-13 16:13:00 UTC
+++ fsplib.c
@@ -660,7 +660,9 @@ int fsp_readdir_r(FSP_DIR *dir,struct di
 #ifdef HAVE_DIRENT_FILENO
     entry->d_fileno = 10;
 #endif    
+#ifndef __DragonFly__
     entry->d_reclen = fentry.reclen;
+#endif
     strncpy(entry->d_name,fentry.name,MAXNAMLEN);
 
     if (fentry.namlen >= MAXNAMLEN)
