--- gtk3/gdm-languages.c.orig	2013-10-27 02:45:38.000000000 +0300
+++ gtk3/gdm-languages.c
@@ -506,7 +506,7 @@ select_dirs(const struct dirent *dirent)
     if (strcmp(dirent->d_name, ".") != 0 && strcmp(dirent->d_name, "..") != 0) {
         mode_t mode = 0;
 
-#ifdef _DIRENT_HAVE_D_TYPE
+#if defined(_DIRENT_HAVE_D_TYPE) && !defined(__DragonFly__)
         if (dirent->d_type != DT_UNKNOWN && dirent->d_type != DT_LNK) {
             mode = DTTOIF(dirent->d_type);
         } else
