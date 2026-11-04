--- src/wayland/shm.c.orig	2026-02-08 19:20:19 UTC
+++ src/wayland/shm.c
@@ -2,6 +2,10 @@
 #include <wlm/context.h>
 #include <sys/mman.h>
 #include <unistd.h>
+#if defined(__DragonFly__)
+#include <fcntl.h>
+#include <stdio.h>
+#endif
 
 // --- helper functions ---
 
@@ -46,7 +50,18 @@
     }
 
     // create shm fd
+#if defined(__DragonFly__)
+    // no memfd_create() or SHM_ANON: create a unique object and unlink it
+    {
+        char name[64];
+        snprintf(name, sizeof(name), "/wl_shm_buffer-%d", (int)getpid());
+        ctx->wl.shmbuf.fd = shm_open(name, O_RDWR | O_CREAT | O_EXCL, 0600);
+        if (ctx->wl.shmbuf.fd != -1)
+            shm_unlink(name);
+    }
+#else
     ctx->wl.shmbuf.fd = memfd_create("wl_shm_buffer", 0);
+#endif
     if (ctx->wl.shmbuf.fd == -1) {
         wlm_log_error("wayland::shm::create_pool(): failed to create shm buffer\n");
         return false;
