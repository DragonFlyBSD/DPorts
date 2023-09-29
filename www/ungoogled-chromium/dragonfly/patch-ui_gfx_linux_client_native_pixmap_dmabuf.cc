diff --git ui/gfx/linux/client_native_pixmap_dmabuf.cc ui/gfx/linux/client_native_pixmap_dmabuf.cc
index 9efb7269b9b..29115e7113a 100644
--- ui/gfx/linux/client_native_pixmap_dmabuf.cc
+++ ui/gfx/linux/client_native_pixmap_dmabuf.cc
@@ -5,7 +5,7 @@
 #include "ui/gfx/linux/client_native_pixmap_dmabuf.h"
 
 #include <fcntl.h>
-#if !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <linux/version.h>
 #endif
 #include <stddef.h>
@@ -29,7 +29,7 @@
 #include "ui/gfx/buffer_format_util.h"
 #include "ui/gfx/switches.h"
 
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 struct dma_buf_sync {
   __u64 flags;
 };
