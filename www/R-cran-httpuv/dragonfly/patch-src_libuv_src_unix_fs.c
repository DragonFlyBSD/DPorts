--- src/libuv/src/unix/fs.c.orig	2015-08-03 21:49:59.000000000 +0300
+++ src/libuv/src/unix/fs.c
@@ -39,7 +39,7 @@
 
 #if defined(__linux__) || defined(__sun)
 # include <sys/sendfile.h>
-#elif defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/socket.h>
 # include <sys/uio.h>
 #endif
@@ -427,7 +427,7 @@ static ssize_t uv__fs_sendfile(uv_fs_t*
 
     return -1;
   }
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__APPLE__)
   {
     off_t len;
     ssize_t r;
@@ -437,7 +437,7 @@ static ssize_t uv__fs_sendfile(uv_fs_t*
      * number of bytes have been sent, we don't consider it an error.
      */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     len = 0;
     r = sendfile(in_fd, out_fd, req->off, req->len, NULL, &len, 0);
 #else
