--- ZendAccelerator.h.orig	2014-01-20 08:36:37.000000000 -0500
+++ ZendAccelerator.h
@@ -98,7 +98,9 @@
 #ifndef ZEND_WIN32
 extern int lock_file;
 
-# if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || (defined(__APPLE__) && defined(__MACH__)/* Darwin */) || defined(__OpenBSD__) || defined(__NetBSD__)
+# if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) \
+ || (defined(__APPLE__) && defined(__MACH__)/* Darwin */) || defined(__OpenBSD__) \
+ || defined(__NetBSD__) || defined(__DragonFly__)
 #  define FLOCK_STRUCTURE(name, type, whence, start, len) \
 		struct flock name = {start, len, -1, type, whence}
 # elif defined(__svr4__)
