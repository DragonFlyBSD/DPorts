--- src/backends/meta-screen-cast-stream-src.c.orig	2022-08-01 14:04:42 UTC
+++ src/backends/meta-screen-cast-stream-src.c
@@ -767,8 +767,19 @@ on_stream_add_buffer (void             *
       /* Fallback to a memfd buffer */
       spa_data[0].type = SPA_DATA_MemFd;
       spa_data[0].flags = SPA_DATA_FLAG_READWRITE;
+#ifndef __DragonFly__
       spa_data[0].fd = memfd_create ("mutter-screen-cast-memfd",
                                      MFD_CLOEXEC | MFD_ALLOW_SEALING);
+#else
+      /*
+       * XXX(tuxillo): This is wrong at many levels. We do not support
+       * fcntl fd sealing (see F_{ADD,GET}_SEAL and also we are not
+       * handling further seal calls so the functionality provided there
+       * is bypassed. May the god of procrastination praise me!
+       */
+      spa_data[0].fd = shm_open ("mutter-screen-cast-memfd",
+                                 O_CLOEXEC, 0);
+#endif      
       if (spa_data[0].fd == -1)
         {
           g_critical ("Can't create memfd: %m");
@@ -783,6 +794,7 @@ on_stream_add_buffer (void             *
           return;
         }
 
+#ifndef __DragonFly__
       seals = F_SEAL_GROW | F_SEAL_SHRINK | F_SEAL_SEAL;
       if (fcntl (spa_data[0].fd, F_ADD_SEALS, seals) == -1)
         g_warning ("Failed to add seals: %m");
@@ -798,7 +810,9 @@ on_stream_add_buffer (void             *
           g_critical ("Failed to mmap memory: %m");
           return;
         }
+#endif
     }
+
 }
 
 static void
