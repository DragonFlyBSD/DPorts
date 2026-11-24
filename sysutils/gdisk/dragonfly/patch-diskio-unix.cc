--- diskio-unix.cc.orig
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
 
-#if defined(__APPLE__) || defined(__linux__)
+#if defined(__APPLE__) || defined(__linux__) || defined(__DragonFly__)
 #define off64_t off_t
 #define stat64 stat
 #define fstat64 fstat
@@ -86,7 +90,7 @@
             if (S_ISDIR(st.st_mode))
                cerr << "The specified path is a directory!\n";
 #if !(defined(__FreeBSD__) || defined(__FreeBSD_kernel__)) \
-                       && !defined(__APPLE__)
+                       && !defined(__APPLE__) && !defined(__DragonFly__)
             else if (S_ISCHR(st.st_mode))
                cerr << "The specified path is a character device!\n";
 #endif
@@ -173,6 +177,12 @@
       err = ioctl(fd, DKIOCGMEDIAINFO, &minfo);
       if (err == 0)
           blockSize = minfo.dki_lbsize;
+#endif
+#ifdef __DragonFly__
+      struct partinfo partinfo;
+      err = ioctl(fd, DIOCGPART, &partinfo);
+      if (err == 0)
+          blockSize = partinfo.media_blksize;
 #endif
 #if defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
       err = ioctl(fd, DIOCGSECTORSIZE, &blockSize);
@@ -283,9 +293,11 @@
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
@@ -460,6 +472,16 @@
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
       long long b = GetBlockSize();
