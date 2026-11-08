--- src/shell-global.c.orig
+++ src/shell-global.c
@@ -34,7 +34,7 @@
 #define GNOME_DESKTOP_USE_UNSTABLE_API
 #include <libgnome-desktop/gnome-systemd.h>
 
-#if defined __OpenBSD__ || defined __FreeBSD__
+#if defined __OpenBSD__ || defined __FreeBSD__ || defined __DragonFly__
 #include <sys/sysctl.h>
 #endif
 
@@ -1197,7 +1197,7 @@
   }
 
   g_ptr_array_add (arr, NULL);
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
   char *buf;
   char *buf_p;
   char *buf_end;
@@ -1241,7 +1241,7 @@
   execvp (arr->pdata[0], (char**)arr->pdata);
   g_warning ("failed to reexec: %s", g_strerror (errno));
   g_ptr_array_free (arr, TRUE);
-#if defined __linux__ || defined __FreeBSD__
+#if defined __linux__ || defined __FreeBSD__ || defined __DragonFly__
   g_free (buf);
 #elif defined __OpenBSD__
   g_free (args);
