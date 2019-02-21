--- shared/os-compatibility.c.orig	2015-10-01 22:45:22 +0200
+++ shared/os-compatibility.c
@@ -30,7 +30,6 @@
 #include <unistd.h>
 #include <fcntl.h>
 #include <errno.h>
-#include <sys/epoll.h>
 #include <string.h>
 #include <stdlib.h>
 
@@ -90,23 +89,6 @@
 	return -1;
 }
 
-int
-os_epoll_create_cloexec(void)
-{
-	int fd;
-
-#ifdef EPOLL_CLOEXEC
-	fd = epoll_create1(EPOLL_CLOEXEC);
-	if (fd >= 0)
-		return fd;
-	if (errno != EINVAL)
-		return -1;
-#endif
-
-	fd = epoll_create(1);
-	return set_cloexec_or_close(fd);
-}
-
 static int
 create_tmpfile_cloexec(char *tmpname)
 {
