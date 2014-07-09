--- tty.sh.orig	2014-04-26 16:29:40.000000000 +0000
+++ tty.sh
@@ -812,7 +812,7 @@ int fd;
   /*
    * Under BSD we have to set the controlling terminal again explicitly.
    */
-# if (defined(__FreeBSD_kernel__) || defined(__GNU__)) && defined(TIOCSCTTY)
+# if (defined(__FreeBSD_kernel__) || defined(__DragonFly__) || defined(__GNU__)) && defined(TIOCSCTTY)
   ioctl(fd, TIOCSCTTY, (char *)0);
 # endif
 
