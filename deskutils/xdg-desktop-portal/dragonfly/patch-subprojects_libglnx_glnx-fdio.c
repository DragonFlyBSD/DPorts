--- subprojects/libglnx/glnx-fdio.c.orig
+++ subprojects/libglnx/glnx-fdio.c
@@ -722,7 +722,21 @@
 
   if (TEMP_FAILURE_RETRY (symlinkat (buf, dest_dfd, dest_subpath)) != 0)
     return glnx_throw_errno_prefix (error, "symlinkat");
+
+#ifdef __DragonFly__
+  /* No O_PATH fd to the new symlink here: check and chown it by name. */
+  target = glnx_readlinkat_malloc (dest_dfd, dest_subpath, cancellable, error);
+  if (!target)
+    return FALSE;
 
+  if (strcmp (buf, target) != 0)
+    return glnx_throw (error, "Symlink target changed during copy");
+
+  if (TEMP_FAILURE_RETRY (fchownat (dest_dfd, dest_subpath,
+                                    src_stbuf->st_uid, src_stbuf->st_gid,
+                                    AT_SYMLINK_NOFOLLOW)) != 0)
+    return glnx_throw_errno_prefix (error, "fchownat");
+#else
   fd = TEMP_FAILURE_RETRY (openat (dest_dfd, dest_subpath,
                                    O_PATH | O_NOFOLLOW | O_CLOEXEC));
   if (fd < 0)
@@ -750,6 +764,7 @@
   if (TEMP_FAILURE_RETRY (fchownat (fd, "", src_stbuf->st_uid, src_stbuf->st_gid,
                                     AT_EMPTY_PATH)) != 0)
     return glnx_throw_errno_prefix (error, "fchownat");
+#endif
 
   return TRUE;
 }
@@ -902,7 +917,13 @@
        */
       if (try_sendfile && max_bytes != (off_t) -1)
         {
+#ifdef __DragonFly__
+          /* DragonFly's sendfile() only writes to sockets. */
+          n = -1;
+          errno = ENOSYS;
+#else
           n = sendfile (fdt, fdf, NULL, max_bytes);
+#endif
           if (n < 0)
             {
               if (G_IN_SET (errno, EINVAL, ENOSYS))
