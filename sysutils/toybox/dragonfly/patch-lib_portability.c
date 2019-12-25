--- lib/portability.c.intermediate	2019-12-25 19:31:18.000000000 +0000
+++ lib/portability.c
@@ -49,7 +49,7 @@ int xgetrandom(void *buf, unsigned bufle
 // Get list of mounted filesystems, including stat and statvfs info.
 // Returns a reversed list, which is good for finding overmounts and such.
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/mount.h>
 
@@ -333,6 +333,7 @@ ssize_t xattr_fset(int fd, const char* n
 
 #else
 
+#ifndef __DragonFly__
 ssize_t xattr_get(const char *path, const char *name, void *value, size_t size)
 {
   return getxattr(path, name, value, size);
@@ -380,7 +381,7 @@ ssize_t xattr_fset(int fd, const char* n
 {
   return fsetxattr(fd, name, value, size, flags);
 }
-
+#endif
 
 #endif
 
