--- fsplib.h.orig	2009-06-13 16:13:00 UTC
+++ fsplib.h
@@ -143,6 +143,10 @@ typedef struct FSP_FILE {
 } FSP_FILE;
 
 
+#ifndef MAXNAMLEN
+#define MAXNAMLEN  255
+#endif
+
 typedef union dirent_workaround {
       struct dirent dirent;
       char fill[offsetof (struct dirent, d_name) + MAXNAMLEN + 1];
