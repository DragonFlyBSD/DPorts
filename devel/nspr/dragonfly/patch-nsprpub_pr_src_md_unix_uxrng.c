--- pr/src/md/unix/uxrng.c.orig	2019-08-19 14:12:12 UTC
+++ pr/src/md/unix/uxrng.c
@@ -64,7 +64,7 @@ GetHighResClock(void *buf, size_t maxbyt
 
 #elif (defined(LINUX) || defined(FREEBSD) || defined(__FreeBSD_kernel__) \
     || defined(NETBSD) || defined(__NetBSD_kernel__) || defined(OPENBSD) \
-    || defined(__GNU__))
+    || defined(__GNU__) || defined(__DragonFly__))
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
