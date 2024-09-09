--- ctags/main/portable-scandir.c.orig	2023-10-19 16:09:27 UTC
+++ ctags/main/portable-scandir.c
@@ -195,7 +195,9 @@ scandir(const char *directory_name,
                 return -1;
             }
             copy->d_ino = entry->d_ino;
+#ifndef __DragonFly__
             copy->d_reclen = entry->d_reclen;
+#endif
             strcpy(copy->d_name, entry->d_name);
 
             /* Save the copy.  */
