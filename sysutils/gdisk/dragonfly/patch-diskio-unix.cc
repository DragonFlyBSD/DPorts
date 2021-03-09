--- diskio-unix.cc.orig	2021-01-13 22:14:27 UTC
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
@@ -37,7 +41,7 @@
 
 using namespace std;
 
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
 #define off64_t off_t
 #endif
 
@@ -82,7 +86,7 @@ int DiskIO::OpenForRead(void) {
             if (S_ISDIR(st.st_mode))
                cerr << "The specified path is a directory!\n";
 #if !(defined(__FreeBSD__) || defined(__FreeBSD_kernel__)) \
-                       && !defined(__APPLE__)
+                       && !defined(__APPLE__) && !defined(__DragonFly__)
             else if (S_ISCHR(st.st_mode))
                cerr << "The specified path is a character device!\n";
 #endif
@@ -170,6 +174,11 @@ int DiskIO::GetBlockSize(void) {
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
@@ -279,9 +288,11 @@ int DiskIO::DiskSync(void) {
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
@@ -456,9 +467,19 @@ uint64_t DiskIO::DiskSize(int *err) {
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
