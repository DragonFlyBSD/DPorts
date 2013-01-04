--- thunar-vfs/thunar-vfs-os-bsd.c.orig	2011-01-16 17:48:38.000000000 +0100
+++ thunar-vfs/thunar-vfs-os-bsd.c	2013-01-04 22:18:59.178552000 +0100
@@ -107,11 +107,12 @@
             }
 
           /* verify the next record length */
-          if (G_UNLIKELY (dp->d_reclen <= 0 || dp->d_reclen > sizeof (dbuf) + 1 - loc))
+          if (G_UNLIKELY (_DIRENT_RECLEN(dp->d_namlen) <= 0 || 
+              _DIRENT_RECLEN(dp->d_namlen) > sizeof (dbuf) + 1 - loc))
             goto invalid;
 
           /* adjust the location pointer */
-          loc += dp->d_reclen;
+          loc += _DIRENT_RECLEN(dp->d_namlen);
 
           /* verify the inode */
           if (G_UNLIKELY (dp->d_fileno == 0))
@@ -266,11 +267,12 @@
         break;
 
       /* verify the next record length */
-      if (G_UNLIKELY (dp->d_reclen <= 0 || dp->d_reclen > dlen + 1 - loc))
+      if (G_UNLIKELY (_DIRENT_RECLEN(dp->d_namlen) <= 0 ||
+         _DIRENT_RECLEN(dp->d_namlen) > dlen + 1 - loc))
         break;
 
       /* adjust the location pointer */
-      loc += dp->d_reclen;
+      loc += _DIRENT_RECLEN(dp->d_namlen);
 
       /* verify the inode */
       if (G_UNLIKELY (dp->d_fileno == 0))
