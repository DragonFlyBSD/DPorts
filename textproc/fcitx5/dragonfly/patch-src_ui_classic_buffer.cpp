--- src/ui/classic/buffer.cpp.orig	2020-12-16 20:24:12 UTC
+++ src/ui/classic/buffer.cpp
@@ -49,7 +49,12 @@ Buffer::Buffer(WlShm *shm, uint32_t widt
         return;
     }
 
+#ifndef __DragonFly__
     if (posix_fallocate(fd.fd(), 0, alloc) != 0) {
+#else
+    // Untested
+    if (ftruncate(fd.fd(), 0 + alloc) < 0) {
+#endif
         return;
     }
     uint8_t *data = (uint8_t *)mmap(nullptr, alloc, PROT_READ | PROT_WRITE,
