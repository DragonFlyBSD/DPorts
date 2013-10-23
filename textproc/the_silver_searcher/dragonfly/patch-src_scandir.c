--- src/scandir.c.orig	2013-09-29 21:56:45.000000000 +0000
+++ src/scandir.c
@@ -42,7 +42,7 @@ int ag_scandir(const char *dirname,
 #ifdef __MINGW32__
         d = malloc(sizeof(struct dirent));
 #else
-        d = malloc(entry->d_reclen);
+        d = malloc(_DIRENT_RECLEN(entry->d_namlen));
 #endif
 
         if (d == NULL) {
@@ -51,7 +51,7 @@ int ag_scandir(const char *dirname,
 #ifdef __MINGW32__
         memcpy(d, entry, sizeof(struct dirent));
 #else
-        memcpy(d, entry, entry->d_reclen);
+        memcpy(d, entry, _DIRENT_RECLEN(entry->d_namlen));
 #endif
 
         names[results_len] = d;
