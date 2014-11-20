--- gio/gunixvolume.c.orig	2014-11-19 17:50:21.662935000 +0100
+++ gio/gunixvolume.c	2014-11-19 17:51:42.113047000 +0100
@@ -359,7 +359,7 @@
                      gpointer             user_data)
 {
   GUnixVolume *unix_volume = G_UNIX_VOLUME (volume);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   const gchar *argv[] = {"cdcontrol", "-f", NULL, "eject", NULL};
   argv[2] = unix_volume->device_path;
 #else
