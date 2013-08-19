--- src/getsize.c.orig	2012-06-20 22:00:27.000000000 +0000
+++ src/getsize.c
@@ -50,7 +50,7 @@ extern char *prog;
 typedef unsigned long long u64; /* for BLKGETSIZE64 (slackware) */
 
 int
-getsize(char *path, off_t *sizep)
+ds_getsize(char *path, off_t *sizep)
 {
     struct utsname ut;
     unsigned long long numbytes;
@@ -86,13 +86,37 @@ error:
     return -1;
 }
 
+#elif defined(__DragonFly__)
+#include <sys/ioctl.h>
+#include <sys/diskslice.h>
+
+int
+ds_getsize(char *path, off_t *sizep)
+{
+    struct partinfo device_info;
+    int fd = -1;
+
+    if ((fd = open(path, O_RDONLY | O_NONBLOCK)) < 0)
+        goto error;
+    if (ioctl(fd, DIOCGPART, &device_info) < 0)
+        goto error;
+    if (close(fd) < 0)
+        goto error;
+    *sizep = device_info.media_size;
+    return 0;
+error:
+    if (fd != -1)
+        (void)close(fd);
+    return -1;
+}
+
 #elif defined(__FreeBSD__)
 /* scrub-1.7 tested freebsd 5.3-RELEASE-p5 */
 #include <sys/ioctl.h>
 #include <sys/disk.h>
 
 int
-getsize(char *path, off_t *sizep)
+ds_getsize(char *path, off_t *sizep)
 {
     off_t numbytes;
     int fd = -1;
@@ -118,7 +142,7 @@ error:
 #include <sys/vtoc.h>
 
 int
-getsize(char *path, off_t *sizep)
+ds_getsize(char *path, off_t *sizep)
 {
     struct dk_minfo dkmp;
     int fd = -1;
@@ -144,7 +168,7 @@ error:
 #include <sys/disk.h>
 
 int
-getsize(char *path, off_t *sizep)
+ds_getsize(char *path, off_t *sizep)
 {
     uint32_t blocksize;
     uint64_t blockcount;
@@ -172,7 +196,7 @@ error:
 #include <sys/devinfo.h>
 
 int
-getsize(char *path, off_t *sizep)
+ds_getsize(char *path, off_t *sizep)
 {
     int fd = -1;
     struct devinfo devinfo;
@@ -208,7 +232,7 @@ error:
 #include <sys/scsi.h>
 
 int
-getsize(char *path, off_t *sizep)
+ds_getsize(char *path, off_t *sizep)
 {
     int fd = -1;
     struct capacity cap;
@@ -231,7 +255,7 @@ error:
 /* Unimplemented!  Scrub will tell user to use -s.
  */
 off_t 
-getsize(char *path)
+ds_getsize(char *path)
 {
     errno = ENOSYS;
     return -1;
