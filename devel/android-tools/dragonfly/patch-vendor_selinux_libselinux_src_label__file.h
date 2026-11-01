--- vendor/selinux/libselinux/src/label_file.h.orig
+++ vendor/selinux/libselinux/src/label_file.h
@@ -6,7 +6,7 @@
 #include <string.h>
 
 #include <sys/stat.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/extattr.h>
 static inline ssize_t getxattr(const char *path, const char *name,
     void *value, size_t size)
