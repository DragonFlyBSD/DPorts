--- diskio-unix.cc.orig	2017-07-28 01:41:20 UTC
+++ diskio-unix.cc
@@ -25,6 +25,10 @@
 #include <sys/stat.h>
 #include <unistd.h>
 
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#endif
+
 #ifdef __linux__
 #include "linux/hdreg.h"
 #endif
@@ -78,7 +82,7 @@ int DiskIO::OpenForRead(void) {
             if (S_ISDIR(st.st_mode))
                cerr << "The specified path is a directory!\n";
 #if !(defined(__FreeBSD__) || defined(__FreeBSD_kernel__)) \
-                       && !defined(__APPLE__)
+                       && !defined(__APPLE__) && !defined(__DragonFly__)
             else if (S_ISCHR(st.st_mode))
                cerr << "The specified path is a character device!\n";
 #endif
@@ -166,6 +170,11 @@ int DiskIO::GetBlockSize(void) {
       if (err == 0)
           blockSize = minfo.dki_lbsize;
 #endif
+#ifdef __DragonFly__
+      struct partinfo partinfo;
+      err = ioctl(fd, DIOCGPART, &partinfo);
+      blockSize = partinfo.media_blksize;
+#endif
 #if defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
       err = ioctl(fd, DIOCGSECTORSIZE, &blockSize);
 #endif
@@ -275,9 +284,11 @@ int DiskIO::DiskSync(void) {
 #endif
       platformFound++;
 #endif
-#if defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
+#if defined (__DragonFly__) || defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
       sleep(2);
+#ifndef __DragonFly__
       i = ioctl(fd, DIOCGFLUSH);
+#endif
       cout << "Warning: The kernel may continue to use old or deleted partitions.\n"
            << "You should reboot or remove the drive.\n";
       platformFound++;
@@ -452,9 +463,19 @@ uint64_t DiskIO::DiskSize(int *err) {
           sectors = minfo.dki_capacity;
       platformFound++;
 #endif
+#ifdef __DragonFly__
+      struct partinfo partinfo;
+      *err = ioctl(fd, DIOCGPART, &partinfo);
+      if (*err == 0) {
+          long long b = GetBlockSize();
+          bytes = partinfo.media_size; 
+          sectors = bytes / b;
+      }
+      platformFound++;
+#endif
 #if defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
       *err = ioctl(fd, DIOCGMEDIASIZE, &bytes);
-      long long b = GetBlockSize();
+      long long b = GetBlockSize();i
       sectors = bytes / b;
       platformFound++;
 #endif
