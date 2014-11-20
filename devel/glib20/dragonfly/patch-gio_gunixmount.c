--- gio/gunixmount.c.orig	2014-11-19 17:57:27.543530000 +0100
+++ gio/gunixmount.c	2014-11-19 17:58:56.263654000 +0100
@@ -356,7 +356,7 @@
                     gpointer             user_data)
 {
   GUnixMount *unix_mount = G_UNIX_MOUNT (mount);
-#ifndef __FreeBSD__
+#if ! defined(__FreeBSD__) && ! defined(__DragonFly__)
   char *argv[] = {"eject", NULL, NULL};
 
   if (unix_mount->mount_path != NULL)
