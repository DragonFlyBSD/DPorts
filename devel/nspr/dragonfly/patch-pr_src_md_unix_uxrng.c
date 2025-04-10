--- pr/src/md/unix/uxrng.c.orig	Mon Oct 21 11:31:57 2024
+++ pr/src/md/unix/uxrng.c	Tue Apr
@@ -52,7 +52,7 @@ static size_t GetHighResClock(void* buf, size_t maxbyt
 
 #elif (defined(LINUX) || defined(FREEBSD) || defined(__FreeBSD_kernel__) || \
        defined(NETBSD) || defined(__NetBSD_kernel__) || defined(OPENBSD) || \
-       defined(__GNU__))
+       defined(__GNU__) || defined(DRAGONFLY)) 
 #  include <sys/types.h>
 #  include <sys/stat.h>
 #  include <fcntl.h>
