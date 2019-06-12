--- Source/Core/DiscIO/DriveBlob.cpp.orig	2018-12-10 17:26:00 UTC
+++ Source/Core/DiscIO/DriveBlob.cpp
@@ -23,6 +23,8 @@
 #include <sys/ioctl.h>
 #if defined __linux__
 #include <linux/fs.h>  // BLKGETSIZE64
+#elif defined __DragonFly__
+#include <sys/diskslice.h>
 #elif defined __FreeBSD__
 #include <sys/disk.h>  // DIOCGMEDIASIZE
 #elif defined __APPLE__
@@ -83,6 +85,12 @@ DriveReader::DriveReader(const std::stri
 #if defined __linux__
     // NOTE: Doesn't matter if it fails, m_size was initialized to zero
     ioctl(fd, BLKGETSIZE64, &m_size);  // u64*
+#elif defined __DragonFly__
+    struct partinfo device_info;
+    off_t size = 0;
+    ioctl(fd, DIOCGPART, &device_info);
+    size = device_info.media_size;
+    m_size = size;
 #elif defined __FreeBSD__
     off_t size = 0;
     ioctl(fd, DIOCGMEDIASIZE, &size);  // off_t*
