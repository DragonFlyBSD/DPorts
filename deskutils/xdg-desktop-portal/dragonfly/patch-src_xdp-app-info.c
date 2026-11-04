--- src/xdp-app-info.c.orig
+++ src/xdp-app-info.c
@@ -635,7 +635,38 @@
   /* remap from sandbox to host if needed */
   return remap_path (app_info, path_buffer);
 }
+
+#ifdef __DragonFly__
+/* There is no /proc/self/fd here; F_GETPATH gives the path the fd was
+ * opened by. A deleted file keeps its old name, which check_same_file()
+ * then rejects. */
+static char *
+verify_fd_path (XdpAppInfo  *app_info,
+                int          fd,
+                GError     **error)
+{
+  char path_buffer[PATH_MAX];
+  int saved_errno;
 
+  if (fcntl (fd, F_GETPATH, path_buffer) < 0)
+    {
+      saved_errno = errno;
+      g_set_error (error, G_IO_ERROR, g_io_error_from_errno (saved_errno),
+                   "fcntl F_GETPATH: %s", g_strerror (saved_errno));
+      return NULL;
+    }
+
+  if (path_buffer[0] != '/')
+    {
+      g_set_error (error, G_IO_ERROR, G_IO_ERROR_INVALID_FILENAME,
+                   "Not a regular file or directory: %s", path_buffer);
+      return NULL;
+    }
+
+  return remap_path (app_info, path_buffer);
+}
+#endif
+
 static gboolean
 check_same_file (const char   *path,
                  struct stat  *expected_st_buf,
@@ -741,14 +772,19 @@
         }
     }
 
+#ifdef __DragonFly__
+  path = verify_fd_path (app_info, fd, error);
+#else
   proc_path = g_strdup_printf ("/proc/self/fd/%d", fd);
 
   /* Must be able to read valid path from /proc/self/fd */
   /* This is an absolute and (at least at open time) symlink-expanded path */
   path = verify_proc_self_fd (app_info, proc_path, error);
+#endif
   if (path == NULL)
     return NULL;
 
+#ifdef O_PATH
   if ((fd_flags & O_PATH) == O_PATH)
     {
       int read_access_mode;
@@ -799,6 +835,7 @@
         writable = TRUE;
     }
   else /* Regular file with no O_PATH */
+#endif
     {
       int accmode = fd_flags & O_ACCMODE;
 
