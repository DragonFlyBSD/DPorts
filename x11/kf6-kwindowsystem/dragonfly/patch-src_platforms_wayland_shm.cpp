--- src/platforms/wayland/shm.cpp.orig	2023-12-20 10:59:06 UTC
+++ src/platforms/wayland/shm.cpp
@@ -71,6 +71,7 @@ static wl_shm_format toWaylandFormat(QIm
 
 std::unique_ptr<ShmBuffer> Shm::createBuffer(const QImage &image)
 {
+    int fd;
     if (image.isNull()) {
         return {};
     }
@@ -79,7 +80,7 @@ std::unique_ptr<ShmBuffer> Shm::createBu
     const int32_t byteCount = image.size().height() * stride;
 
 #if defined HAVE_MEMFD
-    int fd = memfd_create("kwayland-shared", MFD_CLOEXEC | MFD_ALLOW_SEALING);
+    fd = memfd_create("kwayland-shared", MFD_CLOEXEC | MFD_ALLOW_SEALING);
     if (fd >= 0) {
         fcntl(fd, F_ADD_SEALS, F_SEAL_SHRINK | F_SEAL_SEAL);
     } else
