--- config.m4.orig	2013-06-05 06:28:53.000000000 +0000
+++ config.m4
@@ -335,7 +335,7 @@ int main() {
 #ifndef ZEND_WIN32
 extern int lock_file;
 
-# if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || (defined(__APPLE__) && defined(__MACH__)/* Darwin */) || defined(__OpenBSD__) || defined(__NetBSD__)
+# if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || (defined(__APPLE__) && defined(__MACH__)/* Darwin */) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #  define FLOCK_STRUCTURE(name, type, whence, start, len) \
                 struct flock name = {start, len, -1, type, whence}
 # elif defined(__svr4__)
