--- tests/nouveau/threaded.c.orig	2021-07-02 12:49:05 UTC
+++ tests/nouveau/threaded.c
@@ -36,7 +36,7 @@ static int failed;
 
 static int import_fd;
 
-#if defined(__GLIBC__) || defined(__FreeBSD__)
+#if defined(__GLIBC__) || defined(__FreeBSD__) || defined(__DragonFly__)
 int ioctl(int fd, unsigned long request, ...)
 #else
 int ioctl(int fd, int request, ...)
