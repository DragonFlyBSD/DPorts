--- src/mirror-screencopy.c.orig	2022-12-04 12:28:56.515051000 +0100
+++ src/mirror-screencopy.c	2022-12-04 12:29:03.595171000 +0100
@@ -10,6 +10,10 @@
 #include <EGL/egl.h>
 #include <EGL/eglext.h>
 
+#ifndef HAVE_MEMFD_CREATE
+#include <sys/mman.h>
+#endif
+
 static void backend_cancel(screencopy_mirror_backend_t * backend) {
     log_error("mirror-screencopy::backend_cancel(): cancelling capture due to error\n");
 
@@ -464,7 +468,11 @@
     ctx->mirror.backend = (mirror_backend_t *)backend;
 
     // create shm fd
+#ifdef HAVE_MEMFD_CREATE
     backend->shm_fd = memfd_create("wl_shm_buffer", 0);
+#else
+    backend->shm_fd = shm_open("wl_shm_buffer", 0, 0);
+#endif
     if (backend->shm_fd == -1) {
         log_error("mirror-screencopy::init(): failed to create shm buffer\n");
         backend_fail(ctx);
