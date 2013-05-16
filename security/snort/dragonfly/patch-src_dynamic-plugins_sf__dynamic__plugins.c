--- src/dynamic-plugins/sf_dynamic_plugins.c.orig	2013-02-19 22:14:23.000000000 +0000
+++ src/dynamic-plugins/sf_dynamic_plugins.c
@@ -253,7 +253,7 @@ void LoadAllLibs(char *path, LoadLibrary
         dir_entry = readdir(directory);
         while (dir_entry != NULL)
         {
-            if ((dir_entry->d_reclen != 0) &&
+            if ((_DIRENT_RECLEN(dir_entry->d_namlen) != 0) &&
                 (fnmatch(MODULE_EXT, dir_entry->d_name, FNM_PATHNAME | FNM_PERIOD) == 0))
             {
                 /* Get the string up until the first dot.  This will be
