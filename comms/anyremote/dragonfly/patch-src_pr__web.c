--- src/pr_web.c.orig
+++ src/pr_web.c
@@ -33,7 +33,7 @@
 #include <netinet/in.h>
 #include <netdb.h>
 #include <unistd.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/uio.h>
 #else
 #include <sys/sendfile.h>
@@ -296,7 +296,7 @@
         int length = S_ISREG(statbuf->st_mode) ? statbuf->st_size : -1;
         sendHeaders(cc, 200, "OK", NULL, get_mime_type(path), length, statbuf->st_mtime);
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         int err = sendfile(fdout, fd, 0, length, NULL, &bytes_sent, 0);
 #else
         bytes_sent = sendfile(fd,fdout,NULL,length);
