--- pr/src/md/unix/uxrng.c.orig	2014-06-05 21:42:08.000000000 +0000
+++ pr/src/md/unix/uxrng.c
@@ -86,7 +86,7 @@ GetHighResClock(void *buf, size_t maxbyt
 
 #elif (defined(LINUX) || defined(FREEBSD) || defined(__FreeBSD_kernel__) \
     || defined(NETBSD) || defined(__NetBSD_kernel__) || defined(OPENBSD) \
-    || defined(SYMBIAN) || defined(__GNU__))
+    || defined(SYMBIAN) || defined(__GNU__)) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
