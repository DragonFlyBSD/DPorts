--- tools/dbus-launch.c.orig	2011-07-27 13:38:23.000000000 +0000
+++ tools/dbus-launch.c
@@ -773,6 +773,12 @@ main (int argc, char **argv)
   int bus_address_to_launcher_pipe[2];
   char *config_file;
   
+  if (getenv("PACKAGE_BUILDING") != NULL)
+   {
+     fprintf (stderr, "Package building detected, launch not executed.\n");
+     exit (0);
+   }
+
   exit_with_session = FALSE;
   config_file = NULL;
   
