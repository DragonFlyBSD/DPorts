--- src/backends/meta-screen-cast-stream-src.c.orig	2025-09-13 21:26:45 UTC
+++ src/backends/meta-screen-cast-stream-src.c
@@ -40,6 +40,10 @@
 #include <stdint.h>
 #include <sys/mman.h>
 
+#ifdef __DragonFly__
+#include <unistd.h>
+#endif
+
 #ifdef HAVE_NATIVE_BACKEND
 #include <drm_fourcc.h>
 #endif
@@ -1824,7 +1828,9 @@ on_stream_add_buffer (void             *data,
     }
   else
     {
+#ifndef __DragonFly__
       unsigned int seals;
+#endif
 
       priv->uses_dma_bufs = FALSE;
 
@@ -1842,8 +1848,29 @@ on_stream_add_buffer (void             *data,
       /* Fallback to a memfd buffer */
       spa_data->type = SPA_DATA_MemFd;
       spa_data->flags = SPA_DATA_FLAG_READWRITE;
+#ifdef __DragonFly__
+      {
+        char shm_name[64];
+
+        g_snprintf (shm_name, sizeof (shm_name),
+                    "/mutter-screen-cast-%d-%u",
+                    (int) getpid (), priv->buffer_count);
+        shm_unlink (shm_name);
+        spa_data->fd = shm_open (shm_name,
+                                 O_RDWR | O_CREAT | O_EXCL,
+                                 0600);
+        if (spa_data->fd == -1)
+          {
+            g_critical ("Can't create shm object: %m");
+            return;
+          }
+        shm_unlink (shm_name);
+        fcntl (spa_data->fd, F_SETFD, FD_CLOEXEC);
+      }
+#else
       spa_data->fd = memfd_create ("mutter-screen-cast-memfd",
                                    MFD_CLOEXEC | MFD_ALLOW_SEALING);
+#endif
       if (spa_data->fd == -1)
         {
           g_critical ("Can't create memfd: %m");
@@ -1861,9 +1888,11 @@ on_stream_add_buffer (void             *data,
           return;
         }
 
+#ifndef __DragonFly__
       seals = F_SEAL_GROW | F_SEAL_SHRINK | F_SEAL_SEAL;
       if (fcntl (spa_data->fd, F_ADD_SEALS, seals) == -1)
         g_warning ("Failed to add seals: %m");
+#endif
 
       spa_data->data = mmap (NULL,
                              spa_data->maxsize,
