--- pr/src/md/unix/uxrng.c.orig
+++ pr/src/md/unix/uxrng.c
@@ -32,7 +32,7 @@
 
 #elif (defined(LINUX) || defined(FREEBSD) || defined(__FreeBSD_kernel__) || \
        defined(NETBSD) || defined(__NetBSD_kernel__) || defined(OPENBSD) || \
-       defined(__GNU__) || defined(REDOX))
+       defined(__GNU__) || defined(REDOX) || defined(DRAGONFLY))
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
