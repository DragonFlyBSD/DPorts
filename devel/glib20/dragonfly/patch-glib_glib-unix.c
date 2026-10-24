--- glib/glib-unix.c.orig	2026-07-29 13:17:36 UTC
+++ glib/glib-unix.c
@@ -967,7 +967,7 @@ g_unix_fd_query_path (int      fd,
   g_free (proc_path);
 
   return g_steal_pointer (&path);
-#elif defined (__FreeBSD__) || defined(__DragonFly__)
+#elif defined (__FreeBSD__)
   struct kinfo_file kf = {0};
 
   kf.kf_structsize = sizeof (kf);
@@ -982,6 +982,18 @@ g_unix_fd_query_path (int      fd,
     }
 
   return g_strdup (kf.kf_path);
+#elif defined(__DragonFly__)
+  /* DragonFly lacks F_KINFO/struct kinfo_file; resolve via procfs like Linux */
+  {
+    char *path;
+    char *proc_path;
+
+    proc_path = g_strdup_printf ("/proc/self/fd/%d", fd);
+    path = g_file_read_link (proc_path, error);
+    g_free (proc_path);
+
+    return g_steal_pointer (&path);
+  }
 #elif defined (__APPLE__) || defined (__NetBSD__) || defined (__OpenBSD__)
   char file_path[MAXPATHLEN] = {0};
 
