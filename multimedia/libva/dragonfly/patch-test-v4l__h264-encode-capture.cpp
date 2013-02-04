--- test/v4l_h264/encode/capture.cpp.orig	2013-02-03 18:26:44.508718000 -0500
+++ test/v4l_h264/encode/capture.cpp	2013-02-03 18:27:33.758767000 -0500
@@ -38,7 +38,7 @@
 #include <fcntl.h> /* low-level i/o */
 #include <errno.h>
 #include <unistd.h>
-#ifdef __FreeBSD__
+#ifdef __DragonFly__
 #include <stdlib.h>
 #else
 #include <malloc.h>
@@ -456,7 +456,7 @@
     }
     for (n_buffers = 0; n_buffers < 4; ++n_buffers) {
         buffers[n_buffers].length = buffer_size;
-#ifdef __FreeBSD__
+#ifdef __DragonFly__
 	if(posix_memalign(&buffers[n_buffers].start, page_size, buffer_size))
 	{
 #else
