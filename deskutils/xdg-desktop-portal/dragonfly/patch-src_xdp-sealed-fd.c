--- src/xdp-sealed-fd.c.orig
+++ src/xdp-sealed-fd.c
@@ -34,7 +34,70 @@
 
 #include "xdp-utils.h"
 
+#ifdef __DragonFly__
+/* DragonFly has neither memfd nor file seals. An unlinked temporary file
+ * that only the portal holds is as immutable to the sender, so incoming
+ * fds are copied into one and outgoing data is written to one. */
+#include <sys/stat.h>
+
+static int
+dfly_open_private_tmpfile (void)
+{
+  g_autofree char *tmpl = g_build_filename (g_get_tmp_dir (),
+                                            "xdp-sealed-fd-XXXXXX", NULL);
+  int fd = g_mkstemp_full (tmpl, O_RDWR | O_CLOEXEC, 0600);
+
+  if (fd != -1)
+    unlink (tmpl);
+  return fd;
+}
+
+static GBytes *
+dfly_read_regular_fd (int      fd,
+                      GError **error)
+{
+  g_autoptr(GByteArray) array = g_byte_array_new ();
+  guint8 buf[16384];
+  struct stat st;
+  off_t off = 0;
+  ssize_t n = 0;
+  int saved_errno;
+
+  if (fstat (fd, &st) == -1)
+    {
+      saved_errno = errno;
+      g_set_error (error, G_IO_ERROR, g_io_error_from_errno (saved_errno),
+                   "fstat: %s", g_strerror (saved_errno));
+      return NULL;
+    }
+
+  if (!S_ISREG (st.st_mode))
+    {
+      g_set_error_literal (error, G_IO_ERROR, G_IO_ERROR_NOT_REGULAR_FILE,
+                           "Not a regular file");
+      return NULL;
+    }
+
+  while (off < st.st_size &&
+         (n = pread (fd, buf, MIN ((off_t) sizeof (buf), st.st_size - off), off)) > 0)
+    {
+      g_byte_array_append (array, buf, n);
+      off += n;
+    }
+
+  if (n == -1)
+    {
+      saved_errno = errno;
+      g_set_error (error, G_IO_ERROR, g_io_error_from_errno (saved_errno),
+                   "pread: %s", g_strerror (saved_errno));
+      return NULL;
+    }
+
+  return g_byte_array_free_to_bytes (g_steal_pointer (&array));
+}
+#else
 #define REQUIRED_SEALS (F_SEAL_GROW | F_SEAL_WRITE | F_SEAL_SHRINK)
+#endif
 
 struct _XdpSealedFd
 {
@@ -82,6 +145,17 @@
 
   g_return_val_if_fail (fd != -1, NULL);
 
+#ifdef __DragonFly__
+  {
+    g_autoptr(GBytes) bytes = dfly_read_regular_fd (fd, error);
+
+    (void) saved_errno;
+    (void) seals;
+    if (bytes == NULL)
+      return NULL;
+    return xdp_sealed_fd_new_from_bytes (bytes, error);
+  }
+#else
   seals = fcntl (fd, F_GET_SEALS);
   if (seals == -1)
    {
@@ -108,6 +182,7 @@
                    "fcntl F_ADD_SEALS: %s", g_strerror (saved_errno));
       return NULL;
     }
+#endif
 
   sealed_fd = g_object_new (XDP_TYPE_SEALED_FD, NULL);
   sealed_fd->fd = g_steal_fd (&fd);
@@ -129,7 +204,11 @@
 
   g_return_val_if_fail (bytes != NULL, NULL);
 
+#ifdef __DragonFly__
+  fd = dfly_open_private_tmpfile ();
+#else
   fd = memfd_create ("xdp-sealed-fd", MFD_ALLOW_SEALING);
+#endif
   if (fd == -1)
     {
       int saved_errno;
@@ -183,6 +262,9 @@
       return NULL;
     }
 
+#ifdef __DragonFly__
+  (void) saved_errno;
+#else
   if (fcntl (fd, F_ADD_SEALS, REQUIRED_SEALS) == -1)
     {
       saved_errno = errno;
@@ -192,6 +274,7 @@
                    "fcntl F_ADD_SEALS: %s", g_strerror (saved_errno));
       return NULL;
     }
+#endif
 
   sealed_fd = g_object_new (XDP_TYPE_SEALED_FD, NULL);
   sealed_fd->fd = g_steal_fd (&fd);
