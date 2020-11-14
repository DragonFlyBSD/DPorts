--- lib/contrib/gnome-languages.c.orig	2020-09-11 23:16:40 UTC
+++ lib/contrib/gnome-languages.c
@@ -466,6 +466,10 @@ select_dirs (const struct dirent *dirent
         if (strcmp (dirent->d_name, ".") != 0 && strcmp (dirent->d_name, "..") != 0) {
                 mode_t mode = 0;
 
+#ifndef DTTOIF
+#define DTTOIF(dirtype) ((dirtype) << 12)
+#endif
+
 #ifdef _DIRENT_HAVE_D_TYPE
                 if (dirent->d_type != DT_UNKNOWN && dirent->d_type != DT_LNK) {
                         mode = DTTOIF (dirent->d_type);
