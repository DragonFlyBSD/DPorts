--- lib/portability.c.orig	2021-09-21 22:16:47 UTC
+++ lib/portability.c
@@ -6,7 +6,7 @@
 
 #include "toys.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #endif
 
@@ -53,7 +53,8 @@ int xgetrandom(void *buf, unsigned bufle
 // Get list of mounted filesystems, including stat and statvfs info.
 // Returns a reversed list, which is good for finding overmounts and such.
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
+    defined(__DragonFly__)
 
 #include <sys/mount.h>
 
@@ -241,7 +242,7 @@ int xnotify_wait(struct xnotify *not, ch
 
 #else
 
-#include <sys/inotify.h>
+#include "/usr/local/include/sys/inotify.h"
 
 struct xnotify *xnotify_init(int max)
 {
@@ -338,6 +339,7 @@ ssize_t xattr_fset(int fd, const char* n
 
 #elif !defined(__OpenBSD__)
 
+#ifndef __DragonFly__
 ssize_t xattr_get(const char *path, const char *name, void *value, size_t size)
 {
   return getxattr(path, name, value, size);
@@ -385,7 +387,7 @@ ssize_t xattr_fset(int fd, const char* n
 {
   return fsetxattr(fd, name, value, size, flags);
 }
-
+#endif
 
 #endif
 
@@ -540,7 +542,7 @@ int dev_minor(int dev)
   return dev&0xffffff;
 #elif defined(__OpenBSD__)
   return minor(dev);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return minor(dev);
 #else
 #error
@@ -555,7 +557,7 @@ int dev_major(int dev)
   return (dev>>24)&0xff;
 #elif defined(__OpenBSD__)
   return major(dev);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return major(dev);
 #else
 #error
@@ -570,7 +572,7 @@ int dev_makedev(int major, int minor)
   return (minor&0xffffff)|((major&0xff)<<24);
 #elif defined(__OpenBSD__)
   return makedev(major, minor);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return makedev(major, minor);
 #else
 #error
@@ -642,6 +644,18 @@ int get_block_device_size(int fd, unsign
     return 1;
   }
   return 0;
+}
+#elif defined(__DragonFly__)
+#include <sys/diskslice.h>
+int get_block_device_size(int fd, unsigned long long* size)
+{
+  struct partinfo dp;
+
+  if (ioctl(fd, DIOCGPART, &dp) >= 0) {
+    *size = (off_t)dp.media_size;
+    return 1;
+  }
+  return 0;
 }
 #endif
 
